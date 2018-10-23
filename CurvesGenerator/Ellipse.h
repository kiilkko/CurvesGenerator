#pragma once
#include "Shape.h"
#include <string>
#include <iostream>

using namespace std;

class Ellipse :
	public Shape
{
private:
	int radiusA;
	int radiusB;
	string type;

public:
	Ellipse(int RadA, int RadB)
	{
		try
		{
			if (RadA > 0 && RadB > 0)
			{
				radiusA = RadA;
				radiusB = RadB;
				type = "Ellipse";
			}
			else
			{
				throw exception();
			}
		}		
		catch (const exception)
		{
			cout << "Radius must be positive!"<< endl;
		}		
	}

	~Ellipse()
	{
	}
	Point GetPointValue(double t);
	Point GetDerivativeValue(double t);
	string GetType();
	vector<int> GetParameters();
};

