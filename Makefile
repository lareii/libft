NAME		= libft.a
CC			= cc
CFLAGS		= -Wall -Wextra -Werror
AR			= ar
ARFLAGS		= rcs
RM			= rm -rf

BUILD_DIR	= build
SRCS		= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isprint.c ft_isascii.c \
			ft_toupper.c ft_tolower.c ft_atoi.c ft_strlen.c ft_strlcpy.c \
			ft_strlcat.c ft_split.c ft_strchr.c ft_strrchr.c ft_strnstr.c \
			ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_strmapi.c \
			ft_striteri.c ft_strncmp.c ft_memset.c ft_memcpy.c ft_memchr.c \
			ft_memmove.c ft_bzero.c ft_calloc.c ft_itoa.c ft_memcmp.c \
			ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
BONUS_SRCS	= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
			ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
OBJS		= $(addprefix $(BUILD_DIR)/,$(SRCS:.c=.o))
BONUS_OBJS	= $(addprefix $(BUILD_DIR)/,$(BONUS_SRCS:.c=.o))
BONUS_FLAG	= .bonus_flag

all: $(NAME)

bonus: $(BONUS_FLAG)

$(BONUS_FLAG): $(BONUS_OBJS)
	$(AR) $(ARFLAGS) $(NAME) $^
	touch $@

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $@ $^

$(BUILD_DIR):
	mkdir -p $@

$(BUILD_DIR)/%.o: %.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(BUILD_DIR) $(BONUS_FLAG)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re