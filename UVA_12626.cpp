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
	string s;
	int n,m=0,r=0,i=0,g=0,a=0,t=0;
	int arr[6];
	cin >> n;
	while (n--){
		m = 0; r = 0; i = 0; g = 0; a = 0; t = 0;
		cin >> s;
		int x = s.length();
		for (int j = 0; j < x; j++){
			if (s[j] == 'M')
				m++;
			else
			if (s[j] == 'R')
				r++;
			else
			if (s[j] == 'I'){
				i++;
				
			}
			else
			if (s[j] == 'G')
				g++;
			else
			if (s[j] == 'A')
				a++;
			else
			if (s[j] == 'T'){
				t++;
				
			}
		}
		arr[0] = m; arr[1] = r; arr[2] = i; arr[3] = g; arr[4] = a; arr[5] = t;
		sort(arr, arr + 6);
		
		//MRMRGGIITTAAAAAAA
			int arr2[3];
			arr2[0] = arr[0];
			arr2[1] = r / 2;
			arr2[2] = a / 3;
			sort(arr2, arr2 + 3);
			cout << arr2[0] << endl;
		

	}
	system("pause");
	return 0;

}