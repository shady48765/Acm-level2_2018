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
	int n, arr[105][105], c1 = 0, c2 = 0, row, col;
	while (true){
		c1 = 0; c2 = 0;
		cin >> n;
		if (n == 0)
			break;
		else{
			for (int i = 0; i < n; i++){
				for (int j = 0; j < n; j++){
					cin >> arr[i][j];
				}
			}
			int sum = 0;
			for (int i = 0; i < n; i++){
				sum = 0;
				for (int j = 0; j < n; j++){
					sum += arr[i][j];
				}
				if (sum % 2 != 0){
					c1++;
					row = i;
				}
			}
			
			for (int i = 0; i < n; i++){
				int sum = 0;
				for (int j = 0; j < n; j++){
					sum += arr[j][i];
				}
				if (sum % 2 != 0){
					c2++;
					col = i;
				}
			}
			if (c1 + c2 == 0)
			{
				cout << "OK\n" ;
			}
			else if (c1 > 1 || c2 > 1)
				cout << "Corrupt\n";
			else
			if (c1==c2&&c1==1)
				cout << "Change bit ("<< row+1 << ','<< col+1 <<")\n";
		
		}
	
	}
	system("pause");
	return 0;

}