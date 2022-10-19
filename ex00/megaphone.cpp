/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <ibenmain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 16:49:37 by ibenmain          #+#    #+#             */
/*   Updated: 2022/10/19 17:38:59 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

int main(int ac, char **av)
{
	int	i;

	i = 1;
	if (ac < 2)
	{
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
		return (0);
	}
	while (av[i])
	{
		string str = av[i];
		for (int j = 0; j < (int)str.size() ; j++)
			putchar(toupper(av[i][j]));
		cout << " "; 
		i++;
	}
	return (0);
}
