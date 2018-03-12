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
int main(){
	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(0);
	int n; string s;
	int arr[100],size=0,c=0;
	while (cin >> n&&n){
		size = 0; c = 0;
		n++;
		while (n--){
			getline(cin , s);
			int x = s.length();
		     c = 0;
			for (int i = 0; i < x; i++){
				if (s[i] == ' ')
					c++;
			}
			arr[size] = c;
			size++;
			}
		sort(arr, arr + size);
		int sum = 0;
		for (int i = size - 1; i > 1; i--){
			sum += arr[i] - arr[1];
		}
		cout << sum << "\n";
	}
	//system("pause");
	return 0;

}