#include <bits/stdc++.h>

using namespace std;

int main(){
	int times;
	cin >> times;
	while(times--){
	int stt;
	cin >> stt;
	string str;
	cin >> str;
	
	if( next_permutation(str.begin(), str.end()) ){
		cout << stt << " " << str << endl;
	}
	else cout << stt << "  << "BIGGEST" << endl;
    }
	
	return 0;
}
