#include<iostream>
#include<cmath>
#include<string>
#include <algorithm>
#include<math.h>
#include<iomanip>
#include<map>
#include<set>
using namespace std;


int main(){
	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	set<long long >s1, s2;
	int n, m;
	long long x,c=0;
	while (true){
		cin >> n >> m;
		if (n == 0 && m == 0)
			break;
		c = 0;
		while (n--){
			cin >> x;
			s1.insert(x);
		}
		while (m--){
			cin >> x;
			s2.insert(x);
		}
		set<long long>::iterator it1, it2;
		for (it1 = s1.begin(); it1 != s1.end(); it1++){
			it2 = s2.find(*it1);
			if (it2 != s2.end())
				c++;
		}
		cout << c << "\n";
		s1.clear(); s2.clear();
	}
	//system("pause");
	return 0;

}