#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; double k;
    cin >> n >> k;
    k = 1 - k/100;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr+n);
    double container = 0;
    double high = arr[n-1], low = arr[0];
    double mid = low + (high-low)/2;
    while(low < high)
    {
        mid = low + (high-low)/2;
        for(int i = 0; i < n; i++)
        {
            if(arr[i] < mid)
                container -= (mid - arr[i]);
            else if(arr[i] > mid)
                container += ((arr[i] - mid)*k);
        }
        if(long(container * 10000000000) == 0)
        {
            cout << fixed << setprecision(9) << mid << endl;
            return 0;
        }
        else if(container > 0)
            low = mid;
        else if(container < 0)
            high = mid;
        container = 0;
    }
    cout << fixed << setprecision(9) << mid << endl;
    return 0;
}