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
	int n, arr[100] = { 0 }, arr1[100];
	while (cin >> n&&n){
		for (int i = 0; i < n; i++){
			arr[i] = i + 1;
		}
		int size = n, size2 = 0; bool b = 0, start = 0;
		cout << "Discarded cards:";
		while (true){
			if (size <= 1){
				cout << "\nRemaining card: " << arr[0] << "\n";
				break;
			}
			//b = 0;
			size2 = 0;
			for (int i = 0; i < size; i++){
				if (!b){
					if (i == 0 && !start){
						cout << " " << arr[i];
						start = 1;
						b = 1;
					}
					else{
						cout << ", " << arr[i];
						b = 1;
					}
				}
				else{
			        {
						arr1[size2] = arr[i];
						size2++;
						b = 0;
					}
				}
			}
			size = 0;
			if (size2 <= 1){
				cout << "\nRemaining card: " << arr1[0] << "\n";
				break;
			}
			else{
				for (int i = 0; i < size2; i++){
					if (!b){
						cout << ", " << arr1[i];
						b = 1;
					}
					else{
							arr[size] = arr1[i];
							size++;
							b = 0;
						}
					}
				}
			}
		}
	//system("pause");
	return 0;

}