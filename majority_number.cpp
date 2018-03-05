#include<iostream>
#include<string>
#include<stack>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector <int> a(n);
	vector <int> hash(1001, 0);
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
		hash[a[i]]++;
	}
	int flag = -1;
	for(int i = 0; i < hash.size(); i++)
	{
		if(hash[i] > 0)
		{
			if(hash[i] > (n / 2))
			{
				flag = 1;
				break;
			}
		}
	}
	cout << flag;
}
