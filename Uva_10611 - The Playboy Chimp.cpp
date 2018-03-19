	#include<iostream>
	#include <stdio.h>
	#include<cmath>
	#include<string>
	#include <algorithm>
	#include<math.h>
	#include<map>
	#include<set>
	#include<vector>
	using namespace std;
	long long  small(long long  arr[100000],int size,long long  x){
		int l = 0, r = size;long long  ind = -2;
		int mid;
		while (l <= r){
			mid= (l + r) / 2;
			if (arr[mid] == x)
			{
				r = mid - 1;
			}
			else
				if(arr[mid] > x)
				r = mid - 1;
				else{
					ind = arr[mid];
					l = mid + 1;
				}
		}
		return ind;
	}
	long long  large(long long  arr[100000], int size, long long  x){
		int l = 0, r = size; long long  ind = -2;
		int mid;
		while (l <= r){
			mid = (l + r) / 2;
			if (arr[mid] == x)
			{
				l = mid + 1;
			}
			else
			if (arr[mid] < x)
				l = mid + 1;
			else{
				ind = arr[mid];
				r = mid - 1;
			}
		}
		return ind;
	}
	int main(){
		std::ios_base::sync_with_stdio(0);
		cin.tie(NULL); cout.tie(0);
		int n, q;
		long long arr[100000] = { 0 }, x;
		cin >> n;
		for (int i = 0; i < n; i++)
			cin >> arr[i];
		cin >> q;
		while (q--){
			cin >> x;
			if (x>arr[n - 1])
				cout << arr[n - 1] << " X\n";
			else{
				int s = small(arr, n, x);
				if (s == -2)
					cout << "X" << " ";
				else
					cout << s << " ";
				s = large(arr, n, x);
				if (s == -2)
					cout << "X\n";
				else
					cout << s << "\n";
			}

		}
		//system("pause");
		return 0;

	}