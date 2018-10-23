#include <iostream>
#include "stdafx.h"
#include "Ellipse.h"
#include "Point.h"
#include <math.h>


using namespace std;

	Point Ellipse::GetPointValue(double t)
	{
		double x, y, z;
		x = radiusA*cos(t);
		y = radiusB*sin(t);
		z = 0.0;
		Point coord(x, y, z);
		coord.Round();
		return coord;
	}

	Point Ellipse::GetDerivativeValue(double t)
	{
		double x_, y_, z_;
		x_ = -radiusA*sin(t);
		y_ = radiusB*cos(t);
		z_ = 0.0;
		Point deriv(x_, y_, z_);
		deriv.Round();
		return deriv;
	}

	string Ellipse::GetType()
	{
		return type;
	}
	vector<int> Ellipse::GetParameters()
	{
		vector<int> param;
		param.push_back(radiusA);
		param.push_back(radiusB);
		return param;
	}



