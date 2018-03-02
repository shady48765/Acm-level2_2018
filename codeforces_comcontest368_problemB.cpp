#include<iostream>
#include<cmath>
#include<string>
#include <algorithm>
#include<math.h>
#include<iomanip>
#include<bitset>
using namespace std;
/*Created By Ahmed Hossny */
int main(){
	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	int n, m, arr[100000], x;
	bool arr1[1000000] = { 0 };
	cin >> n >> m;
	for (int i = 0; i<n; i++){
		cin >> arr[i];
	}
	arr1[arr[n - 1]] = 1;
	arr[n - 1] = 1;
	for (int i = n - 2; i >= 0; i--){
		if (arr1[arr[i]] == 0){
			arr1[arr[i]] = 1;
			arr[i] = arr[i + 1] + 1;
		}
		else{
			arr[i] = arr[i + 1];
		}
	}
	while (m--){
		cin >> x;
		cout << arr[x - 1] << endl;
	}
	return 0;

}