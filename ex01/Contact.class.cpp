/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 09:17:15 by mmidon            #+#    #+#             */
/*   Updated: 2023/02/05 09:30:14 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact(char *fst_name, char *lst_name, char *nck_name, char *phone, char *secret){

	char **infos[6];

	info[0] = fst_name;
	info[1] = lst_name;
	info[2] = nck_name;
	info[3] = phone;
	info[4] = secret;
	info[5] = 0;
};
