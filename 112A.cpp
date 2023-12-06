#include<iostream>
using namespace std;
int main()
{
    string ch1, ch2;
    cin >> ch1 >> ch2;
    for(int i = 0; i < ch1.size(); i++)
    {
        ch1[i] = towlower(ch1[i]);
    }

    for(int i = 0; i < ch2.size(); i++)
    {
        ch2[i] = towlower(ch2[i]);
    }
    
    if(ch1 == ch2)
    {
        cout << 0 << endl;
    }

    else if(ch1 < ch2)
    {
        cout << -1 << endl;
    }

    else if(ch1 > ch2)
    {
        cout << 1 << endl;
    }
    
    return 0;
}
