#include <iostream>
#include"mytriangle.h"
using namespace std;

int main()

{
	double side1, side2, side3;
	cin >> side1 >> side2 >> side3;
	if (is_valid(side1, side2, side3) == 0)
		cout << "错误！不构成三角形";
	else cout << area(side1, side2, side3);
	return 0;
}