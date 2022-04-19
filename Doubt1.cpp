#include<iostream>

using namespace std;

class Oper
{
public:
	int a, c, d;
	int b = 1;

	void getnum()
	{
		cout << "Enter the number: " << endl;
		cin >> a;
	}
	void eo()
	{
		if (a % 2 == 0)
		{
			cout << "The number is even." << endl;
		}
		else
		{
			cout << "The number is odd." << endl;
		}
	}
	double fact()
	{
		while (a > 1)
		{
			b = b * a;
			a--;
		}
		return b;
	}
	void prime()
	{
		for (c = 1; c < a; c++)
		{
			if (a % c == 0)
			{
				d = 1;
				break;
			}
		}
		if (d == 1)
		{
			cout << "This number is not a prime" << endl;
		}
		else
		{
			cout << "This number is a prime" << endl;
		}
	}
};

int main()
{
	Oper calc;
	int i;
	double x;

	

	calc.getnum();
	cout << "Enter your request: " << endl;
	cin >> i;

	switch (i)
	{
	case 1:
		calc.eo();
		break;
	case 2:
		calc.prime();
		break;
	case 3:
		x = calc.fact();
		cout << "The factorial is: " << x << endl;
		break;
	default:
		cout << "Invalid argument." << endl;
	}

	return 0;
}