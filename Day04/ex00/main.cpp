
#include <cstdlib>
#include <iostream>
#include "animal.hpp"
#include "dog.hpp"
#include "cat.hpp"
#include "wronganimal.hpp"
#include "wrongcat.hpp"

int		main(void)
{
	Animal*			Wut = new Animal();
	Animal*			Rex = new Dog();
	Animal*			Leo = new Cat();
	WrongAnimal*	Bob = new WrongCat();
	WrongCat*		WrongLeo = new WrongCat();

	std::cout << std::endl;

	std::cout << Wut->getType() << std::endl;
	Wut->makeSound();
	std::cout << Rex->getType() << std::endl;
	Rex->makeSound();
	std::cout << Leo->getType() << std::endl;
	Leo->makeSound();
	std::cout << Bob->getType() << std::endl;
	Bob->makeSound();
	std::cout << WrongLeo->getType() << std::endl;
	WrongLeo->makeSound();
	
	std::cout << std::endl;

	delete(Wut);
	delete(Rex);
	delete(Leo);
	delete(Bob);
	delete(WrongLeo);

	return (0);
}