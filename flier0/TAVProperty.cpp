#include "pch.h"
#include "TAVProperty.h"
#include <iostream>



template<typename T>
const std::string & TAVProperty<T>::getName() const
{
	return _name;
}
