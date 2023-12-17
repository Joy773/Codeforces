#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string a, b, c, sorting;
    cin >> a >> b >> c;
    sorting = a + b;
    sort(sorting.begin(), sorting.end());
    sort(c.begin(), c.end());
    if(sorting == c)
    {
        cout << "YES" << endl;
    }
    else 
    {
        cout << "NO" << endl;
    }
    return 0;
}
