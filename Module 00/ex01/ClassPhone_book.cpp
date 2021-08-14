#include <iostream>
#include <iomanip>
#include <string>
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
	i = this->idx;
	this->contacts[i].index = i;
	this->idx++;
	this->idx %= 7;
	std::cout << "Please enter contact info bellow:" << std::endl;
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
	std::cout << "=========================" << std::endl;

}

bool Phone_book::is_number(const std::string& s)
{
    std::string::const_iterator itr = s.begin();
    while (itr != s.end() && isdigit(*itr))
		++itr;
    return (!s.empty() && itr == s.end());
}

void	Phone_book::get_index()
{
	std::string i;

	while (1)
	{
		std::cout << "Please i an index:" << std::endl;
		std::cin >> i;
		if (is_number(i) && i > -1 && i < 8)
		{
			this->contacts[i].print();
			break;
		}
		else
			std::cout << "Invalid index" << std::endl;
	}
}

void	Phone_book::search()
{
	int i;

	i = -1;
	while (++i < 8)
	{
		if (this->contacts[i].first_name != "")
		{
			std::cout << std::setw(10);
			std::cout << this->contacts[i].index << "|";
			std::cout << std::setw(10);
			std::cout << this->contacts[i].first_name << "|";
			std::cout << std::setw(10);
			std::cout << this->contacts[i].last_name << "|";
			std::cout << std::setw(10);
			std::cout << this->contacts[i].nickname << "|";
			std::cout << std::endl;
		}
	}
	get_index();
}
