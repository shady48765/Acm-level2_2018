#include<iostream>
#include<cmath>
#include<string>
#include <algorithm>
#include<math.h>
#include<iomanip>
#include<map>
#include<set>
using namespace std;
bool result(long long x,int k,long long n){
	int i = 1;
	long long r = x;
	long long sum = 0;
	while (r>0 && sum<n){
		sum += r;
		r = x / (pow(k, i));
		//cout << sum << " ";
		i++;
	}
	if (sum >= n){
		//cout << x << " : " << sum << endl;
		return true;
	}
	else{
		//cout << x << " : " << sum << endl;
		return false;
	}
}

int main(){
	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	long long n,l,r,mid,ind;
	int k;
	cin >> n >> k;
	l = 0, r = n;
	
	while (l <= r){
		mid = (l + r) / 2;
		if (result(mid, k, n))
		{
			//cout << "hello";
			r = mid - 1;
			ind = mid;
		}
		else
			l = mid + 1;
	}
	cout << ind << endl;
	//system("pause");
	return 0;

}