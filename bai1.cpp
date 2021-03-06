#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n ;
    cin>> n ;
    cin.ignore();
    while(n--)
    {
        string s ;
        getline(cin,s);
        int i = 0 ;
        while(s[0]==' ') s.erase(0,1);
        while( i < s.size())
        {
            if( (s[i]==' ') && (s[i+1]==' '))
                s.erase(i,1);
            else i++;
        }
        cout<<s<<endl;
    }
}





