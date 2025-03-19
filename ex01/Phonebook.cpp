/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryomori <ryomori@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-03-19 05:58:56 by ryomori           #+#    #+#             */
/*   Updated: 2025-03-19 05:58:56 by ryomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Phonebook.hpp"

PhoneBook::PhoneBook() : addCount(0) {}

void	PhoneBook::displayOneContactInfo(int displayCount)
{
	std::string	num;

	std::cout << "Enter the contact number you want to know: ";
	while (1)
	{
		std::getline(std::cin, num);
		if (std::cin.eof()) {
			std::cout << CTL_D_ERROR_MSG << std::endl;
			std::exit(EXIT_FAILURE);
		}
		if (std::isdigit(num[0]) && num[0] - '0' < displayCount && num[1] == '\0')
			break ;
		std::cout << "Invalid input. Please enter a number from 0 to " << displayCount - 1 << ": ";
	}
	contact[num[0] - '0'].displayOneContact(&contact[num[0] - '0']);
}

void	PhoneBook::displayAllContact(int displayCount)
{
	contact[0].displayContactLabel();
	for (int i = 0; i < displayCount; i++) {
		std::cout << i << " ";
		contact[i].displayLineContact(&contact[i]);
	}
}

void	PhoneBook::displayPhoneBook()
{
	const int	maxDisplayCount = 8;
	int			displayCount;

	displayCount = (addCount < maxDisplayCount) ? addCount : maxDisplayCount;
	if (displayCount == 0) {
		std::cout << "no contact" << std::endl;
		return ;
	}
	PhoneBook::displayAllContact(displayCount);
	PhoneBook::displayOneContactInfo(displayCount);
}

void	PhoneBook::addContact(void)
{
	contact[addCount].addNewContact(&contact[addCount]);
	addCount++;
}