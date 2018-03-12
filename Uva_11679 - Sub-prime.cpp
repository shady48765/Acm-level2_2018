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
	int arr[200], n, m, x, y, z;
	while (true){
	cin >> n >> m;
	if (n == 0 && m == 0)
	{
		system("pause");
		return 0;
	}
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	while (m--){
		cin >> x >> y >> z;
			arr[x - 1] -= z;
			arr[y - 1] += z;
	}
	int c = 0;
	for (int i = 0; i < n;i++)
	if (arr[i] >= 0)
		c++;
	if (c == n)
		cout << "S\n";
	else
		cout << "N\n";
}

	//system("pause");
	return 0;

}