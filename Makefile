NAME = philo

HEADER_DIR =	./includes/

SDIR =	./srcs/
ODIR =	./objs/

SRCS =	$(SDIR)main.c\
		$(SDIR)print_status.c\
		$(SDIR)ft_isdigit.c\
		$(SDIR)is_integer.c\
		$(SDIR)ft_atoi.c\
		$(SDIR)validate_inputs.c\
		$(SDIR)init_control.c\
		$(SDIR)philosopher.c\
		$(SDIR)elapsed_time.c\
		$(SDIR)now.c\
		$(SDIR)print_control.c\
		$(SDIR)msleep.c\
		$(SDIR)smart_sleep.c\
		$(SDIR)finish.c\
		$(SDIR)init_philo.c\
		$(SDIR)init_forks.c\
		$(SDIR)eating.c\
		$(SDIR)sleeping.c\
		$(SDIR)thinking.c\
		$(SDIR)get_forks.c\
		$(SDIR)drop_forks.c\
		$(SDIR)check_death.c\
		$(SDIR)check_stop.c

OBJS =	$(patsubst $(SDIR)%.c, $(ODIR)%.o, $(SRCS))

CC = clang
HEADERS = -I $(HEADER_DIR) -I./$(LIBFT_DIR)
C_FLAGS = -Wall -Werror -Wextra -g
C_SANIT = -fsanitize=address
#L_FLAGS = -pthread 
#P_THREAD = -pthread -lpthread

$(NAME):	$(OBJS) 
	$(CC) $(OBJS) $(C_FLAGS) $(C_SANIT) $(HEADERS) $(L_FLAGS) -o $@ $(P_THREAD)
	echo CONCLUIDO

$(ODIR)%.o: $(SDIR)%.c
		mkdir -p $(ODIR)
		$(CC) $(C_FLAGS) $(HEADERS) $(L_FLAGS) -c $< -o $@

all: philo

clean:
	rm -rf $(ODIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

run:
	./philo

val:	$(OBJS)
	$(CC) $(OBJS) $(C_FLAGS) $(HEADERS) $(L_FLAGS) -o $(NAME)
	echo CONCLUIDO
	valgrind --leak-check=full --track-origins=yes --show-leak-kinds=all ./philo 3 5000 1000 1500 2
