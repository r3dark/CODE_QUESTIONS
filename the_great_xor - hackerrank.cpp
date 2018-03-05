#include <bits/stdc++.h>

using namespace std;

long theGreatXor(long x){
    // Complete this function
    long e = 0, a = 0;
    while(x != 1L)			// while(x != 1L) same as while(x) when x & 1 i done in loop, it will ignore the 1 automatically, but while(x) will use another loop cycle
    {
        if((x & 1) == 0)
        {
            a = a + (1L << e);
        }
        e++;
        x = x >> 1;
    }
    return a;
}

/*
long theGreatXor(long x){
   
   long count = x, i = 0, k = 0;
   while(x)
   {
       k = k + pow(2, i++);
       x = x / 2;
   }
   return k - count;
}
*/

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        long x;
        cin >> x;
        long result = theGreatXor(x);
        cout << result << endl;
    }
    return 0;
}

