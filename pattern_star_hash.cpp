#include <iostream>

using namespace std;

int main()
{
   int n;
   cin >> n;
   int h = 1, s = 1;
   for(int i = 0; i < n/2; i++)
   {
       if(i % 2)
       {
           for(int j = 0; j < n - h; j++)
           {
               cout << "#";
           }
           for(int j = 0; j < s; j++)
           {
               cout << "*";
           }
       }
       else
       {
           for(int j = 0; j < s; j++)
           {
               cout << "*";
           }
           for(int j = 0; j < n - h; j++)
           {
               cout << "#";
           }
       }
       s++;
       h++;
       cout << endl;
   }
   s--;
   h--;
   for(int i = n/2; i < n; i++)
   {
       if(i % 2)
       {
            for(int j = 0; j < h; j++)
           {
               cout << "#";
           }
           for(int j = 0; j < n - s; j++)
           {
               cout << "*";
           }
       }
       else
       {
           for(int j = 0; j < n - s; j++)
           {
               cout << "*";
           }
           for(int j = 0; j < h; j++)
           {
               cout << "#";
           }
       }
       s++;
       h++;
       cout << endl;
   }
   return 0;
}
