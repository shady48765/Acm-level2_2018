#include<iostream>
#include <stdio.h>
#include<cmath>
#include<string>
#include <algorithm>
#include<math.h>
#include<map>
#include<set>
#include<vector>
#include<stack>
#include<queue>
//#include <bits/stdc++.h>
using namespace std;

int main(){
	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(0);
	string s1, s2;
	while (cin >> s1 >> s2){
		int x1 = s1.length(), x2 = s2.length();
		if (x1 > x2)
			cout << "No\n";
		else
		{
			int i = 0, j = 0;
			while (i < x1&&j < x2){
				if (s1[i] == s2[j])
				{
					i++; j++;
				}
				else{
					j++;
				}
			}
			if (i == x1)
				cout << "Yes\n";
			else
				cout << "No\n";
		}
	}
	//system("pause");
	return 0;

}