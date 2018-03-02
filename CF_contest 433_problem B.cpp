#include<iostream>
#include<cmath>
#include<string>
#include <algorithm>
#include<math.h>
#include<iomanip>
#include<bitset>
using namespace std;
/*Created By Ahmed Hossny */
long long arr2[100005] = { 0 };
long long arr3[100005] = { 0 };
int arr[100005];
int main(){
	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	int  n, m, x, l, r;

	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	arr2[0] = arr[0];
	for (int i = 1; i < n; i++){
		arr2[i] = arr2[i - 1] + arr[i];
	}
	sort(arr, arr + n);
	arr3[0] = arr[0];
	for (int i = 1; i < n; i++){
		arr3[i] = arr3[i - 1] + arr[i];
	}
	cin >> m;
	while (m--){
		cin >> x >> l >> r;
		if (x == 1)
			cout << arr2[r - 1] - arr2[l - 2] << endl;
		else
			cout << arr3[r - 1] - arr3[l - 2] << endl;
	}
	return 0;

}