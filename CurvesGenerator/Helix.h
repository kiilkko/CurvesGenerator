#pragma once
#include "Shape.h"
#include <string>

using namespace std;

class Helix :
	public Shape
{
private:
	int radius;
	int step;
	string type;

public:
	Helix(int Radius, int Step)
	{		
		try
		{
			if (Radius > 0 && Step>=0)
			{
				radius = Radius;
				step = Step;
				type = "Helix";
			}
			else
			{
				throw exception();
			}
		}
		catch (const exception)
		{
			cout << "Radius must be positive! "<< "Step must be >= 0"<<endl;
		}
	}


	~Helix()
	{
	}

	Point GetPointValue(double t);
	Point GetDerivativeValue(double t);
	string GetType();
	vector<int> GetParameters();
};

