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
	TAVProperty(std::string & const);
	virtual ~TAVProperty();
	TAVProperty<T>& operator<<(const T&);
	const std::string & getName()const;
};

template<typename T>
TAVProperty<T>::TAVProperty(T x) : _value(x) {};
template<typename T>
TAVProperty<T>::~TAVProperty(){};

template<typename T>
TAVProperty<T>::TAVProperty(std::string & const s) {
	size_t x = s.find("=");
	std::string s1 = s.substr(0, x);
	std::string s2 = s.substr(x + 1);
	_name = s2;
	std::cout << s2 << s1 << x << _name << std::endl;
}


#endif //FLIER0_TAVPROPERTY_H
