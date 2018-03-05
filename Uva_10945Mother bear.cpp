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
		if (s == "DONE")
			break;
		bool b = 0;
		int size = 0;
		int x = s.length();
		for (int i = 0; i < x; i++){
			if (s[i] >= 'A'&&s[i] <= 'Z'){
				z[size]= s[i]+32;
				size++;
				continue;
			}
			if (s[i] >= 'a'&&s[i] <= 'z'){
				z[size] = s[i];
				size++;
			}
		}
		for (int i = 0,  j = size - 1; i <= j; i++, j--){
			if (z[i] == z[j])
				continue;
			if (z[i] != z[j])
			{
				b = 1;
				break;
			}
		}
		if (b)
			cout << "Uh oh..\n";
		else
			cout << "You won't be eaten!\n";
	}
		system("pause");
	return 0;

}