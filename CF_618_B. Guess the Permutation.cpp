#include<iostream>
#include <stdio.h>
#include<cmath>
#include<string>
#include <algorithm>
#include<math.h>
#include<map>
#include<set>
#include<vector>
using namespace std;
int main(){
	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(0);
	int n, x;
	vector<int> v;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> x;
			int k;
			for (k = 0; k < v.size(); k++)
			if (v[k] == x)
				break;
			if (k == v.size())
				v.push_back(x);
		}
		if (v.size() == n)
		{
			for (int j = 0; j < v.size(); j++)
			{
				if (v[j] != 0)
					cout << v[j] << " ";
				else
					cout << n << " ";
			}
			return 0;
		}
		else
			v.clear();
	}
	//system("pause");
	return 0;

}