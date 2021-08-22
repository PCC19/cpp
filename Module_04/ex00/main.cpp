/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 21:10:36 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/22 23:07:21 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	std::cout << "=====================================" << std::endl;
	std::cout << "Dog Type:" << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << "Cat Type:" << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << "Cat Sound:" << std::endl;
	i->makeSound(); //will output the cat sound!
	std::cout << "Dog Sound:" << std::endl;
	j->makeSound();
	std::cout << "Animal Sound:" << std::endl;
	meta->makeSound();
	std::cout << "=====================================" << std::endl;
	delete i;
	delete j;
	delete meta;

	const WrongAnimal* meta2 = new WrongAnimal();
	const WrongAnimal* i2 = new WrongCat();
	
	std::cout << "=====================================" << std::endl;
	std::cout << "WrongCat type:" << std::endl;
	std::cout << i2->getType() << " " << std::endl;
	std::cout << "WrongCat sound:" << std::endl;
	i2->makeSound(); //will output the cat sound!
	std::cout << "WrongAnimal sound:" << std::endl;
	meta2->makeSound();
	std::cout << "=====================================" << std::endl;
	delete i2;
	delete meta2;
}
