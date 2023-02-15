/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 09:07:47 by mmidon            #+#    #+#             */
/*   Updated: 2023/02/15 10:00:23 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <cstring> 

class Contact{

	public:
		void setFstName(std::string str);
		void setLstName(std::string str);
		void setNstName(std::string str);
		void setPhone(std::string str);
		void setSecret(std::string str);
		Contact(void);
		~Contact(void);
	private:
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string phoneNumber;
		std::string darkestSecret;
};

#endif 
