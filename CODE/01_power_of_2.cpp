/*

Problem: Given a number N. Determine whether N is power of 2 or not.
Input Format: Only one line contains a number N
Print "YES" if N is power of 2 otherwise print "NO"

*/

/*

IDEA used is: Keep dividing the number by 2 until the quotient becomes 1. 

*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;

    string flag = "YES";
    while (N > 1)
    {
        if (N % 2 != 0)
        {
            flag = "NO";
            break;
        }
        N = N / 2;
    }

    cout << flag;
    return 0;
}