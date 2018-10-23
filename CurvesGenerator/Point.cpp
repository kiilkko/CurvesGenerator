#include "stdafx.h"
#include "Point.h"
#include <cmath>


using namespace std;

void Point::Round()
{
	x = round(x * 1000) / 1000;
	y = round(y * 1000) / 1000;
	z = round(z * 1000) / 1000;

	return;
};
