#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

/*int gcd(int a, int b)
{
    while (b > 0)
	{
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}*/

/*
int gcd(int a, int b)
{
    while (a && b)
	{
        if (a >= b)
            a %= b;
        else
            b %= a;
    }
    return a + b;
}
*/

long long int gcd(long long int a, long long int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}

long long int lcm(vector <long long int> a)
{
	long long int l = a[0];
	for (int i = 1; i < a.size(); i++)
    {
        l = (((a[i] * l)) / (gcd(a[i], l)));
    }
    return l;
}

long long int hcf(vector <long long int> a)
{
	long long int h = a[0];
	for (long long int i = 1; i < a.size(); i++)
    {
        h = gcd(a[i], h);
    }
    return h;
}

int main(void)
{
	long long int n;
	cin >> n;
	vector <long long int> a(n);
	cout << "Enter numbers >= 1\n";
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	
	long long int l = lcm(a);
	long long int h = hcf(a);
	
	cout << "LCM: " << l << endl << "HCF: " << h << endl;
}
