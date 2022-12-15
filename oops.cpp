#include <iostream>
using namespace std;

class shape {
public:
	string name;
	int sides;

	shape(string name, int sides)
	{
		this->name = name;
		this->sides = sides;
	}
};

class triangle : public shape
{

private:
	int base;
	int height;

public:
	triangle(string name, int sides, int base, int height) : shape(name, sides)
	{
		this->base = base;
		this->height = height;
	}

	void area()
	{
		cout << "Area of Triangle: "
			<< (0.5 * base * height) << endl;
	}
	void details()
	{
		cout << "Shape: " << name << endl;
		cout << "Sides are: " << sides << endl;
		cout << "Base: " << base << endl;
		cout << "Height: " << height << endl;
		area();
	}
};

class square : public shape {
private:
	int height;

public:
	square(string name, int sides, int height) : shape(name, sides)
	{
		this->height = height;
	}

	void area()
	{
		cout << "Area of Square: " << (height * height)
			<< endl;
	}

	void details()
	{
		cout << "Shape: " << name << endl;
		cout << "Sides: " << sides << endl;
		cout << "Height: " << height << endl;
		area();
	}
};

int main()
{
	triangle t("Triangle", 3, 2, 3);
	square s("Square", 4, 2);

	t.details();
	cout << endl << endl;

	s.details();
	return 0;
}
