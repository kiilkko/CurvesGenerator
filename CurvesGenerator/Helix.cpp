#include <iostream>
#include "stdafx.h"
#include "Helix.h"
#include "Point.h"

using namespace std;


	Point Helix::GetPointValue(double t)
	{
		double x, y, z;
		x = radius*cos(t);
		y = radius*sin(t);
		z = step*t;
		Point coord(x, y, z);
		coord.Round();
		return coord;
	}

	Point Helix::GetDerivativeValue(double t)
	{
		double x_, y_, z_;
		x_ = -radius*sin(t);
		y_ = radius*cos(t);
		z_ = step;
		Point deriv(x_, y_, z_);
		deriv.Round();
		return deriv;
	}

	string Helix::GetType()
	{
		return type;
	}

	vector<int> Helix::GetParameters()
	{
		vector<int> param;
		param.push_back(radius);
		param.push_back(step);
		return param;
	}
