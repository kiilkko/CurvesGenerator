#pragma once
#include <string>
#include "Shape.h"

using namespace std;

class Circle :
	public Shape
{
private:
	
	string type;
	

public:
	int radius;
	
	Circle(int Rad)
	{
		try
		{
			if (Rad > 0)
			{
				radius = Rad;
				type = "Circle";
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

	~Circle()
	{
	}
	Point GetPointValue(double t);
	Point GetDerivativeValue(double t);
	string GetType();
	vector<int> GetParameters();
	
};

