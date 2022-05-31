#include<iostream>
#include<string>
using namespace std;

class Circle
{
private:
	float radius;
	static int counter;
public:
	Circle(float r=0)
	{
		radius = r;
		counter += 1;
		
	}
	void setRadius(float r)
	{
		radius = r;
	}
	float getRadius()
	{
		return radius;
	}
	void getArea()
	{
		cout << "The Area Of The Circle Is " << (radius*radius*3.14) << endl;
	}
	static void accessCounter(int n = 0)
	{
		cout << "The Circle Object Counter = " << counter + n << endl;
	}

	~Circle()
	{
		cout << "This is the end of the Circle" << endl;
	}
	void increase_margin(int t)
	{
		radius = radius + t;
	}
};
int Circle::counter = 0;
void add_margin(Circle &x)
{
	x.increase_margin(2);
}

int main()
{
	Circle cir1(5), cir2(8);
	float x = cir1.getRadius() + cir2.getRadius();
	Circle cir3(x);
	cir3.getArea();
	Circle::accessCounter(3);
	cout << "The radius of cir3 = " << cir3.getRadius() << endl;
	add_margin(cir3);
	cout << "The radius of cir3 = " << cir3.getRadius() << endl;










    return 0;
}

