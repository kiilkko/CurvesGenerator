#include <iostream>
#include "stdafx.h"
#include "Populator.h"
#include <vector>
#include "Shape.h"
#include "Circle.h"
#include "Ellipse.h"
#include "Helix.h"
#include "ShapesContainer.h"
#include "CirclesContainer.h"
#include <ctime>
#include <cstdlib>

using namespace std;


vector<Shape*> Populator::PopulateWithCurves()
{
	int shapeN, circRad, elRad1, elRad2, helRad, helStep;
	srand(1);
	for (int i = 0; i < 10; i++)
	{
		shapeN = GetRandomShape();
		circRad = GetRandomParameter();
		elRad1 = GetRandomParameter();
		elRad2 = GetRandomParameter(elRad1 - 1);
		helRad = GetRandomParameter();
		helStep = GetRandomParameter();

		switch (shapeN)
		{
		case 1: shapeList.push_back(new Circle(circRad));
			break;
		case 2: shapeList.push_back(new Ellipse(elRad1, elRad2));
			break;
		case 3: shapeList.push_back(new Helix(helRad, helStep));
			break;
		}
	}
	return shapeList;
}

vector <Shape*> Populator::PopulateWithCircles(vector <Shape*> curvesCont)
{
	
	string t;
	for (int i = 0; i < (int)curvesCont.size(); i++)
	{
		t = curvesCont[i]->GetType();
		if (t == "Circle")
		{
			circlesList.push_back(curvesCont[i]);
		}
	}
	return circlesList;
}

int Populator::GetRandomParameter()
{
	return (1 + rand() % 20);
}
int Populator::GetRandomParameter(int param)
{
	return (1 + rand() % param);
}

int Populator::GetRandomShape()
{
	return 1 + rand() % 3;
}





