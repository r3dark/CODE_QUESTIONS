#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long n;
        long c;
        long m;
        cin >> n >> c >> m;
        long choc = (n / c);
        long wrap = 0;
        if(choc == m)
        {
            wrap = 1;
        }
        else if(choc > m)
        {
            wrap = m % choc;
        }
        cout << choc + wrap << endl;
    }
    return 0;
}

