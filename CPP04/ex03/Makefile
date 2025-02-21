MAKEFLAGS += --silent
CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98 -Iincludes -g3
SRCS =	main.cpp\
		AMateria.cpp\
		Ice.cpp
		
OBJ = $(addprefix $(BIN_DIR)/,$(SRCS:.c=.o))
NAME = Materia
LIBFT = libft
SRCS_DIR = .
BIN_DIR = ./bin

# ------------------------------ Colors ------------------------------

BOLD_PURPLE	=	\033[1;35m
BOLD_CYAN	=	\033[1;36m
BOLD_YELLOW	=	\033[1;33m
NO_COLOR	=	\033[0m

# ------------------------------ Messages ------------------------------

COMP_START	=	echo "\n🚧 $(BOLD_YELLOW)Make: $(NO_COLOR)Starting the compilation...\n"
COMP_END	=	echo "\n🏗️ $(BOLD_YELLOW)Make: $(NO_COLOR)Compilation done\n"
CLEANED		=	echo "\n💧 $(BOLD_YELLOW)Clean: $(NO_COLOR)Removed all the \".o\" files \n"
FCLEANED	=	echo "\n🧼 $(BOLD_YELLOW)Fclean: $(NO_COLOR)Removed the executables \n"

all : $(NAME)

$(NAME) : $(OBJ)
	@$(COMP_START)
	@make -C $(LIBFT)
	cc $(CFLAGS) $(OBJ) -o $(NAME) ./libft/libft.a -ldl -lm -lpthread -LMLX/build -lmlx42 -IMLX/include -lglfw
	@$(COMP_END)

$(BIN_DIR)/%.o: $(SRCS_DIR)/%.c
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -rf $(BIN_DIR)
	@make clean -C $(LIBFT)
	@$(CLEANED)

fclean : clean
	rm -f $(NAME)
	rm -f $(LIBFT)/libft.a
	@$(FCLEANED)

re : fclean all

.PHONY : all clean fclean re