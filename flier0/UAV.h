#pragma once

#ifndef UAV_H_
#define UAV_H_
#include "TAVProperty.h"

struct UAVcontrols
{
	TAVProperty<double> throttle1, stick_x, stick_y;
};

struct UAVstatus
{
	TAVProperty<double> IAS, altitude, pitcha, yawa, rolla;
};

#endif /* UAV_H_ */
