NAME = libftprintf.a
Sources = ft_printf.c ft_itohex.c len_putchar.c len_putstr.c len_itoa.c ft_pointer.c ft_u.c
Objects = $(Sources:.c=.o)

CC = cc
Cflags = -Wall -Werror -Wextra
RM = rm -f

subdir1 = libft
Cur_dir = $(shell pwd)
.PHONY: all bonus clean fclean re seelib norm normb
all: $(NAME) 
 
$(NAME): $(Objects)
	@+$(MAKE) -C $(subdir1)
	@cp $(subdir1)/libft.a .
	@mv libft.a $@
	@ar -src $@ $(Objects)
	@echo $(NAME) created

$(Objects):
	@$(CC) -c $(Cflags) $(Sources)

bonus: $(bon_obj)
	@ar -src $(NAME) $(bon_obj)
	@echo bonus added to $(NAME)
	@echo $(NAME) ran with bonus

$(bon_obj):
	@$(CC) -c $(Cflags) $(bon_src)

clean:
	@rm -rf *.o *.exe *~ *.mod
	@echo "clean done"

fclean: clean
	@rm -f $(NAME)
	@echo "fclean done"

re: fclean all
	@echo "\nRecompilation done"

seelib:
	@ar -t $(NAME)

norm: $(Sources)
	@norminette -R CheckForbiddenSourceHeader $(Sources)
	@echo all sources checked with norminette

normb: $(norm)
	@norminette -R CheckForbiddenSourceHeader $(bon_src)
	@echo all sources checked with norminette including bonus
