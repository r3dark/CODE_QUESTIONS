/*
Given three numbers N, A and B. Find how integers in range from 1 to N are divisible by A or B.

Input:
Input contains three integers N, A and B separated by space.

Output:
Print total numbers of integers in range from 1 to N are divisible by A or B.

Constraints:

Test Files 1 to 5: 
1<=N<=100 
1<=A<=100
1<=B<=100

Test Files 6 to 10
1<=N<=10^12
1<=A<=10^5
1<=B<=10^5

eg. N= 25 , A = 3 and B= 5

12 numbers which are divisible by 3 or 5 in range 1 to N are given below:
3, 5, 6, 9, 10, 12, 15, 18, 20, 21, 24, 25
*/

#include <iostream>
using namespace std;

long long gcd(long long a, long long b)
{
    if(b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}

long long lcm(long long a, long long b)
{
    return ((a * b) / gcd(a, b));
}

int main()
{
    long long n, a, b;
    cin >> n >> a >> b;
    
    long long lcm_ab;
    lcm_ab = lcm(a, b);
    lcm_ab = n / lcm_ab;
    a = n / a;
    b = n / b;
    cout << a + b - lcm_ab;
    return 0;
}

