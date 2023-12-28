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
	$(RM) unit_tests
	@echo 'Executable deleted'

re: fclean all

test:
	g++ $(src) tests/units/*.cpp -W -Iincludes -o unit_tests --coverage -lcriterion
	@./unit_tests
	gcovr --exclude tests/
	gcovr --exclude tests/ --branches

.PHONY: re fclean clean all test