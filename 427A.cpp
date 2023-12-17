#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n, x, police = 0, crime = 0;
    cin >> n;
    while(n--)
    {
        cin >> x;
        if(x > 0)
        {
            police += x;
        }
        else{
            if(police < 1)
            {
                ++crime;
            }
            else 
            {
                --police;
            }
        }
    }
    cout << crime << endl;
    return 0;
}
