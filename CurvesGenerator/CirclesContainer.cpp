#include "stdafx.h"
#include "CirclesContainer.h"
#include "Circle.h"
#include <algorithm>
#include <functional>
#include <iostream>


using namespace std;

void CirclesContainer::IdentityCheck(ShapesContainer sh)
{
	string tp;
	int j = 0;
	bool AreIdentic = true;
	cout << "Adresses identity checking..." << endl;
	for (int i = 0; i < (int)sh.container.size(); i++)
	{
		tp = sh.container[i]->GetType();
		if (tp == "Circle")
		{
			cout << "Adress in first container: " << sh.container[i] << endl;
			cout << "Adress in second container: " << Ccontainer[j] << endl;
			if ((sh.container[i]) != (Ccontainer[j]))
			{
				AreIdentic = false;
			}
			j++;
		}
	}
	if (AreIdentic)
	{
		cout << "Adresses of Circles are identic" << endl;
	}
	else
	{
		cout << "Check failed, ddresses of Circles are not identic!" << endl;
	}

}

int CirclesContainer::CalculateSumOfAllRadii()
{
	int sum = 0;
	for (int i = 0; i < Ccontainer.size(); i++)
	{
		vector<int> params = Ccontainer[i]->GetParameters();
		sum = sum + params[0];
	}
	return sum;
}


//void CirclesContainer::Sort()
//{
//	sort(Ccontainer.begin(), Ccontainer.end(), std::bind(&CirclesContainer::Greater, this, std::placeholders::_1, std::placeholders::_2));
//	for (Shape* n : Ccontainer)
//	{
//		vector<int>cont = n->GetParameters();
//		for (int p : cont)
//		{
//			cout << p << endl;
//		}
//	}
//}

//bool CirclesContainer::Greater(const Shape* A, const Shape* B)
//{
//	vector<int> vec1 = A->GetParameters();
//	vector<int> vec2 = B->GetParameters();
//	int rA = vec1[0];
//	int rB = vec2[0];
//	return rA < rB;
//	
//}


