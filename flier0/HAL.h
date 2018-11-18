#pragma once
#ifndef FLIER0_HAL_H
#define FLIER0_HAL_H

#include <iostream>
#include <map>
#include "TAVProperty.h"

class HAL {
	std::map<std::string, const TAVProperty<double> &>_status;
	std::map<std::string, TAVProperty<double> & > _controls;
public:
	const std::map<std::string, const TAVProperty<double> &> get_status()const;

	std::map<std::string, TAVProperty<double> &> get_controls();

	const TAVProperty<double> & get(std::string s);

	void set(std::string s, TAVProperty<double> &);

	//    HAL& operator=(double d);

};
std::ostream & operator<<(std::ostream & o, const TAVProperty<double> &);

#endif //FLIER0_HAL_H
