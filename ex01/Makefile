NAME := fixed

CC := c++
CFLAGS := -Wall -Wextra -Werror -std=c++98

HEADER := /

SOURCES := main.cpp Fixed.cpp

OBJECTS := $(SOURCES:.cpp=.o)

.PHONY : all clean fclean re

all : $(NAME)

$(NAME) : $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $@

%.o : %.cpp
	$(CC) $(CFLAGS) -I $(HEADER) -c $< -o $@

clean :
	rm -rf $(OBJECTS)

fclean : clean
	rm -rf $(NAME)

re : fclean all
