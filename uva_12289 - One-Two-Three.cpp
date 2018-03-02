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
	int n;
	cin >> n;
	while (n--){
		cin >> s;
		int x = s.length();
		if (x > 3)
			cout << 3 << endl;
		else
		if (s == "two")
			cout << 2 << endl;
		else
		if (s == "one")
			cout << 1 << endl;
		else
		{
			if ((s[0] == 'o'&&s[2] == 'e') || (s[0] == 'o'&&s[1] == 'n') || (s[1] == 'n'&&s[2] == 'e'))
				cout << 1 << endl;
			else
			if ((s[0] == 't'&&s[2] == 'o') || (s[0] == 't'&&s[1] == 'w') || (s[1] == 'w'&&s[2] == 'o'))
				cout << 2 << endl;
		}
	}
	system("pause");
	return 0;

}