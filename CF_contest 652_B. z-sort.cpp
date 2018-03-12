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
	cin.tie(NULL); cout.tie(0);
	int n;
	int a[10000];
	cin >> n;
	for (int i = 0; i<n; i++)
		cin >> a[i];
	sort(a, a + n);
	for (int i = 0; i<n - 1; i++)
	if (i % 2 != 0)
		swap(a[i + 1], a[i]);
	for (int i = 0; i<n; i++)
		cout << a[i] << " ";
	//system("pause");
	return 0;

}