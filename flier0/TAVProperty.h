#pragma once
#ifndef FLIER0_TAVPROPERTY_H
#define FLIER0_TAVPROPERTY_H

#include "AVProperty.h"
template <typename T>
class TAVProperty : AVProperty
{
private:
	T magic_number_1 = 0;

public:
	TAVProperty(T x);
	virtual ~TAVProperty();
	TAVProperty<T>& operator<<(const T&);

};

template<typename T>
TAVProperty<T>::TAVProperty(T x) {
	T y = magic_number_1;
}



#endif //FLIER0_TAVPROPERTY_H
