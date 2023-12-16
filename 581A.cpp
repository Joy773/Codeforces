#include<iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    if(a > b)
    {
        cout << b << endl;
        cout << (a - b) / 2 << endl;
    }
    else if(a <= b)
    {
        cout << a << endl;
        cout << (b - a) / 2 << endl;
    }
    return 0;
}
