#include<iostream>
#include<string>
#include<stack>
#include<algorithm>
#include<cmath>

using namespace std;


int main(){
    int n;
    cin >> n;
    int x1, y1, x2, y2;
    cin >> x1 >> y1;
    int count_y = 1, count_x = 1;
    for(int i = 1; i < n; i++)
    {
        cin >> x2 >> y2;
        if(x2 == x1)
        {
            count_x++;
        }
        if(y2 == y1)
        {
            count_y++;
        }
        x1 = x2;
        y1 = y2;
    }
    
    if((count_x == n) || (count_y == n))
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 0;
}

/*
int main(){
    int n;
    cin >> n;
    int a[n][2];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            cin >> a[i][j];
        }
    }
    
    int count_y = 1, count_x = 1;
    for(int i = 1; i < n; i++)
    {
        if(a[i][0] == a[i - 1][0])
        {
            count_y++;
        }
        if(a[i][1] == a[i - 1][1])
        {
            count_x++;
        }
    }
    if((count_x == n) || (count_y == n))
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 0;
}
*/

