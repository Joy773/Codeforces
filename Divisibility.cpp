#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++)
    {
        int a, b;
        cin >> a >> b;
        if(a > b)
        {
            if(a % b != 0)
            {
                int answer = a % b;
                answer = b - answer;
                cout << answer << endl;
            }
            if (a % b == 0)
            {
                cout << 0 << endl;
            }
        }
        else 
        {
            int ans = b - a;
            cout << ans << endl;
        }
    }
    return 0;
}
