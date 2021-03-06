
#include<bits/stdc++.h>
using namespace std;

int search(int a[] , int left , int right , int x )
{
    if(right >= left)
    {
        int mid = (left + ( right -1 ))/2 ;
        if( a[mid] == x )
            return mid ;
        if( a[mid] > x )
            return search(a , left , mid - 1 , x );
        return search(a , mid + 1 , right , x );
    }
    return -1 ;
}
int main()
{
    int n , x  ;
    cin >> n >> x ;
    int a[n+5];
    for(int i = 0 ; i < n ; i++)
    {
        cin >> a[i];
    }
    int answer = search(a , 0 , n-1 , x );
    if(answer== -1)
    {
        cout<< "NO";
    }
    else cout<<"YES";
    return 0 ;
}
