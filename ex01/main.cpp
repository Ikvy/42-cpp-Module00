/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 09:23:10 by mmidon            #+#    #+#             */
/*   Updated: 2023/02/17 08:51:40 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream> 
#include <cstring> 
#include <iomanip> 

#include "Contact.class.hpp" 
#include "PhoneBook.class.hpp"

void	check_answer(std::string str)
{
	while (str.empty())
	{
		if (std::cin.eof())
			exit(0);
		std::cout << "Please, be consistent : ";
		std::getline(std::cin , str);
	}
}

void	printId(PhoneBook book, int id)
{
	if (!book.list[id].getFstName().empty())
		std::cout << book.list[id].getFstName() << std::endl;
	if (!book.list[id].getLstName().empty())
		std::cout << book.list[id].getLstName() << std::endl;
	if (!book.list[id].getNckName().empty())
		std::cout << book.list[id].getNckName() << std::endl;
	if (!book.list[id].getPhone().empty())
		std::cout << book.list[id].getPhone() << std::endl;
	if (!book.list[id].getSecret().empty())
		std::cout << book.list[id].getSecret() << std::endl;
}

void	searchId(PhoneBook book)
{
	std::string	str;
	int	id = -1;

	while (id < 0 || id > 7)
	{
		std::cout << "Index choice : ";
		getline(std::cin, str);
		check_answer(str);
		id = std::stoi(str);
	}
	printId(book, id);
}

void	specialPrint(std::string str)
{
	int	lenght;

	lenght = str.length();
	if (lenght > 9)
		std::cout << str.substr(0, 9) + "." << "|";
	else
		std::cout <<std::setw(10) << str << "|";
}

void	search(PhoneBook book)
{
	size_t	i = 0;

	std::cout << "|  INDEX   |FIRST NAME|LAST  NAME| NICKNAME |" << std::endl;
	while (i != 8 && !book.list[i].getFstName().empty())
	{
		std::cout << "|    "<< i <<"     |";
		specialPrint(book.list[i].getFstName());
		specialPrint(book.list[i].getLstName());
		specialPrint(book.list[i].getNckName());
		std::cout << std::endl;
		i++;
	}
	searchId(book);
	std::cout << std::endl;
}

void	add(PhoneBook *book, int *i)
{
	Contact	newContact;
	std::string str;

	(void)book;
	std::cout << "contact first name : ";
	std::getline(std::cin, str);
	check_answer(str);
	newContact.setFstName(str);
	std::cout << std::endl << "contact last name : ";
	std::getline(std::cin, str);
	check_answer(str);
	newContact.setLstName(str);
	std::cout << std::endl << "contact nickname : ";
	std::getline(std::cin, str);
	check_answer(str);
	newContact.setNckName(str);
	std::cout << std::endl << "contact phone number : ";
	std::getline(std::cin, str);
	check_answer(str);
	newContact.setPhone(str);
	std::cout << std::endl << "contact darkest secret : ";
	std::getline(std::cin, str);
	check_answer(str);
	newContact.setSecret(str);
	if (*i == 8)
		*i = 0;
	book->list[(*i)++] = newContact;
}

int main()
{
	PhoneBook	book;
	std::string buff;
	int	i = 0;

	while (42)
	{
		std::cout << "ADD   : save a new contact" << std::endl;
		std::cout << "SEARCH: display a specific contact" << std::endl;
		std::cout << "EXIT  : quit" << std::endl << std::endl;
		std::cout << "Please enter a valid command : ";
		std::getline(std::cin, buff);
		if (std::cin.eof())
			exit(0);
		else if (buff == "ADD")
			add(&book, &i);
		else if (buff == "SEARCH")
			search(book);
		else if (buff == "EXIT")
			exit(0);
	}
}
