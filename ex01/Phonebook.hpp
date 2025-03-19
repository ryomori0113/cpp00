/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryomori <ryomori@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-03-19 06:00:02 by ryomori           #+#    #+#             */
/*   Updated: 2025-03-19 06:00:02 by ryomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
 
#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>

const int MAX_CONTACTS = 8;

class PhoneBook {
private:
	Contact contact[MAX_CONTACTS];
	int		addCount;

public:
	PhoneBook();
	void    addContact(void);
	void    displayPhoneBook(void);
	void	displayOneContactInfo(int displayCount);
	void	displayAllContact(int displayCount);
};

#endif