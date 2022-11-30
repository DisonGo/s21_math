PROJECT_NAME	=s21_math
ODIR 			= ./obj
INC_PATH		= ./
LIB_SRC_DIR		= ./Functions
UNAME_S 		:= $(shell uname -s)
TEST_SRC		= ${PROJECT_NAME}_test.c
Flags 			= -Werror -Wall -Wextra -std=c11
gcc 			= gcc $(Flags)
LIB_SOURCES		= $(shell find $(LIB_SRC_DIR) -name '*.c')
REPORT_FILES	= $(shell find . -name '*.gcno') $(shell find . -name '*.gcda')
INC				:= $(shell find . -name '*.h')
OBJ 			= $(patsubst %.c,$(ODIR)/%.o, $(LIB_SOURCES))

ifeq ($(UNAME_S),Linux)
	TEST_CHECK_F= -lcheck
	OPEN_CMD = xdg-open
	ADD_LIB = -lm -lrt -lpthread
endif

ifeq ($(UNAME_S),Darwin)
	TEST_CHECK_F= $(shell pkg-config --cflags --libs check)
	OPEN_CMD = open
	ADD_LIB =
endif

$(ODIR)/%.o: %.c $(INC)
	$(gcc) $(ADD_LIB) -I${INC_PATH} $<  -c -o $@

all: clear $(PROJECT_NAME).a

clear:
	clear

clean:
	rm -rf $(PROJECT_NAME).a test *.out
	rm -rf $(ODIR)/*.o $(ODIR)/*.gc*
	rm -rf $(ODIR)/*/*.o $(ODIR)/*/*.gc*
	rm -rf ./gcov/*.o ./gcov/*.gc*
	rm -rf ./*.gc*
	rm -rf report*

obj: $(OBJ)

clang:
	clang-format --style=Google -n ./*.c ./*.h ${LIB_SRC_DIR}/*.c

clang-replace:
	clang-format --style=Google -i *.c *.h ${LIB_SRC_DIR}/*.c

$(PROJECT_NAME).a: obj
	ar rcs $@ $(ODIR)/$(LIB_SRC_DIR)/*.o

set_debug_gcc:
	$(eval gcc += -g)
	@echo s21_math:Debug build

set_report_gcc:
	$(eval gcc += -fprofile-arcs -ftest-coverage -fPIC)
	@echo s21_math:Check build

test: $(TEST_SRC) $(PROJECT_NAME).a
	$(gcc) $^ -o $@ $(TEST_CHECK_F) $(ADD_LIB)

gcov_report: clean set_report_gcc test
	./test
	gcov *.c ${LIB_SRC_DIR}/*.c -o $(ODIR)/*
	mv *.gcov ./gcov
	mv ./*.gc* $(ODIR)/*/*.gc* ./gcov
	lcov -t ./gcov -o report.info -c -d ./gcov
	genhtml -o report report.info
	$(OPEN_CMD) ./report/index.html

.PHONY: clean obj clear $(PROJECT_NAME) test clang-replace all $(PROJECT_NAME).a set_debug_gcc set_report_gcc gcov_report