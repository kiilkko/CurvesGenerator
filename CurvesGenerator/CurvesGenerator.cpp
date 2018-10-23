// CurvesGenerator.cpp: определяет точку входа для консольного приложения.
//

#include <iostream>
#include <vector>
#include "stdafx.h"
#include "ShapesContainer.h"
#include "CirclesContainer.h"
#include "Ellipse.h"
#include "Circle.h"

using namespace std;

//Значение параметра t вводится в радианах, P/4=0.785 рад (прибл.)

int main(int argc, char* argv[])
{
	ShapesContainer sh;
	sh.PrintCoordinates(0.785); 
	CirclesContainer circ (sh);
	int sum = circ.CalculateSumOfAllRadii();
	cout << "Sum of all circles in second container is " << sum << endl;
//	circ.Sort();
	system("pause");
    return 0;
}







