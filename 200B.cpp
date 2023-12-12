#include<iostream>
#include <cmath>
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
        sum += arr[i];
    }
    double ans = (double) sum / n;
    cout << ans << endl;
    return 0;
}
