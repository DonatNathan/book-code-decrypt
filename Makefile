src = src/main.cpp	\
	  src/debug.cpp	\
	  src/errorHandling.cpp	\

NAME = decrypter
OBJ = ${src:.cpp=.o}

$(NAME): $(OBJ)
	g++ -o $(NAME) $(src) -Iinclude -g3
	@echo 'Files compiled'

all: $(NAME)

clean:
	$(RM) $(OBJ)
	@echo 'Temporary files deleted'

fclean: clean
	$(RM) $(NAME)
	$(RM) *.gcno *.gcda
	$(RM) unit_tests
	@echo 'Executable deleted'

re: fclean all

test:
	g++ src/errorHandling.cpp src/debug.cpp tests/units/*.cpp -Iincludes -o unit_tests --coverage -lcriterion
	@./unit_tests
	gcovr --exclude tests/
	gcovr --exclude tests/ --branches

.PHONY: re fclean clean all test