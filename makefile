# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: saryu <saryu@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/24 16:18:07 by saryu             #+#    #+#              #
#    Updated: 2023/05/24 16:46:14 by saryu            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
#Name of our executable file

INCLUDE = ./libft.h
#It's for header

CC = cc
CCFLAG = -Wall -Wextra -Werror
#for compile and compile flags

AR = ar rcs
#enviroment variable

RM = rm -f
#for delete(clean) files

SRCS_M = ft_isascii.c ft_strlcat.c ft_strnstr.c\
 ft_atoi.c ft_isdigit.c ft_strlcpy.c ft_strrchr.c\
 ft_isalnum.c ft_isprint.c ft_strlen.c ft_tolower.c\
 ft_isalpha.c ft_strchr.c ft_strncmp.c ft_toupper.c\
 ft_memset.c ft_memcpy.c ft_memmove.c ft_bzero.c ft_memchr.c\
 ft_memcmp.c ft_calloc.c ft_strdup.c
#My source files. I want to check it so just use two example files

SRCS = $(SRCS_M)

OBJS = $(SRCS:.c=.o)
#My objects files. SRCS.c -> SRCS.o It means it ganna be chage the end of file from .c to .o. File name is same.

all: $(NAME)
#It is default command of Makefile. It follow the rule of $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)
#It links OBJS files and makes a library file

%.o: %.c
	$(CC) $(CCFLAG) -c $< -o $@
#make all .c files change to .o / -c: compile $<: first dependency file(here .c files) -o: option(for name of executable file like a.out) $@: target(here .o files)

clean:
	$(RM) $(OBJS)
#delete all object files

fclean: clean
	$(RM) $(NAME)
#delete all object files and rush-02

re: fclean all
#restart. clean and start all again

.PHONY: all clean fclean re
#ignore same file name like 'all', 'clean', etc.