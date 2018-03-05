#include<iostream>
#include<cmath>
#include<string>
#include <algorithm>
#include<math.h>
#include<iomanip>
#include<bitset>
using namespace std;
/*Created By Ahmed Hossny */
char z[10000000];
int main(){
	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	string s;
	
	while (getline(cin, s)){
		bool b = 0;
		int size = 0;
		int x = s.length();
		for (int i = 0; i < x; i++){
			if (s[i] == ' '){
				for (int j = size-1; j >= 0; j--)
					cout << z[j];
				size = 0;
				cout << s[i];
			}
			else{
				z[size] = s[i];
				size++;
			}
		}
		for (int j = size - 1; j >= 0; j--)
			cout << z[j];
		cout << endl;
	}
		system("pause");
	return 0;

}