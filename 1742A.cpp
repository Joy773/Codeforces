#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int a, b, c, t;
    cin >> t;
    while(t--)
    {
        cin >> a >> b >> c;
        if(a + b == c || a + c == b || b + c == a)
        {
            cout << "YES" << endl;
        }
        else 
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
