#include<iostream>
#include<string>
#include<stack>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
	int f;
	cin >> f;
	int count = 0;
//	while(f)
	while(f % 10 == 0)
	{
		int x = f % 10;
		if(x == 0)
		{
			count++;
		}
//		else
//		{
//			break;
//		}
		f = f / 10;
	}
	cout << count;
}
