#include<iostream>
using namespace std;
int main()
{
    int l, b, count = 0;
    cin >> l >> b;
    if(l > b)
    {
        cout << 0 << endl;
    }
    else 
    {
        while(l <= b)
        {
            l = l * 3;
            b = b * 2;
            count++;
        }
        cout << count << endl;
    }
    return 0;
}
