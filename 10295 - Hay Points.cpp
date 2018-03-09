#include<iostream>
#include <stdio.h>
#include<cmath>
#include<string>
#include <algorithm>
#include<math.h>
#include<map>
using namespace std;
int main(){
	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	map<string, int>ma;
	int n, m,x;
	string s,str;
	long long sum=0;
	cin >> n >> m;
	while(n--){
		cin >> s >> x;
		ma[s] = x;
	}
	s.clear();
	while(m--){
		sum = 0; 
		while (cin >> s){
			if (s == "."){
				break;
			}
			if (ma[s] != 0){
				sum += ma[s];
			}
			
		}
		cout << sum << "\n";
	}
	//system("pause");
	return 0;

}