NAME =	bureau

SRC =	src/Bureaucrate.cpp\
		src/main.cpp\

I =		-I include/

SRC_DIR = src

FLAGS =	-Wextra -Werror -Wall -std=c++98

GCC =	clang++

%.o : %.cpp
	$(GCC) $(I) -o $@ -c $<

O =		${SRC:.cpp=.o}

all : $(NAME)

$(NAME) : $O
	$(GCC) $(FLAGS) $O -o $(NAME)

re : fclean all

create :
	@mkdir $(DIRSRC) $(DIRH)

fclean : clean
	rm -rf $(NAME)

clean :
	rm -rf $O

git :
	@git add --all
	@git commit -m ""

getsrc :
	@find $(SRC_DIR) -type f -name "*.cpp" | tr "\n" "|" | sed -r 's/["|"]+/\\ \n/g'

.PHONY : all re fclean clean
