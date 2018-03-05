/*
HP is doing research in mathematics . After doing lots of research, she struck in a problem . She found four numbers n,a, b and c .Now, She wants to know how many number exists which are less than or equal to n and are divisible by a ,b or c .

Input : First line contains 't' denoting numbers of test cases

Next t lines contains 4 integers denoting n,a,b and c separated by space

Output : 't' lines containing the count of the numbers which are divisible a,b,c

Constraints :

1 <= t <= 10^5
1 <= n <= 10^9
1 <= a, b, c <= 10^5

eg. n = 15 , a= 2, b=3,c = 5 The number which are divisible by a ,b, or c are 2,3,4,5,6,8,9,10,12,14,15 i.e 11 numbers , so output is 11
*/

#include<bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}

long long lcm(long long x, long long y)
{
    return (x * y) / gcd(x, y);
}

long long divisibilty (long long a, long long c, long long b, long long n) {
   // Write your code here
    long long lcm_ab, lcm_bc, lcm_ac, gcd_ab, gcd_bc, gcd_ac, lcm_abc, gcd_abc;
    /*
	gcd_ab = gcd(a, b);
    gcd_bc = gcd(b, c);
    gcd_ac = gcd(a, c);
    
    lcm_ab = (a * b) / gcd_ab;
    lcm_bc = (b * c) / gcd_bc;
    lcm_ac = (a * c) / gcd_ac;
    
    lcm_ab = lcm(a, b);
    lcm_bc = lcm(b, c);
    lcm_ac = lcm(a, c);
    lcm_abc = (lcm_ab, c);
    
	//lcm_abc = (a * b * c * gcd_abc) / (gcd_ab * gcd_bc * gcd_ac);
    gcd_abc = gcd(lcm_ab, c);
    lcm_abc = (lcm_ab * c) / gcd_abc;
    
    //cout << gcd_ab << " " << gcd_bc << " " << gcd_ac << " " << gcd_abc << endl;
    //cout << lcm_ab << " " << lcm_bc << " " << lcm_ac << " " << lcm_abc << endl;
	lcm_ab = n / lcm_ab;
    lcm_bc = n / lcm_bc;
    lcm_ac = n / lcm_ac;
    lcm_abc = n / lcm_abc;
    
    a = n / a;
    b = n / b;
    c = n / c;
    return (a + b + c - lcm_ab - lcm_bc - lcm_ac + lcm_abc);
    */
    lcm_ab = lcm(a, b);
    lcm_bc = lcm(b, c);
    lcm_ac = lcm(a, c);
    lcm_abc = lcm(lcm_ab, c);
    
	lcm_ab = n / lcm_ab;
    lcm_bc = n / lcm_bc;
    lcm_ac = n / lcm_ac;
    lcm_abc = n / lcm_abc;
    
    a = n / a;
    b = n / b;
    c = n / c;
    return (a + b + c - lcm_ab - lcm_bc - lcm_ac + lcm_abc);
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    long T;
    cin >> T;
    for(long t_i=0; t_i<T; t_i++)
    {
        long long n;
        cin >> n;
        long long a;
        cin >> a;
        long long b;
        cin >> b;
        long long c;
        cin >> c;

        long long out_;
        out_ = divisibilty(a, c, b, n);
        cout << out_ << endl;
    }
}
