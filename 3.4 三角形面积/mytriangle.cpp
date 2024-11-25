#include <iostream>
#include<algorithm>
using namespace std;
bool is_valid(double side1, double side2, double side3)
{
	double a[3] = { side1,side2,side3 };
	sort(a, a + 3);
	if (a[0] + a[1] <= a[2])
		return false;
	else return true;

}
double area(double side1, double side2, double side3)
{
	double s = (side1 + side2 + side3) / 2;
	double area2 =(s - side1)*(s - side2)*(s - side3)*s;
	return sqrt(area2);
}