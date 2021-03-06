#include<bits/stdc++.h>
using namespace std;

void inputArr( int a[][2] , int n)
{
    for( int i =  0 ; i < n ; i++)
    {
        for(int j = 0 ; j < 2 ; j++)
        {
            cin >> a[i][j];
        }
    }
}

bool check( int x1 , int x2 , int y1 , int y2)
{
    if((x1 - y1) == (x2 - y2) || (x1 - x2) == (y2 - y1) ||(x1 == x2) ||(y1 == y2))
        return true ;
    return false ;
}

bool checkArr( int a[][2], int n )
{
    for( int i = 0 ; i < n - 1 ; i++)
    {
        for(int j = i+1 ; j < n ; j++)
        {
            if(check(a[i][0] , a[j][0] , a[i][1] , a[j][1]))
                return true ;
        }
    }
    return false ;
}
int main()
{
    int n ;
    cin >> n ;
    int a[n][2];
    inputArr(a,n);
    if(checkArr(a,n) == true )
        cout<<"yes";
    else
        cout<<"no";
}
