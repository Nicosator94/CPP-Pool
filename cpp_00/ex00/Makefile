CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -MMD -std=c++98

SOURCES = megaphone.cpp

SRC = ./
DIR = objs_deps/

SRCS = $(addprefix $(SRC), $(SOURCES))
OBJS = $(addprefix $(DIR), $(OBJ))
DEPS = $(addprefix $(DIR), $(DEP))

OBJ = $(SOURCES:.cpp=.o)
DEP = $(SOURCES:.cpp=.d)

NAME = megaphone

all : $(NAME)

$(NAME) : $(OBJS)
	@$(CPP) $(CPPFLAGS) -o $(NAME) $(OBJS)
	@echo "Compilation completed"

$(DIR)%.o : $(SRC)%.cpp | $(DIR)
	@$(CPP) $(CPPFLAGS) -o $@ -c $<

$(DIR) :
	@echo "Start Compilation for $(NAME)"
	@echo "Wait ..."
	@mkdir -p objs_deps

clean :
	@echo "Deleting Objects and Dependencies"
	@rm -rf $(DIR)

fclean : clean
	@echo "Deleting the executable"
	@rm -f $(NAME)

re : fclean all

-include $(DEPS)

.PHONY : all bonus clean fclean re