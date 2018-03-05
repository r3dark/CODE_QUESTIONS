/*
Given an array A[] of n numbers and another number x, determine whether or not there exist two elements in A whose sum is exactly x.

Input:

The first line of input contains an integer T denoting the number of test cases.
The first line of each test case is N and X,N is the size of array.
The second line of each test case contains N integers representing array elements C[i].

Output:

Print "Yes" if there exist two elements in A whose sum is exactly x, else "No" without quotes.

Constraints:

1 = T = 200
1 = N = 200
1 = C[i] = 1000

Example:

Input:
2
6 16
1 4 45 6 10 8
5 10
1 2 4 3 6

Output:
Yes
Yes
*/

#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

//int main() {
//	int t, n, x;
//	cin >> t;
//	while(t--)
//	{
//	    cin >> n >> x;
//    	vector <int> a(n);
//    	int max = INT_MIN;
//    	for(int i = 0; i < n; i++)
//    	{
//    	    cin >> a[i];
//    	    if(max < a[i])
//    	    {
//    	        max = a[i];
//    	    }
//    	}
//    	max++;
//    	vector <int> h(max, 0);
//    	
//    	for(int i = 0; i < n; i++)
//    	{
//    	    if(a[i] < x)
//    	    {
//    	    	h[a[i]]++;
//			}
//    	}
//    	int flag = 0;
//    	for(int i = 0; i < max; i++)
//    	{
//    	    if(h[i] != 0)
//    	    {
//    	        int t = x - i;
//				//	1;	5 11;	1 2 3 4 5	-> No but if (t < max) is removed, undefined behavior as 11 - 1 = 10 and it directly checks h[10] which is not present in hash
//    	        if((t < max) && (t != i) && (h[t] > 0))
//				{
//    	            flag = 1;
//    	            break;
//    	        }
//    	    }
//    	}
//    	if(flag)
//    	{
//    		cout << "Yes\n";
//		}
//		else
//		{
//			cout << "No\n";
//		}
//	}
//	return 0;
//}

int main() {
    int t, n, x, i, j;
    cin>>t;
    while(t--)
    {
        int flag = 0;
        cin>>n>>x;
        int a[n];
        
        for(i = 0; i < n; i++)
        {
          cin>>a[i];
        }
        sort(a, a+n);
        
        i = 0, j = n - 1;
        while(i < j)
        {
			if(a[i] + a[j] > x)
			{
				j--;
			}
			else if(a[i] + a[j] < x)
			{
				i++;
			}
			else if(a[i] + a[j] == x)
			{
				flag = 1;
				break;
			}
          
        }
        if(flag == 1)
        {
        	cout<<"Yes"<<endl;
        }
        else
        {
        	cout<<"No"<<endl;
        }
    }
return 0;
}
