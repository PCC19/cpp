NAME = megaphone

HEADER_DIR =	./includes/

SDIR =	./
ODIR =	./

SRCS =	$(SDIR)megaphone.c

OBJS =	$(patsubst $(SDIR)%.cpp, $(ODIR)%.o, $(SRCS))

CC = clang++
#HEADERS = -I $(HEADER_DIR) -I./$(LIBFT_DIR)
C_FLAGS = -Wall -Werror -Wextra -g
C_SANIT = -fsanitize=address

$(NAME):	$(OBJS) 
	$(CC) $(OBJS) $(C_FLAGS) $(C_SANIT) $(HEADERS) $(L_FLAGS) -o $@ $(P_THREAD)
	echo CONCLUIDO

$(ODIR)%.o: $(SDIR)%.c
		#mkdir -p $(ODIR)
		$(CC) $(C_FLAGS) $(HEADERS) $(L_FLAGS) -c $< -o $@

all: $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

run:
	./$(NAME)

val:	$(OBJS)
	$(CC) $(OBJS) $(C_FLAGS) $(HEADERS) $(L_FLAGS) -o $(NAME)
	echo CONCLUIDO
	valgrind --leak-check=full --track-origins=yes --show-leak-kinds=all ./philo 3 5000 1000 1500 2
