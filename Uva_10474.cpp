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
	int found(int arr[100000],int size,int x){
		int l = 0, r = size,ind=-2;
		int mid;
		while (l <= r){
			mid= (l + r) / 2;
			if (arr[mid] == x)
			{
				ind = mid;
				r = mid - 1;
			}
			else
				if(arr[mid] > x)
				r = mid - 1;
			else
				l = mid + 1;
		}
		return ind+1;
	}
	int main(){
		std::ios_base::sync_with_stdio(0);
		cin.tie(NULL); cout.tie(0);
		int arr[100000];
		int n, q,x,j=1,s;
		while (true){
			cin >> n >> q;
			if (n == 0 && q == 0)
				break;
			for (int i = 0; i < n; i++)
				cin >> arr[i];
			cout << "CASE# " << j << ":\n";
			j++;
			sort(arr, arr + n);
			while (q--){
				cin >> x;
				 s = found(arr, n, x);
				if (s == -1)
					cout << x << " not found\n";
				else
					cout << x << " found at " << s<<"\n";
			}
		}
		//system("pause");
		return 0;

	}