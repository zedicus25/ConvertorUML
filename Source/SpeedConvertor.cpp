#include "SpeedConvertor.h"

float SpeedConvertor::highToLow(float speed)
{
    return speed * 3.6f;
}

float SpeedConvertor::lowToHigh(float speed)
{
    return speed / 3.6f;
}
