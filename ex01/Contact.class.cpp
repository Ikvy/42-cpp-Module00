/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 09:17:15 by mmidon            #+#    #+#             */
/*   Updated: 2023/02/17 07:20:31 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Contact.class.hpp"

Contact::Contact(void){

};

Contact::~Contact(void){

}

void	Contact::setFstName(std::string str)
{
	Contact::firstName = str;
}

void	Contact::setLstName(std::string str)
{
	Contact::lastName = str;
}

void	Contact::setNckName(std::string str)
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

std::string	Contact::getFstName(void)
{
	return(Contact::firstName);
}

std::string	Contact::getLstName(void)
{
	return(Contact::lastName);
}

std::string	Contact::getNckName(void)
{
	return(Contact::nickName);
}

std::string	Contact::getPhone(void)
{
	return(Contact::phoneNumber);
}

std::string	Contact::getSecret(void)
{
	return(Contact::darkestSecret);
}
