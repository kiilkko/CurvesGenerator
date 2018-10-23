#pragma once
#include "ShapesContainer.h"
#include <vector>

class CirclesContainer :
	public ShapesContainer
{
public:
	vector <Shape*> Ccontainer;
	CirclesContainer(ShapesContainer sh)
	{
		vector <Shape*> curvesCont = sh.container;
		Ccontainer = pop.PopulateWithCircles(curvesCont);
		cout << "Circles container is ready" << endl;
		IdentityCheck(sh);
	}


	~CirclesContainer()
	{
	}

	void IdentityCheck(ShapesContainer sh);	
	int CalculateSumOfAllRadii();
	//void Sort();
	//bool Greater(const Shape* A, const Shape* B);
};
