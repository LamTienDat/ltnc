
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n ;
    cin >> n;
    for ( int i = 1; i <= n; i++)
    {
        int count = 0; // đếm số ước của a
        for (int j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }
        if (count == 0 && i > 1)
           cout<<i<<" ";
    }
}
