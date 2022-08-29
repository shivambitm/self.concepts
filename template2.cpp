/*/ Author: indian_shivam /*/
//Date: 28/11/2021
//Time: 15:35:15
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int str = 0;
	string str; cin >> str;
	for (int i = 0; i < str.size(); ++i) {
		if (str[i] == 'P') continue;
		else if (str[i] == 'A') abs++;
		else if (str[i] == 'L') {
			if (str[i + 1] == 'L') {
				if (str[i + 2] == 'L') {
					abs = 3;
					break;
				}
				else continue;
			}
		}
	}
	if (abs > 2) cout << "true" << endl;
	else cout << "false" << endl;
	return 0;
}