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
template<class t>
struct dragon{
	t streng;
	t point;
};
void Sort(dragon<int> arr[100000],int n){
	for (int i = 0; i < n;i++)
	for (int j = i + 1; j < n;j++)
	if (arr[i].streng>arr[j].streng)
	{
		swap(arr[i].streng , arr[j].streng);
		swap(arr[i].point , arr[j].point);
	}
}
int main(){
	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(0);
	dragon<int> arr[100000];
	int s, n,x,y;
	long long sum = 0;
	cin >> s>>n;
	sum += s;
	for(int i=0;i<n;i++){
		cin >> x >> y;
		arr[i].streng = x;
		arr[i].point = y;
	}
	//sort(arr.begin()., arr + n);
	Sort(arr, n);
	int i;
	for ( i = 0; i < n; i++){
		if (sum>arr[i].streng){
			sum += arr[i].point;
		}
		else
			break;
	}
	if (i == n)
		cout << "YES\n";
	else
		cout << "NO\n";
	//system("pause");
	return 0;

}