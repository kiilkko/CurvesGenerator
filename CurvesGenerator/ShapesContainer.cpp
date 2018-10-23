#include "stdafx.h"
#include "ShapesContainer.h"
#include <iostream>
#include "Circle.h"
#include "Ellipse.h"
#include "Helix.h"
#include "Point.h"
#include <string>

using namespace std;

void ShapesContainer::PrintCoordinates(double t)
{
	vector<int> parameters;
	cout << "t = " << t << " rad" << endl;
	for (int i = 0; i<(int)container.size(); i++)
	{
		string n = container[i]->GetType();
		cout << "Type of shape: " << n << endl;
		parameters=container[i]->GetParameters();
		cout << "Parameters of shape: " << endl;
		for (int p : parameters)
		{
			cout << p << endl;
		}
		Point p = container[i]->GetPointValue(t);
		cout << "Coordinates of point: x=" << p.x << ", y=" << p.y << ", z=" << p.z << endl;
		Point v = container[i]->GetDerivativeValue(t);
		cout << "Coordinates of tangent vector: x=" << v.x << ", y=" << v.y << ", z=" << v.z << endl;
		cout << endl;
	}
}

bool ShapesContainer::TypesChecking()
{
	bool result = true;
	unsigned int contSize;
	contSize = container.size();
	try
	{
		container.push_back(new Circle(1));
	}
	catch (const std::exception&)
	{
		cout << "Invalid type: Circle!" << endl;
		result = false;
	}
	if (contSize == 11)
	{
		cout << "Type is supported: Circle" << endl;
		container.pop_back();
	}

	try
	{
		container.push_back(new Ellipse(1, 1));
	}
	catch (const std::exception&)
	{
		cout << "Invalid type: Ellipse!" << endl;
		result = false;
	}
	if (contSize == 11)
	{
		cout << "Type is supported: Ellipse" << endl;
		container.pop_back();
	}

	try
	{
		container.push_back(new Helix(1, 1));
	}
	catch (const std::exception&)
	{
		cout << "Invalid type: Helix!" << endl;
		result = false;
	}
	if (contSize == 11)
	{
		cout << "Type is supported: Helix" << endl;
		container.pop_back();
	}

	return result;
}


