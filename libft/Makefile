NAME	=	libft.a

SRCS	=	ft_isalpha.c	ft_strlcpy.c	ft_strrchr.c	ft_putnbr_fd.c\
			ft_isdigit.c	ft_strlcat.c	ft_calloc.c		ft_strmapi.c\
			ft_isalnum.c	ft_toupper.c	ft_strdup.c	 	ft_split.c\
			ft_isascii.c	ft_strchr.c		ft_substr.c		ft_striteri.c\
			ft_isprint.c	ft_strncmp.c	ft_strjoin.c\
			ft_strlen.c		ft_memchr.c     ft_strtrim.c\
			ft_memset.c		ft_memcmp.c		ft_itoa.c\
			ft_bzero.c		ft_strnstr.c    ft_putchar_fd.c\
			ft_memcpy.c		ft_atoi.c		ft_putstr_fd.c\
			ft_memmove.c	ft_tolower.c	ft_putendl_fd.c\

SRCS_B	=	ft_lstnew.c 	ft_lstadd_front.c  ft_lstsize.c\
			ft_lstclear.c 	ft_lstlast.c	ft_lstadd_back.c\
			ft_lstdelone.c	ft_lstiter.c	ft_lstmap.c\

HEADER	=	libft.h
OBJ	=	$(SRCS:.c=.o)

OBJ_B	=	$(SRCS_B:.c=.o)

CC		=	cc
CFLAGS	=	-Wall -Wextra -Werror

.PHONY	:	all clean fclean re bonus

all		:	$(NAME)

$(NAME) : $(OBJ)
	 ar rcs $(NAME) $(OBJ)

 %.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

bonus	: $(OBJ_B)
	 ar rcs $(NAME) $(OBJ_B)

clean	:
	rm -f $(OBJ) $(OBJ_B)

fclean : clean
	$(RM) $(NAME)

re	:	fclean all
	