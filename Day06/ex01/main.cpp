/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebellon <ebellon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 18:42:30 by ebellon           #+#    #+#             */
/*   Updated: 2022/04/08 19:15:51 by ebellon          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

struct Data
{
	unsigned int	value;
};

uintptr_t	   serialize(Data *data)
{
	return (reinterpret_cast<uintptr_t>(data));
}

Data	*deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int	 main()
{
	Data			*data = new Data;
	Data			*ds = NULL;
	uintptr_t		s;

	data->value = 42;
	s = serialize(data);
	ds = deserialize(s);

	std::cout << "data : address: " << data << std::endl;
	std::cout << "data : value: " << data->value << std::endl;
	std::cout << "serialized : " << s << std::endl;
	std::cout << "deserialized address : " << ds << std::endl;
	std::cout << "deserialized value : " << ds->value << std::endl;

	delete data;
	return 0;
}