#include<iostream>
#include<string>
#include<stack>
#include<algorithm>
#include<cmath>
using namespace std;
int main(void)
{
//	any number x, say 4... We need to find what 2^4 is, instead of doing pow(2,x) we can (1 << x). Using pow and not left shifting 1? Ouch on the processor cycles!
	int x = 4;
	cout << (1 << x) << endl;
//	cout << (1 << 4) << endl;
	return 0;
}
