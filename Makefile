# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cdawai <cdawai@student.42kl.edu.my>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/28 21:30:06 by cdawai            #+#    #+#              #
#    Updated: 2024/10/28 21:30:07 by cdawai           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler & Flags

CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Target Library Name

NAME=libftprint.a

# Source file
SRCS = $(wildcard *.c ./libft/*.c)

# Object files
OBJS = $(SRCS:.c=.o)

# Header files 
DEPS = ft_printf.h

# Rule to ensure Make will execute despite similar name files
.PHONY: all clean fclean re

# Rule to create object files
%.o: %.c $(DEPS)
	$(CC) -c $< -o $@ $(CFLAGS)

# Rule for creating the static library
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

# Rule to build the library
all: $(NAME)

# Rule to clean object files
clean:
	rm -f $(OBJS)

# Rule to clean everything, including the library
fclean: clean
	rm -f $(NAME)
	rm -f a.out

# Rule to recompile everything
re: fclean all

