#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a , m , n ;
    cin >> a >> n >> m ;
     long long s = 1 ;
for( int i = 1 ; i <= n ; i++)
    {
        int k = a % m ;
        s = s * k;
        s = s % m ;
    }
    cout << s;
    return 0 ;
}
