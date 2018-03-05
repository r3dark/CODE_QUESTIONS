/*
Given two numbers a and b, you have to find the Nth number which is divisible by a or b.

Input :

First line consists of an integer T, denoting the number of test cases.
Second line contains three integers a, b and N.

Output :

For each test case, print the Nth number in a new line.

Constraints :

1<=t<=10^5
1<=a,b<=10^4
1<=N<=10^9

eg. The numbers which are divisible by 2 or 3 are: 

2,3,4,6,8,9,10,12,14,15 and the 10th number is 15.
*/

#include<bits/stdc++.h>
using namespace std;
 
 
long long int gcd(long long int a,long long int b)
{
    
    if (a == b)
        return a;
 
    
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}
 
 
long long int lcm(long long int a,long long int b)
{
    return (a*b)/gcd(a, b);
}
 
long long solve (long long a, long long b, long long n)
	{
	// Write your code here
	long long lcmval=lcm(a,b);
	long long cycle= (long long) n*lcmval/((lcmval/a)+(lcmval/b) -1);
	/*long long ary[4] = {(cycle/a)*a, (cycle/a)*a+a, (cycle/b)*b, (cycle/b)*b+b};
	for (int i = 0; i < 4; i++)
	{
		if (ary[i]/a + ary[i]/b - ary[i]/lcmval == n)
		{
			return ary[i];
		}
	}*/
	return cycle;
}
 
 
int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int t_i=0; t_i<T; t_i++)
    {
        long long a;
        cin >> a;
        long long b;
        cin >> b;
        long long n;
        cin >> n;
 
        long long out_;
        out_ = solve(a, b, n);
        cout << out_;
        cout << "\n";
    }
}
