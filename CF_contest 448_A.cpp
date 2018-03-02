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
	int x, y, z, s1, s2,c1=0,c2=0;
	cin >> x >> y >> z;
	s1 = x + y + z;
	cin >> x >> y >> z;
	s2 = x + y + z;
	int t;
	cin >> t;
	
	while(s1>0){
		s1 -= 5;
		c1++;
	}
	while (s2>0){
		s2 -= 10;
		c2++;
	}
	if (c1 + c2 <= t)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;

	return 0;

}