#include<iostream>
#include<cmath>
#include<string>
#include <algorithm>
#include<math.h>
#include<iomanip>
#include<bitset>
using namespace std;
/*Created By Ahmed Hossny */
int arr[2000000];
int main(){
	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	int n, x, c = 0, size = 0;
	bool b = 1,b1=1,b3=1,b4=1;
	char ch;
	string s;
	while (cin >> n&&n){
		c = 0; size = 0; b = 1; b1 = 1; b3 = 1; b4 = 1;
		cin >> s;
		x = s.length();
		for (int i = 0; i < x; i++){
			if (s[i] == 'Z'){
				b1 = 0;
				b4 = 0;
				break;
			}
			if (b && (s[i] == 'D' || s[i] == 'R')){
				ch = s[i];
				b = 0;
			}
			if (!b&&b3){
				if (s[i] == '.'){
					c++;
					continue;
				}
				else
				if (s[i]==ch){
					c = 0;
				}
				else
				{
					if (c == 0){
						b1 = 0;
						b3 = 0;
					}
					else{
						arr[size] = c+1;
						c = 0;
						ch = s[i];
						size++;
					}
				}
			}
		}
		if (!b4)
			cout << 0 << "\n";
		else
		if (!b3)
			cout << 1 << "\n";
		else{
			sort(arr, arr + size);
			cout << arr[0] << "\n";
		}
		
	}
	//system("pause");
	return 0;

}