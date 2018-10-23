#pragma once
#include "stdafx.h"


using namespace std;
class Point
{
public:
	double x, y, z;
	Point(double X, double Y, double Z)
	{
		x = X;
		y = Y;
		z = Z;
	}

	~Point()
	{
	}

	void Round();
};

