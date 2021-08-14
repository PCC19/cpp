#include <iostream>
#include "ClassPhone_book.hpp"

Phone_book::Phone_book(void)
{
	std::cout << "Constructor" << std::endl;
	this->n_contacts = 0;
	this->idx = 0;

}

Phone_book::~Phone_book(void)
{
	std::cout << "Destructor" << std::endl;
}

void	Phone_book::add()
{
	int i;
	this->idx++;
	this->idx %= 7;
	i = this->idx;
	std::cout << "First Name: " << std::endl;
	std::cin >> this->contacts[i].first_name;
	std::cout << "Last Name: " << std::endl;
	std::cin >> this->contacts[i].last_name;
	std::cout << "Nickname: " << std::endl;
	std::cin >> this->contacts[i].nickname;
	std::cout << "Phone Number: " << std::endl;
	std::cin >> this->contacts[i].phone_number;
	std::cout << "Darkest Secret: " << std::endl;
	std::cin >> this->contacts[i].darkest_secret;
	std::cout << "======== ADDED ==========" << std::endl;
	this->contacts[i].print();
	std::cout << "idx: " << this->idx << std::endl;
	std::cout << "=========================" << std::endl;

}
