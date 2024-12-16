#include <iostream>
#include <cstring>
using namespace std;
class Point
{
private:
	int x;
	int y;
public:
	Point(int X, int Y)
	{
		x = X;
		y = Y;
	}
	void setPoint(int i, int j)
	{
		x += i;
		y += j;
	}
	void display()
	{
		cout << '(' << x << ',' << y << ')';
	}
};

	int main()
	{
		Point p (60,80);
		p.setPoint(10, 10);
		p.display();
		return 0;

	}