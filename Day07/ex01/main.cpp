/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 23:29:51 by marvin            #+#    #+#             */
/*   Updated: 2022/04/09 23:29:51 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

class Awesome
{
	public :
		Awesome(void): _n(42)	{return;};
		int	get(void) const 	{return this->_n;};
	private :
		int _n;
};

std::ostream &	operator<<(std::ostream & o, Awesome const & rhs) {o << rhs.get(); return o;}
template<typename T>
void	print(T const & x) {std::cout << x << std::endl; return;}

int main()
{
	int tab[] = {0, 1, 2, 3, 4};
	Awesome tab2[5];

	iter(tab, 5, print);
	iter(tab2, 5, print);
	std::cout << std::endl;

	/* main perso */
	int			numbers[5] = { 420, 69, 666, 101, 42 };
	std::string	strings[3] = { "Coucou", "Maman", "Bobo" };

	std::cout << "Print numbers:" << std::endl;
	iter<int>(numbers, 5, &output);
	std::cout << std::endl;

	std::cout << "Print first 3 numbers:" << std::endl;
	iter<int>(numbers, 3, &output);
	std::cout << std::endl;
	
	std::cout << "Print strings:" << std::endl;
	iter<std::string>(strings, 3, &output);
	std::cout << std::endl;

	std::cout << "Print first string:" << std::endl;
	iter<std::string>(strings, 1, &output);
	
	return 0;
}

