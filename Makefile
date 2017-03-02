NAME = fillit

SRCS = src/pieces.c \
	   src/main.c \
	   src/ft_list.c \
	   src/ft_error.c \
	   src/ft_read_file.c \
	   src/ft_get_map.c \
	   src/ft_map_initialize.c \
	   src/ft_get_coordonates.c \

OBJ = pieces.o \
	  main.o \
	  ft_list.o \
	  ft_error.o \
	  ft_read_file.o \
	  ft_get_map.o \
	  ft_map_initialize.o \
	  ft_get_coordonates.o \

INC = includes/

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME) :
	@make -C libft
	@gcc $(FLAGS) -I $(INC) -c  $(SRCS)
	@gcc $(OBJ) -L libft/ -lft -o $(NAME)

clean:
	@make -C libft/ clean
	@rm -f $(OBJ)

fclean: clean
	@make -C libft/ fclean
	@rm -f $(NAME)

re: fclean all
