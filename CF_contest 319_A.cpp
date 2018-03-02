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
	int n, c = 0; long long x, m;
	cin >> n >> x;
	for (int i = 1; i <= n; i++){
		if (x%i == 0)
		{
			m = x / i;
			if (m <= n)
				c++;
		}
		}
	cout << c << endl;
	system("pause");
	return 0;

}