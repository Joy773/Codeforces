#include<iostream>
using namespace std;
int main()
{
    int n, Anton, Danik;
    string s;

    cin >> n;
    cin >> s;
    
    for(int i = 0; i < n; i++)
    {
        if(s[i] == 'A')
        {
            Anton++;
        }
        else if(s[i] = 'D')
        {
            Danik++;
        }
    }
    if(Anton == Danik)
    {
        cout << "Friendship" << endl;
    }
    else if(Anton > Danik)
    {
        cout << "Anton" << endl;
    }
    else if(Danik > Anton)
    {
        cout << "Danik" << endl;
    }
    return 0;
}
