CPP			:= c++
CPPFLAGS		:= -g -Wall -Wextra -Werror -std=c++98
OBJFLAGS 	:= -c

NAME		:= Materia

SRCS_F		:= 	main \
				AMateria \
				Character \
				Cure \
				Ice \
				MateriaSource

SRCS		:= $(addsuffix .cpp, $(SRCS_F))
OBJ			:= $(addsuffix .o, $(SRCS_F))

all: 		$(NAME)

%.o: %.cpp
				$(CPP) $(CPPFLAGS) $(OBJFLAGS) $< -o $@

$(NAME): 	$(OBJ)
				$(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
				@rm -f $(OBJ)

fclean:		clean
				@rm -f $(NAME)

re: 		fclean all

.PHONY: 	all clean fclean re