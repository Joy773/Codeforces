#include<iostream>
using namespace std;
int main()
{ 
    int n, h, sum = 0, count = 0;
    cin >> n >> h;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++)
    {
        if(arr[i] <= h)
        {
            sum++;
        }
        else 
        {
            count += 2;
        }
    }
    cout << (sum + count) << endl;
    return 0;
}
