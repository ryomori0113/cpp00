# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ryomori <ryomori@student.42.fr>             +#+  +:+       +#+        #
#                                                 +#+#+#+#+#+   +#+           #
#    Created: 2025-03-19 05:31:24 by ryomori            #+#    #+#             #
#    Updated: 2025-03-19 05:31:24 by ryomori           ###   ########.fr       #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

# Files & Command +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++#
SRCS	= \
		main.cpp \
		Set_Contact.cpp \
		Get_Contact.cpp \
		Phonebook.cpp
OBJDIR	= obj
OBJS    = $(addprefix $(OBJDIR)/, $(SRCS:.cpp=.o))
DEPENDS	= $(OBJS:.o=.d)

# -- flags --
CXX		= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98 -g -fsanitize=address
CXXFLAGS	+= -MMD -MP

# -- command --
RM		= rm -rf

# Mandatory target ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++#
.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

$(OBJDIR)/%.o: %.cpp
	mkdir -p $(@D)
	$(CXX) $(CXXFLAGS) -o $@ -c $<

clean:
	$(RM) $(OBJDIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

# Other targets +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++#
cfile:
	find . -name "*.cpp" | sed 's/\.\///g' \
		| awk '{print "\t\t"$$0" \\"}' | sed '$$s/ \\//'

-include $(DEPENDS)
#++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++#
