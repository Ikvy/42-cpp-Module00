/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 09:17:15 by mmidon            #+#    #+#             */
/*   Updated: 2023/02/15 09:55:10 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Contact.class.hpp"

Contact::Contact(void){

	std::cout << "Contact created" << std::endl;
};

Contact::~Contact(void){

	std::cout << "Contact deleted" << std::endl;
}

void	Contact::setFstName(std::string str)
{
	Contact::firstName = str;
}

void	Contact::setLstName(std::string str)
{
	Contact::lastName = str;
}

void	Contact::setNstName(std::string str)
{
	Contact::nickName = str;
}

void	Contact::setPhone(std::string str)
{
	Contact::phoneNumber = str;
}

void	Contact::setSecret(std::string str)
{
	Contact::darkestSecret = str;
}
