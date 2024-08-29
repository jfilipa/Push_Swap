# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jfilipa- <jfilipa-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/07 03:49:03 by jfilipa-          #+#    #+#              #
#    Updated: 2024/08/25 03:49:03 by jfilipa-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC_DIR = srcs
OBJ_DIR = obj

SRCS_COMMANDS = $(SRC_DIR)/commands/push.c $(SRC_DIR)/commands/reverse_rotate.c \
				$(SRC_DIR)/commands/rotate.c $(SRC_DIR)/commands/sort_3.c \
				$(SRC_DIR)/commands/sort_stacks.c $(SRC_DIR)/commands/swap.c \
				$(SRC_DIR)/commands/rotate_both.c

SRCS_PUSH_SWAP = $(SRC_DIR)/push_swap/a_to_b_init.c $(SRC_DIR)/push_swap/b_to_a_init.c \
				 $(SRC_DIR)/push_swap/errors.c $(SRC_DIR)/push_swap/push_swap.c \
				 $(SRC_DIR)/push_swap/stack_init.c $(SRC_DIR)/push_swap/stack_utils.c

SRCS_LIBFT = $(SRC_DIR)/libft/lib/ft_split.c $(SRC_DIR)/libft/lib/ft_isdigit.c \
			 $(SRC_DIR)/libft/lib/ft_strdup.c $(SRC_DIR)/libft/lib/ft_strlen.c \
			 $(SRC_DIR)/libft/lib/ft_bzero.c $(SRC_DIR)/libft/lib/ft_calloc.c \
			 $(SRC_DIR)/libft/lib/ft_memcpy.c $(SRC_DIR)/libft/lib/ft_substr.c \
			 $(SRC_DIR)/libft/printf/ft_printf.c $(SRC_DIR)/libft/printf/ft_print_char.c \
			 $(SRC_DIR)/libft/printf/ft_print_hex.c $(SRC_DIR)/libft/printf/ft_print_pointer.c \
			 $(SRC_DIR)/libft/printf/ft_print_str.c $(SRC_DIR)/libft/printf/ft_print_unsigned.c \
			 $(SRC_DIR)/libft/printf/ft_putnbr.c

SRCS = $(SRCS_COMMANDS) $(SRCS_PUSH_SWAP) $(SRCS_LIBFT)

OBJS = $(SRCS:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

CFLAGS = -Wall -Werror -Wextra
CC = gcc
RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) -r $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all