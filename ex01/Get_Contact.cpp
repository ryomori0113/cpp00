/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Get_Contact.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryomori <ryomori@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-03-19 05:42:08 by ryomori           #+#    #+#             */
/*   Updated: 2025-03-19 05:42:08 by ryomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
//内容を１０文字に制限して表示する関数　
void	printInfo(std::string str)
{
	std::size_t len;

	len = str.size();
	std::cout << "|";
	if (10 < len)
		std::cout << str.substr(0, 9) << ".";
	else
		std::cout << std::setw(10) << str;
}
//情報を入力する前にどのような情報か表示して知らせる関数
void	Contact::displayOneContact(Contact *contact)
{
	std::cout << "firstName   | " << contact->firstName << std::endl;
	std::cout << "lastName    | " << contact->lastName << std::endl;
	std::cout << "nickName    | " << contact->nickName << std::endl;
	std::cout << "phoneNumber | " << contact->phoneNumber << std::endl;
}


void	Contact::displayLineContact(Contact *contact)
{
	printInfo(contact->firstName);
	printInfo(contact->lastName);
	printInfo(contact->nickName);
	std::cout << "|" << std::endl;
}

void	Contact::displayContactLabel(void)
{
	std::cout << "  ";
	printInfo("FirstName");
	printInfo("LastName");
	printInfo("NickName");
	std::cout << "|" << std::endl;
}
