#pragma once
#include <iostream>
#include "Populator.h"
#include "stdafx.h"
#include "Shape.h"
#include <vector>



class ShapesContainer
{

public:
	Populator pop;
	vector <Shape*> container;
	ShapesContainer()
	{
		bool check = TypesChecking();
		if (check)
		{
			container = pop.PopulateWithCurves();
			cout << "Shapes container is ready" << endl;
		}
		else
		{
			cout << "Check failed. Shapes container cannot be created." << endl;
		}

	}
	~ShapesContainer()
	{
	}

	void PrintCoordinates(double t);
	bool TypesChecking();
};

