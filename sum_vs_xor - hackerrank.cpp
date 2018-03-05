#include <bits/stdc++.h>

using namespace std;

long solve(long n) {
    // Complete this function
    int count = 0;
    while(n)
    {
        if((n & 1) == 0)
        {
            count++;
        }
        n = n >> 1;
    }
    return (1 << count);
//    return pow(2, count);		// Using pow not left shifting 1? Ouch on the processor cycles!
}

int main() {
    long n;
    cin >> n;
    long result = solve(n);
    cout << result << endl;
    return 0;
}

