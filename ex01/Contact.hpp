/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryomori <ryomori@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-03-19 05:40:21 by ryomori           #+#    #+#             */
/*   Updated: 2025-03-19 05:40:21 by ryomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <cstdlib>

# define CTL_D_ERROR_MSG "\nClosed standard input and terminated the program."
# define ASCII true
# define DIGIT false

class Contact {
private:
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNumber;
	std::string darkestSecret;

	void	setData(std::string *str, std::string msg, bool num);

public:
	void	addNewContact(Contact *contact);
	void	displayOneContact(Contact *contact);
	void	displayLineContact(Contact *contact);
	void	displayContactLabel(void);
};

#endif
