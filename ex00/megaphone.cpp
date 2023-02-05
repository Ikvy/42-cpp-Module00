/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 07:38:33 by mmidon            #+#    #+#             */
/*   Updated: 2023/02/05 08:03:09 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>

int	main(int ac, char **av)
{
	int	i = 0;
	int	j;

	if (ac < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}

	while (++i != ac)
	{
		j = -1;
		while (av[i][++j])
			std::cout << (char)toupper(av[i][j]);
	}
	std::cout << std::ends;
	return 0;
}
