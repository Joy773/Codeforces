#include<iostream>
using namespace std;
int main()
{ 
    int n, sum = 0;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++)
    {
        if((arr[i] != arr[i + 1]))
        {
            sum++;
        }
    }
    cout << sum << endl;
    return 0;
}
