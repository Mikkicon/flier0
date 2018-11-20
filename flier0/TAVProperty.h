#pragma once
#ifndef FLIER0_TAVPROPERTY_H
#define FLIER0_TAVPROPERTY_H

#include "AVProperty.h"
template <typename T>
class TAVProperty : AVProperty
{
private:
	T _value = 0;
	std::string _name = "";
public:
	TAVProperty(T x);
	TAVProperty(const std::string &);
	virtual ~TAVProperty();
	TAVProperty<T>& operator<<(const T&);
	const std::string & getName()const;
};

template<typename T>
TAVProperty<T>::TAVProperty(T x) : _value(x) {};
template<typename T>
TAVProperty<T>::~TAVProperty(){};

template<typename T>
TAVProperty<T>::TAVProperty(const std::string & s) {
	size_t x = s.find("=");
	_name = s.substr(++x);
	std::cout << _name << std::endl;
}


#endif //FLIER0_TAVPROPERTY_H
