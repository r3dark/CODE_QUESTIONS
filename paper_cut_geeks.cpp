// Given a paper of size A x B. Task is to cut the paper into squares of any size. Find the minimum number of squares that can be cut from the paper.

#include<iostream>
#include<string>
#include<stack>
#include<algorithm>
#include<cmath>
using namespace std;

int main(void)
{
	long a, b, count = 0L;
	cin >> a >> b;
	// commented part -> more loop cycles. eg. 13 x 29, 9 loop cycles instead of 3
	while((a > 0) && (b > 0))
	{
		if(a <= b)
		{
			count += b / a;
			b = b % a;
//			b = b - a;
//			count++;
		}
		else if(a > b)
		{
			count += a / b;
			a = a % b;
//			a = a - b;
//			count++;
		}
	}
	cout << count;
	return 0;
}
