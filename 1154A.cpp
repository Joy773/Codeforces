#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int arr[4];
    for(int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + 4, greater <int> ());
    int ans1 = arr[0] - arr[1];
    int ans2 = arr[0] - arr[2];
    int ans3 = arr[0] - arr[3];
    cout << ans1 << endl;
    cout << ans2 << endl;
    cout << ans3 << endl;
    return 0;
}
