#include<iostream>
#include <stdio.h>
#include<cmath>
#include<string>
#include <algorithm>
#include<math.h>
using namespace std;
long long arr[2000005];
int main(){
	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	int n;
	//scanf("%d", &n);
	while (cin >> n&&n){
		for (int i = 0; i < n; i++)
			//scanf("%lld", &arr[i]);
			cin >> arr[i];
		sort(arr, arr + n);
		for (int i = 0; i < n; i++){
			if (i == n - 1)
				printf("%llu", arr[i]);
			else
			printf("%llu ", arr[i]);
		}
		printf("\n");
	}
	//system("pause");
	return 0;

}