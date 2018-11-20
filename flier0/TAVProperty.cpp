#include "pch.h"
#include "TAVProperty.h"
#include <iostream>

template<typename T>
TAVProperty<T>::TAVProperty(std::string & const s)
{
	size_t x = s.find("=");
	std::string s1 = s.substr(0, x);
	std::string s2 = s.substr(x+1);
	_name = s2;
	std::cout << s2 << s1 << x << _name << std::endl;
}

template<typename T>
const std::string & TAVProperty<T>::getName() const
{
	return _name;
}


template<typename T>
TAVProperty<T>::~TAVProperty()
{
}
