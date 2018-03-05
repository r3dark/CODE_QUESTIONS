#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long p = 0;
    long q = 0;
    cin >> p >> q;
    int flag = 0;
    for(long i = p; i <= q; i++)
    {
        vector <int> a;
        long r = 0, l = 0;
        long ex = i * i;
        while(ex)
        {
            a.insert(a.begin(), ex % 10);
            ex /= 10;
        }
        long t = 1;
        for(long j = (a.size() / 2) - 1; j >= 0; j--)
        {
            l = (t * a[j]) + l;
            t = t * 10;
        }
        t = 1;
        long s = a.size();
        //for(long j = (a.size() - 1); j >= (a.size() / 2); j--)      //segfault, use j >= int(a.size() / 2)
        for(long j = (s - 1); j >= (s / 2); j--)
        {
            r = (t * a[j]) + r;
            t = t * 10;
        }
        if(l + r == i)
        {
            cout << i << " ";
            flag = 1;
        }
    }
    if(flag == 0)
    {
        cout << "INVALID RANGE\n";
    }
    return 0;
}

