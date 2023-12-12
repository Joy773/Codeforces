#include<bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int arr[4], sum = 0;
    for(int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + 4);
    for(int i = 0; i < 3; i++)
    {
        if(arr[i] == arr[i + 1])
        {
            sum++;
        }
    }
    cout << sum << endl;
    return 0;
}
