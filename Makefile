# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dobby <dobby@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/24 16:18:07 by saryu             #+#    #+#              #
#    Updated: 2023/11/23 16:16:58 by dobby            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
#Name of my final file

HEADER = libft.h
#It's for header

CC = cc

CCFLAG = -Wall -Wextra -Werror
#for compile and compile flags

AR = ar rcs
#enviroment variable

RM = rm -f
#for delete(clean) files

SRCS = ft_isascii.c ft_strlcat.c ft_strnstr.c\
 ft_atoi.c ft_isdigit.c ft_strlcpy.c ft_strrchr.c\
 ft_isalnum.c ft_isprint.c ft_strlen.c ft_tolower.c\
 ft_isalpha.c ft_strchr.c ft_strncmp.c ft_toupper.c\
 ft_memset.c ft_memcpy.c ft_memmove.c ft_bzero.c ft_memchr.c\
 ft_memcmp.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c\
 ft_strtrim.c ft_split.c ft_itoa.c ft_putchar_fd.c ft_putstr_fd.c\
 ft_putendl_fd.c ft_putnbr_fd.c ft_strmapi.c ft_striteri.c
#My source files

BONUS =  ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c\
 ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
#My bonus files

OBJS = $(SRCS:.c=.o)
#My objects files. SRCS.c -> SRCS.o It means it ganna be chage the end of file from .c to .o. File name is same.

OBJSBONUS = $(BONUS:.c=.o)
#My bonus objects files.

all: $(NAME)
#It is default command of Makefile. It follow the rule of $(NAME)

%.o: %.c
	$(CC) $(CCFLAG) -c $< -o $@
#make all .c files change to .o / -c: compile $<: first dependency file(here .c files) -o: option(for name of executable file like a.out) $@: target(here .o files)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)
#It links OBJS files and makes a library file

bonus: $(OBJS) $(OBJSBONUS)
	$(AR) $(NAME) $(OBJS) $(OBJSBONUS)

clean:
	$(RM) $(OBJS) $(OBJSBONUS)
#delete all object files

fclean: clean
	$(RM) $(NAME)
#delete all object files and .a file

re: fclean all
#restart. clean and start 'make' again

.PHONY: all clean fclean re
#ignore same file name like 'all', 'clean', etc.