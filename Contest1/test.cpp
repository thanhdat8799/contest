#include <bits/stdc++.h>

using namespace std;

int main(){
	int times;
	cin >> times;
	while(times--){
	int stt;
	cin >> stt;
	char str[1000000];
	cin >> str;
	if(next_permutation(str, str +strlen(str)))
		cout << str << endl;
	else cout << "BIGGEST" << endl;
    }
	
	return 0;
}
