# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cdawai <cdawai@student.42kl.edu.my>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/09 14:15:02 by cdawai            #+#    #+#              #
#    Updated: 2024/09/12 18:32:42 by cdawai           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler and flags
CC=gcc
CFLAGS= -Wall -Wextra -Werror

# Target library name
NAME=libft.a

# Source files
SRCS = ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
ft_isprint.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strlcpy.c ft_strlen.c \
ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c \
ft_memchr.c ft_memcmp.c ft_atoi.c ft_strnstr.c ft_calloc.c ft_strdup.c ft_substr.c \
ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

# Object files
OBJS=$(SRCS:.c=.o)

# Header files (if any)
DEPS = libft.h

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

# Rule to recompile everything
re: fclean all
