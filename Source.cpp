#include<iostream>
#include<cmath>
#include<string>
#include <algorithm>
#include<math.h>
#include<iomanip>
#include<bitset>
using namespace std;
//std::ios_base::sync_with_stdio(0);
//cin.tie(NULL);
int main(){
	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	string s;
	int c = 0;
	getline(cin, s);
	int x = s.length();
	for (int i = 0; i < x; i++){
		if (s[i] == ',' || s[i] == '.' || s[i] == '!' || s[i] == '?')
		if (s[i + 1] != ' ')
			cout << s[i] << " ";
		else
			cout << s[i];
		else
		if ((s[i] == ' '&&s[i + 1] == ' ') || (s[i] == ' '&&s[i + 1] == ',') || (s[i] == ' '&&s[i + 1] == '?') || (s[i] == ' '&&s[i + 1] == '!') || (s[i] == ' '&&s[i + 1] == '.'))
			continue;
		else
			cout << s[i];
	}
	cout << endl;
	system("pause");
	return 0;

}