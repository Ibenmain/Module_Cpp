NAME = megaphone
CC = g++
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf
SRCS = megaphone.cpp
OBJS = $(SRCS:.cpp=.opp)

all:$(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) -o $(NAME) $^

%.opp: %.cpp
	$(CC) $(FLAGS) -c $< -o $@ 

clean:
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all
