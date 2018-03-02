#includeiostream
#includestring
#includecmath
#includealgorithm
using namespace std;
int main(){
	string s;
	int n=0;
	cin  s;
	for (int i = 0; i  s.length(); i++){
		for (int j = 0; j  i; j++){
			if (s[i] == s[j]){
				n++;
				j = i;
			}
		}
	}
	if ((s.length() - n )% 2 == 0)
		cout  CHAT WITH HER!;
	else
		cout  IGNORE HIM!;
	return 0;

}