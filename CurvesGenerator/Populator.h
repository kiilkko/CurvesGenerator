#pragma once
#include <vector>
#include <iostream>
#include "stdafx.h"
#include "Shape.h"

using namespace std;

class Populator
{
public:
	Populator()
	{
	}

	~Populator()
	{
	}

	vector <Shape*> shapeList;
	vector <Shape*> circlesList;

	vector <Shape*> PopulateWithCurves();
	vector <Shape*> PopulateWithCircles(vector <Shape*> curvesCont);
	int GetRandomParameter();
	int GetRandomParameter(int param);
	int GetRandomShape();	
	
};