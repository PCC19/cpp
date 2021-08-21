NAME = a.out 

HEADER_DIR =	./

SDIR =	./
ODIR =	./

SRCS =	$(SDIR)main.cpp\
		$(SDIR)Fixed.cpp

OBJS =	$(patsubst $(SDIR)%.cpp, $(ODIR)%.o, $(SRCS))

CC = clang++
C_FLAGS = -Wall -Werror -Wextra -g -std=c++98
#C_FLAGS = -Wall -Werror -Wextra -g 
C_SANIT = -fsanitize=address

$(NAME):	$(OBJS) 
	$(CC) $(HEADERS) $(OBJS) $(C_FLAGS) $(C_SANIT) $(L_FLAGS) -o $@
	echo CONCLUIDO

$(ODIR)%.o: $(SDIR)%.cpp
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
	valgrind --leak-check=full --track-origins=yes --show-leak-kinds=all ./$(NAME)
