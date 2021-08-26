#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <cctype>

template < typename T >
void	iter(T *array, size_t length, void (*func)(T const &))
{
	if (array == NULL)
		return ;
	for (size_t i = 0; i < length; i++)
		func(array[i]);
}

#endif
