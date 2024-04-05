CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -MMD -std=c++98

HEADERS = phonebook.h

SOURCES = main.cpp \
			PhoneBook.cpp \
			Contact.cpp

SRC = ./
DIR = objs_deps/
INC = ./

INCLUDES = -I/$(INCS)

SRCS = $(addprefix $(SRC), $(SOURCES))
OBJS = $(addprefix $(DIR), $(OBJ))
DEPS = $(addprefix $(DIR), $(DEP))
INCS = $(addprefix $(INC), $(HEADERS))

OBJ = $(SOURCES:.cpp=.o)
DEP = $(SOURCES:.cpp=.d)

NAME = phonebook

all : $(NAME)

$(NAME) : $(OBJS)
	@$(CXX) $(CXXFLAGS) $(INCLUDES) -o $(NAME) $(OBJS)
	@echo "Compilation completed"

$(DIR)%.o : $(SRC)%.cpp | $(DIR)
	@$(CXX) $(CXXFLAGS) $(INCLUDES) -o $@ -c $<

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