#include <iostream>
#define PI 3.14159
using namespace std;
class Point
{
protected:
	int x, y;
public:
	Point(int X,int Y)
	{
		x = X;
		y = Y;
		cout << "constructing..." << endl;

	}
	~Point()
	{
		cout << "deconstructing..." << endl;
	}
	void move(int X, int Y)
	{
		x += X;
		y += Y;
	}
	void ShowXY()
	{
		cout << "x=" << x << ",y=" << y << endl;
	}

};
class Circle:public Point
{protected:
	double R;
public:
	void ShowCircle()
	{
		ShowXY();
		cout << "Radius="<<R<<'\n';
	}
	Circle() = default;
	Circle(double r,int X,int Y):Point(X,Y)
	{
		R = r;
	}
	double area()
	{
		return PI * R * R;
	}
};
class tube : public Circle
{
private:
	double height;
	Circle InCircle;
public:
	tube(double height, double R1, double R2 = 0, int X, int Y) :Circle(R, X, Y)
	{
		height = height;
		R = R1;
	};
	double Volume()
	{
		return height * Circle::area();
	};
	double area()
	{
		return 2 * Circle::area() + height * PI * 2 * R;
	};
	void ShowCylinder()
	{
		ShowCircle();
		cout << "height=" << height << endl;

	}


};
int main()
{

}