#include <iostream>
#include <string>

using namespace std;

int main()
{
    string n, j;
    cin >> n >> j;
    for(int i = 0; i < n.size(); i++)
    {
        if(n[i] == j[i])
        {
            n[i] = '0';
        }
        else 
        {
            n[i] = '1';
        }
    }
    cout << n << endl;
    return 0;
}
