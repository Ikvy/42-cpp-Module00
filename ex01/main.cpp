/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 09:23:10 by mmidon            #+#    #+#             */
/*   Updated: 2023/02/05 10:14:46 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream> 

#include "Contact.class.hpp" 
#include "PhoneBook.class.hpp"

void	add(void)
{
	char fst_name[254];
	char lst_name[254];
	char nck_name[254];
	char phone[254];
	char secret[254];

	std::cout << "contact first name : ";
	std::cin >> fst_name;
	std::cout << std::endl << "contact last name : ";
	std::cin >> lst_name;
	std::cout << std::endl << "contact nickname : ";
	std::cin >> nck_name;
	std::cout << std::endl << "contact phone number : ";
	std::cin >> phone;
	std::cout << std::endl << "contact darkest secret : ";
	std::cin >> secret;
	
	return ;
}

int main()
{
	char buff[512];

	std::cout << "ADD   : save a new contact" << std::endl;
	std::cout << "SEARCH: display a specific contact" << std::endl;
	std::cout << "EXIT  : quit" << std::endl;

	while (42)
	{
		std::cin >> buff;
		if (!strcmp(buff, "ADD") && strlen(buff) == 3)
			add();
		else if (!strcmp(buff, "SEARCH") && strlen(buff) == 6)
			printf("aled\n"); 
			//			search(buff);
		else if (!strcmp(buff, "EXIT") && strlen(buff) == 4)
			exit(0);
		else if (!strlen(buff))
			exit(100);
	}


}
