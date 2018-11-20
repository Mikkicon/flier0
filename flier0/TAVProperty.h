#pragma once
#ifndef FLIER0_TAVPROPERTY_H
#define FLIER0_TAVPROPERTY_H

#include "AVProperty.h"
template <typename T>
class TAVProperty : AVProperty
{
private:
	T magic_number_1 = 0;
	std::string _name = "";
public:
	TAVProperty(T x);
	TAVProperty(std::string & const);
	virtual ~TAVProperty();
	TAVProperty<T>& operator<<(const T&);
	const std::string & getName()const;
};

template<typename T>
TAVProperty<T>::TAVProperty(T x) {
	T y = magic_number_1;
}
template<typename T>
TAVProperty<T>::TAVProperty(std::string & const s);


#endif //FLIER0_TAVPROPERTY_H
