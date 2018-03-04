#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
	    int n, q;
	    cin >> n >> q;
	    string s;
	    cin >> s;
	   // char s[n];
	   // for(int i = 0; i < n; i++)
	   // {
	   //     cin >> s[i];
	   // }
	    while(q--)
	    {
	        int x, y, i, candy1 = 0, candy2 = 0;
            cin >> x >> y;
            i = --x;
            y--;
            while(i != y)
            {
                if(i == n - 1)
                {
                    if(s[i] != s[0])
                    {
                        candy1++;
                    }
                    i = 0;
                }
                else 
                {
                    if(s[i] != s[i + 1])
                    {
                        candy1++;
                    }
                    i++;
                }
            }
            i = x;
            while(i != y)
            {
                if(i == 0)
                {
                    if(s[i] != s[n - 1])
                    {
                        candy2++;
                    }
                    i = n - 1;
                }
                else 
                {
                    if(s[i] != s[i - 1])
                    {
                        candy2++;
                    }
                    i--;
                }
            }
            (candy2 < candy1) ? cout << candy2 << endl : cout << candy1 << endl;
	    }
	}
}

