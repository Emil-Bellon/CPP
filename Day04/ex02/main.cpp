
#include <iostream>
#include "aanimal.hpp"
#include "dog.hpp"
#include "cat.hpp"

int		main(void)
{
	// AAnimal*			Wut = new AAnimal(); // ne fonctionne pas
	AAnimal*			Rex = new Dog();
	AAnimal*			Leo = new Cat();

	std::cout << std::endl;

	// std::cout << Wut->getType() << " " << std::endl;
	// Wut->makeSound();
	std::cout << Rex->getType() << " " << std::endl;
	Rex->makeSound();
	std::cout << Leo->getType() << " " << std::endl;
	Leo->makeSound();
	
	std::cout << std::endl;

	// delete( Wut );
	delete(Rex);
	delete(Leo);

	return (0);
}