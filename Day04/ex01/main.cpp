
#include <cstdlib>
#include <iostream>
#include "animal.hpp"
#include "dog.hpp"
#include "cat.hpp"

int	main(void)
{
	Animal*	animalPack[50];
	
	for( size_t i = 0; i < 25; i++ )
		animalPack[i] = new Dog();
	for( size_t i = 25; i < 50; i++ )
		animalPack[i] = new Cat();
	for( size_t i = 0; i < 50; i++ )
		delete( animalPack[i] );
	return 0;
}