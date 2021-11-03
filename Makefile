NAME	=	libasm.a

SRCS	=	ft_strlen.s ft_strcpy.s ft_strdup.s ft_strcmp.s ft_write.s ft_read.s\

OBJS	=	$(SRCS:.s=.o)

AS	= nasm

ASFLAGS	= -f macho64

all:	$(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -rf	$(OBJS)

fclean:	clean
	rm -rf	$(NAME)

re:	clean	all