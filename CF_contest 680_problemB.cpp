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
	int n, m,c=0;
	int arr[1000];
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	int i = m-1,j=m-1;
	i--; j++;
	while (i >= 0 || j < n){//0 0 0 1 0
		if ((arr[i]==1 && j>=n) || (arr[j]==1 && i<0))
			c++;
		else
		if (arr[i]==1 && arr[j]==1 && i >= 0 && j < n)
			c+=2;
		i--; j++;
	}
	if (arr[m - 1]==1)
		c++;
	cout << c << endl;
	//system("pause");
	return 0;

}