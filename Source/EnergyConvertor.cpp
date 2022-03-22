#include "EnergyConvertor.h"

float EnergyConvertor::lowToHigh(float w)
{
	return w * 0.001;
}

float EnergyConvertor::highToLow(float Kw)
{
	return Kw * 1000;
}


