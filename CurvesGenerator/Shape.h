#pragma once
#include <string>
#include "Point.h"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Shape
{
public:
	int radius = 1;
	virtual Point GetPointValue(double t) = 0;
	virtual Point GetDerivativeValue(double t) = 0;
	virtual string GetType() = 0;
	virtual vector<int> GetParameters() =0;	
};

