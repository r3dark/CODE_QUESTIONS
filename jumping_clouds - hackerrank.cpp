#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> c(n);
    for(int c_i = 0;c_i < n;c_i++){
       cin >> c[c_i];
    }
    
    int jump = 0;
    int i = 0;
    while(i < n - 1)
    {
        if((i + 2 < n) && (c[i + 2] == 0))		// if((c[i + 2] == 0)
        {
            jump++;
            i += 2;
        }
        else if(c[i + 1] == 0)
        {
            jump++;
            i++;
        }
    }
    cout << jump << endl;
    return 0;
}

/*
int main(){
    int n;
    cin >> n;
    vector<int> c(n);
    for(int c_i = 0;c_i < n;c_i++){
       cin >> c[c_i];
    }
    
    int jump = 0;
    int i = 0;
    while(i < n - 1)
    {
        if(((c[i + 1] == 0) && (c[i + 2] == 0)) || (c[i + 1] == 1))
        {
            jump++;
            i += 2;
        }
        else if((c[i + 1] == 0) && (c[i + 2] == 1) || (c[i + 1] == 0))		// braces doesn't matter! :O
//		else if((c[i + 1] == 0) && (c[i + 1] == 0) || (c[i + 2] == 1))		// order doesn't matter! :O
        {
            jump++;
            i++;
        }
    }
    cout << jump << endl;
    return 0;
}
*/
