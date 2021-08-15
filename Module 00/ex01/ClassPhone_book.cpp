#include <iostream>
#include <iomanip>
#include <string>
#include "ClassPhone_book.hpp"

Phone_book::Phone_book(void)
{
	this->n_contacts = 0;
	this->idx = 0;

}

Phone_book::~Phone_book(void)
{
}

void	Phone_book::add()
{
	int i;
	i = this->idx;
	this->contacts[i].index = i;
	this->idx++;
	this->idx %= 8;
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
		std::cout << "Please state desired index:" << std::endl;
		std::cin >> i;
		if (is_number(i) && std::stoi(i) > -1 && std::stoi(i) < 8)
		{
			if (this->contacts[std::stoi(i)].first_name != "")
				this->contacts[std::stoi(i)].print();
			break;
		}
		else
			std::cout << "Invalid index" << std::endl;
	}
}

void	Phone_book::print_header()
{
	std::cout << std::setw(10);
	std::cout << "Index" << "|";
	std::cout << std::setw(10);
	std::cout << "F. Name" << "|";
	std::cout << std::setw(10);
	std::cout << "L. Name" << "|";
	std::cout << std::setw(10);
	std::cout << "Nick" << "|";
	std::cout << std::endl;

}

std::string	Phone_book::trunc_string(std::string s)
{
	std::string small_string(s, 0, 9);
	if (s.length() > 9)
	{
		small_string = small_string + ".";
		return (small_string);
	}
	else
		return (s);
}

void	Phone_book::search()
{
	int i;

	i = -1;
	print_header();
	while (++i < 8)
	{
		if (this->contacts[i].first_name != "")
		{
			std::cout << std::setw(10);
			std::cout << this->contacts[i].index << "|";
			std::cout << std::setw(10);
			std::cout << trunc_string(this->contacts[i].first_name) << "|";
			std::cout << std::setw(10);
			std::cout << trunc_string(this->contacts[i].last_name) << "|";
			std::cout << std::setw(10);
			std::cout << trunc_string(this->contacts[i].nickname) << "|";
			std::cout << std::endl;
		}
	}
	get_index();
}
