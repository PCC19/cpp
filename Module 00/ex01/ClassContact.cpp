#include <iostream>
#include "ClassContact.hpp"

Contact::Contact(void)
{
	std::cout << "Constructor" << std::endl;
	this->index = 0;
	this->first_name = "";
	this->last_name ="";
	this->nickname = "";
	this->phone_number = "000-000-0000";
	this->darkest_secret = "";
}

Contact::~Contact(void)
{
	std::cout << "Destructor" << std::endl;
}

void Contact::print(void)
{
	std::cout << "Constructor" << std::endl;
	std::cout <<"Index: ";
	std::cout << this->index << std::endl;
	std::cout <<"First Name: ";
	std::cout << this->first_name << std::endl;
	std::cout <<"Last Name: ";
	std::cout << this->last_name << std::endl;
	std::cout <<"Nickname: ";
	std::cout << this->nickname << std::endl;
	std::cout <<"Phone Number: ";
	std::cout << this->phone_number << std::endl;
	std::cout <<"Darkest Secret: ";
	std::cout << this->darkest_secret << std::endl;
}

