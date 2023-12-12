#include<iostream>
using namespace std;
int main()
{ 
    int n, sum = 0, p, q;
    cin >> n;
    while(n--)
    {
        cin >> p >> q;
        if((abs(p - q)) >= 2)
        {
            sum ++;
        }
    }
    cout << sum << endl;
    return 0;
}
