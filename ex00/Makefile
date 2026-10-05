NAME := Canonical_Form

CC := c++
CFLAGS := -Wall -Wextra -Werror -std=c++98

HEADER := /

SOURCES := main.cpp Fixed.cpp

OBJECTS := $(SOURCES:.cpp=.o)

.PHONY : all clean fclean re

all : $(NAME)

$(NAME) : $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJ) -o $@

$(OBJ_DIR)%.o : $(SRC_DIR)%.cpp
	$(CC) $(CFLAGS) -I $(HEADER) -c $< -o $@

clean :
	rm -rf $(OBJECT)

fclean : clean
	rm -rf $(NAME)

re : fclean all
