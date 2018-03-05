#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t = 0;
    cin >> t;
    while(t--)
    {
        int n, a, b, t;
        cin >> n >> a >> b;
        t = min(a, b);
        b = max(a, b);
        a = t;
        long sum = 0;
        n--;
        if(a == b)
        {
            cout << (n * a);
        }
        else
        {
            sum = (n * a);
            a = b - a;
            for(int i = 0; i <= n; i++)
            {
                cout << sum << " ";
                sum += a;
            }
        }
        cout << endl;
    }
    return 0;
}

/*
int main() {
//    Enter your code here. Read input from STDIN. Print output to STDOUT
    int t = 0;
    cin >> t;
    while(t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        int sum = 0;
        if(a < b)
        {
            for(int i = 0; i < n - 1; i++)
            {
                sum += a;
            }
            a = abs(a - b);
            for(int i = 0; i < n; i++)
            {
                cout << sum << " ";
                sum += a;
            }
        }
        else if(b < a)
        {
            for(int i = 0; i < n - 1; i++)
            {
                sum += b;
            }
            b = abs(a - b);
            for(int i = 0; i < n; i++)
            {
                cout << sum << " ";
                sum += b;
            }
        }
        else if(a == b)
        {
            for(int i = 0; i < n - 1; i++)
            {
                sum += a;
            }
            cout << sum;
        }
        cout << endl;
    }
    return 0;
}
*/
