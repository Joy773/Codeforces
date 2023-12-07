#include<iostream>
using namespace std;
int main()
{
    int k, n, w, count = 0;
    cin >> k >> n >> w;
    for(int i = 1; i <= w; i++)
    {
        count += i;
    }

    int d =  (count * k) - n;
  
    if(d < 0)
    {
        cout << 0 << endl;
    }
    else 
    {
        cout << d << endl;
    }
    return 0;
}
