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
	int p[30] = { 0 };
	char x;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> x;
		if (x < 'a')
			x = x + ('a' - 'A');
		p[x - 'a']++;
	}
	for (int i = 0; i < 26; i++){
		if (p[i] == 0)
		{
			cout << "NO" << endl;
			return 0;

		}
	}
	cout << "YES" << endl;
	return 0;

}