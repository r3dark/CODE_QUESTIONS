#include<iostream>
#include<string>
#include<stack>
#include<algorithm>
#include<cmath>
using namespace std;

/*
Mary has an n x m piece of paper that she wants to cut into 1 x 1 pieces according to the following rules:

-> She can only cut one piece of paper at a time, meaning she cannot fold the paper or layer already-cut pieces on top of one another.
-> Each cut is a straight line from one side of the paper to the other side of the paper.
Given n and m, find and print the minimum number of cuts Mary must make to cut the paper into n * m squares that are 1 x 1 unit in size.
*/
/*
Each time a piece of paper is cut it becomes 2 pieces, adding 1 to the total number of pieces each time.

so, total pieces n * m, - 1 is because, when u cut the last one,
u get 1 piece corresponding to that 1 cut, but the remaining one is also a 1x1 piece,
for which u need not make any cut, its kind of a bonus... so n * m - 1


or


Because Mary can't fold the paper and only cuts one piece of paper at a time, a single cut to a single piece of paper can increase the number of pieces by at most 1
(i.e., each cut splits a piece into two parts). Mary must cut the paper into n x m pieces, where each piece is of size 1 x 1.
After making 1 cut, the number of pieces is 1. After making 2 cuts, the number of pieces is 3. After making n x m - 1 cuts, the number of pieces is n x m.
*/

long solve(long n, long m){
    // Complete this function
    // return (m - 1) + (m * (n - 1));
    return m * n - 1;
}

int main() {
    long n;
    long m;
    cin >> n >> m;
    long result = solve(n, m);
    cout << result << endl;
    return 0;
}
