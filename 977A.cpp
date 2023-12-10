#include<iostream>
using namespace std;
int main()
{
    int n, k, rem; 
    cin >> n >> k;
    for(int i = 1; i <= k; i++)
    {
        rem = n % 10; 

        if(rem == 0)
        {
            n = n / 10;
        }
        else
        {
            n = n - 1;
        }
    }
    cout << n << endl;
    return 0;
}
