#include<bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, p, q, count = 0;
    int arr[300];
    cin >> n >> p;
    for(int i = 0; i < p; i++)
    {
        cin >> arr[i];
    }
    cin >> q;
    for(int i = p; i < (p + q); i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + (p + q));
    for(int i = 0; i < (p + q); i++)
    {
        if(arr[i] != arr[i + 1])
        {
            count++;
        }
    }
    if(count == n)
    {
        cout << "I become the guy." << endl;
    }
    else 
    {
        cout << "Oh, my keyboard!" << endl;
    }
    return 0;
}
