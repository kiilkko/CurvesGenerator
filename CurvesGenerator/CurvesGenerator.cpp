// CurvesGenerator.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include <iostream>
#include <vector>
#include "stdafx.h"
#include "ShapesContainer.h"
#include "CirclesContainer.h"
#include "Ellipse.h"
#include "Circle.h"

using namespace std;

//�������� ��������� t �������� � ��������, P/4=0.785 ��� (�����.)

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







