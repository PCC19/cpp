#include <iostream>
#include <iterator>
#include <algorithm>
#include <vector>
#include <list>

template< typename T >
typename T::iterator easyFind( T & container, int toFind )
{
	typename T::iterator it;
	
	it = std::find(container.begin(), container.end(), toFind);
	return it;
}
