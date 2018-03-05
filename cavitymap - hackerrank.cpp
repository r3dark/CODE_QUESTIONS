#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> grid(n);
    for(int grid_i = 0; grid_i < n; grid_i++){
       cin >> grid[grid_i];
    }
    
    for(int i = 0; i < grid.size(); i++)
    {
        int index = 0;
        for(int j = 1; j < grid[i].length() - 1; j++)
        {
            if((grid[i][j] > grid[i][j - 1]) && (grid[i][j] > grid[i][j + 1]))
            {
                grid[i][j] = 'X';
            }
        }
        cout << grid[i] << endl;
    }
    return 0;
}

