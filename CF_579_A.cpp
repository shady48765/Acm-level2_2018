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
	long long x;
	int c = 0;
	cin >> x;
	while (x > 0){
		if (x % 2 == 1)
			c++;
		x /= 2;
	}
	cout << c << endl;
	system("pause");
	return 0;

}