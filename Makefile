src = src/main.cpp	\
	  src/debug.cpp	\
	  src/errorHandling.cpp	\

NAME = decrypter
OBJ = ${src:.cpp=.o}

$(NAME): $(OBJ)
	g++ -o $(NAME) $(src) -I includes -Wall -g3
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

tests_run:
	$(CXX) $(src) \
	tests/*.cpp -W -Iinclude -o unit_tests \
	--coverage -lcriterion
	@./unit_tests

test: mr_clean
	clear
	$(CXX) $(src) \
	tests/*.cpp -W -Iinclude -o unit_tests \
	--coverage -lcriterion
	@./unit_tests
	gcovr --exclude tests/
	gcovr --exclude tests/ --branches
	mr_clean

.PHONY: re fclean clean all