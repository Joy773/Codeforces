#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string n;
    int sum = 0;
    cin >> n;
    sort(n.begin(), n.end());
    for(int i = 0; i < n.size(); i++)
    {
        if(n[i] != n[i + 1])
        {
            sum++;
        }
    }
    if(sum % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else 
    {
        cout << "IGNORE HIM!" << endl;
    }
    return 0;
}
