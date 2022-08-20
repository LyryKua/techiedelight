NAME :=				zero_sum

# project directories
SRC_DIR :=			./src
OBJ_DIR :=			./obj
INC_DIR :=			./inc

# project source files
SRC :=				main.cpp		\
					Solution.cpp

# project object files
OBJ =				$(addprefix $(OBJ_DIR)/, $(SRC:.cpp=.o))

# compilation flags
CC_FLAGS :=			-Wall -Wextra -Werror

# header flags
HEADER_FLAGS :=		-I$(INC_DIR)

# compiler
CC :=				clang++


# rules

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ)

$(OBJ): $(OBJ_DIR)

$(OBJ_DIR):
	mkdir $(OBJ_DIR)

$(OBJ_DIR)/%.o: %.cpp
	$(CC) $(CC_FLAGS) $(HEADER_FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -rf $(OBJ_DIR)

re: fclean all
# special stuff
vpath %.cpp $(SRC_DIR)
.PHONY: all clean fclean re
