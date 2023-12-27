#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        int a=0;
        if(s[0]=='Y'||s[0]=='y')
           a++;
        if(s[1]=='E'||s[1]=='e')
           a++;
        if(s[2]=='s'||s[2]=='S')
           a++;
           if(a==3)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
