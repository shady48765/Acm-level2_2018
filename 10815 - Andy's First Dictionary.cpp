#include<iostream>
#include <stdio.h>
#include<cmath>
#include<string>
#include <algorithm>
#include<math.h>
#include<map>
#include<set>
using namespace std;
int main(){
	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	set<string>st;
	string s,n;
	while (cin >> s){
		n="";
		int x = s.length();
		for (int i = 0; i < x; i++){
			if (s[i] <= 'Z'&&s[i] >= 'A'){
				n += (s[i] + 32);
			}
			else
			if (s[i] >= 'a'&&s[i] <= 'z'){
				n += s[i];
			}
			else
			{
				st.insert(n);
				n = "";
			}
		}
		st.insert(n);
	}
	set<string>::iterator it;
	for (it = st.begin(); it != st.end(); it++){
		if (*it != "")
		cout << *it << "\n";
	}
	//system("pause");
	return 0;

}