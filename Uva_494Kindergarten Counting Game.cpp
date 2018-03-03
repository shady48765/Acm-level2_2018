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
	int c = 0;
	while (getline(cin, s))
	{
		c = 0;
		int x = s.length();
		for (int i = 0; i < x; i++){
			if ((s[i] >= 'A'&&s[i] <= 'Z') || (s[i] >= 'a'&&s[i] <= 'z')){
				if ((s[i + 1] >= 'A'&&s[i + 1] <= 'Z') || (s[i + 1] >= 'a'&&s[i + 1] <= 'z'))
					continue;
				else
					c++;
			}
		}
		cout << c << "\n";
	}
	
	system("pause");
	return 0;

}