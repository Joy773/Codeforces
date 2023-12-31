#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    if(t % 2 == 0)
    {
        cout << "6" << " " << t - 6;
    }
    else
    {
        cout << "9" << " " << t - 9;
    }
    return 0;
}
