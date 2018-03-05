#include<iostream>
#include<string>
#include<stack>
#include<algorithm>
#include<cmath>
using namespace std;

int func(int &x, int c)
{
	c = c - 10;
	clog << "c = " << c << endl;
	if(c == 0)
	{
		return 1;
	}
	x = x + 1;
	clog << "x = " << x << endl;
	return func(x, c) * x;
}

int main(void)
{
	int p = 30;
	cout << func(p, p) << endl;
}
