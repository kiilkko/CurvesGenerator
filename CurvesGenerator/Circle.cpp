#include <iostream>
#include "stdafx.h"
#include "Circle.h"
#include "Point.h"
#include "math.h"

using namespace std;


	Point Circle::GetPointValue(double t)
	{
		double x, y, z;
		x = radius*cos(t);
		y = radius*sin(t);
		z = 0.0;
		Point coord(x, y, z);
		coord.Round();
		return coord;
	}

	Point Circle::GetDerivativeValue(double t)
	{		
		double x_, y_, z_;
		x_ = -radius*sin(t);
		y_= radius*cos(t);
		z_ = 0.0;
		Point deriv(x_,y_,z_);
		deriv.Round();
		return deriv;
	}

	string Circle::GetType()
	{
		return type;
	}


	vector<int> Circle::GetParameters()
	{
		vector<int> param;
		param.push_back(radius);
		return param;
	}

	

