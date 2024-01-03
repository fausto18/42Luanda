TARGET = rush-02
SRCS = conversor.c ft_str.c main.c rush.c unique.c validate.c ft_file.c
OBJS = $(SRCS:.c=.o)
INCS = rush.h
CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ -I $(INCS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(TARGET)

re: fclean all
