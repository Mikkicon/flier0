#include "pch.h"
#include "HAL.h"

const TAVProperty<double> & HAL::get(std::string s) {
	return get_status().find(s)->second;
}

void HAL::set(std::string s, TAVProperty<double> & d) {
	//get_controls()[s] = d;
}

const std::map<std::string, const TAVProperty<double> &> HAL::get_status()const {
	return _status;
}

std::map<std::string, TAVProperty<double> &> HAL::get_controls() {
	return _controls;
}


std::ostream & operator<<(std::ostream & o, const TAVProperty<double> &d) {
	std::cout << d << std::endl;
	return o;
}
/*int main()
{
	//and this is the task
	FIFOhandler& f;
	// echo 0.5 > /dev/airframe/rudder
	std::string propID = "rudder";
	f.halInput(propId, 0.5);
	//should do something. preferably birth a lot of strings from different methods where they humbly report being called
	//feel free to change anything, just keep the idea of "echo 0.5 > /dev/airframe/rudder"
}
*/