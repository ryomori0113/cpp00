/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryomori <ryomori@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-03-19 05:39:42 by ryomori           #+#    #+#             */
/*   Updated: 2025-03-19 05:39:42 by ryomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int main(void)
{
	PhoneBook   phonebook;
	std::string command;

	while (true) {
		std::cout << "Enter command (ADD, SEARCH, EXIT): ";
		std::getline(std::cin, command);

		if (std::cin.eof()) {
			std::cout << CTL_D_ERROR_MSG << std::endl;
			std::exit(EXIT_FAILURE);
		}
		if (command == "ADD")
			phonebook.addContact();
		else if (command == "SEARCH") {
			phonebook.displayPhoneBook();
		}
		else if (command == "EXIT") {
			std::cout << "EXIT" << std::endl;
			break ;
		}
	}
}