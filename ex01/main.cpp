/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 09:23:10 by mmidon            #+#    #+#             */
/*   Updated: 2023/02/15 11:13:00 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream> 
#include <cstring> 

#include "Contact.class.hpp" 
#include "PhoneBook.class.hpp"

void	check_answer(std::string str)
{
	while (str == "")
	{
		std::cout << "contact first name : ";
		std::getline(std::cin , str);
	}
}

void	add(PhoneBook book)
{
	Contact	newContact;
	std::string str;

	(void)book;
	std::cout << "contact first name : ";
	std::getline(std::cin, str);
	check_answer(str);
	newContact.setFstName(str);
	
/*	std::cout << std::endl << "contact last name : ";
	newContact.setFstName(str);
	std::cout << std::endl << "contact nickname : ";
	std::cin >> str;
	newContact.setNckName(str);
	std::cout << std::endl << "contact phone number : ";
	std::cin >> str;
	newContact.setPhone(str);
	std::cout << std::endl << "contact darkest secret : ";
	std::cin >> str;
	newContact.setSecret(str);*/
	book.list[0] = newContact;
	return ;
}

int main()
{
	PhoneBook	book;
	std::string buff;


	std::cout << "ADD   : save a new contact" << std::endl;
	std::cout << "SEARCH: display a specific contact" << std::endl;
	std::cout << "EXIT  : quit" << std::endl;
	while (42)
	{
		std::cout << "Please enter a valid command" << std::endl;
		std::getline(std::cin, buff);
		if (buff.empty() || std::cin.eof())
		{
			std::cin.clear();
			continue; //////exit maybe
		}
		std::cout << buff;
		/*
		else if (buff == "ADD")
			add(book);
		else if (buff == "SEARCH")
			printf("aled\n"); 
			//			search(buff);
		else if (buff == "EXIT")
			exit(0);*/
	}


}
