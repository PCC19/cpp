#include <iostream>
#include "ClassContact.hpp"

Contact::Contact(void)
{
	this->index = 0;
	this->first_name = "";
	this->last_name ="";
	this->nickname = "";
	this->phone_number = "000-000-0000";
	this->darkest_secret = "";
}

Contact::~Contact(void)
{
}

void Contact::print(void)
{
	std::cout << "------------------------" << std::endl;
	std::cout << "Contact Info:" << std::endl;
	std::cout << "------------------------" << std::endl;
	std::cout <<"Index: ";
	std::cout << "\t\t\t\t" << this->index << std::endl;
	std::cout <<"First Name: ";
	std::cout << "\t\t\t" << this->first_name << std::endl;
	std::cout <<"Last Name: ";
	std::cout << "\t\t\t" << this->last_name << std::endl;
	std::cout <<"Nickname: ";
	std::cout << "\t\t\t" << this->nickname << std::endl;
	std::cout <<"Phone Number: ";
	std::cout << "\t\t\t" << this->phone_number << std::endl;
	std::cout <<"Darkest Secret: ";
	std::cout << "\t\t" << this->darkest_secret << std::endl;
}

void	Contact::set_index(int value)					{index = value;}
void	Contact::set_first_name(std::string value)		{first_name = value;}
void	Contact::set_last_name(std::string value)		{last_name = value;}
void	Contact::set_nickname(std::string value)		{nickname = value;}
void	Contact::set_phone_number(std::string value)	{phone_number = value;}
void	Contact::set_darkest_secret(std::string value)	{darkest_secret = value;}

int			Contact::get_index(void)			{return index;}
std::string	Contact::get_first_name(void)		{return first_name;}
std::string	Contact::get_last_name(void)		{return last_name;}
std::string	Contact::get_nickname(void)			{return nickname;}
std::string	Contact::get_phone_number(void)		{return phone_number;}
std::string	Contact::get_darkest_secret(void)	{return darkest_secret;}
