#include <bits/stdc++.h>
using namespace std;

//var
string s;
bool mark[100];
int a[100];

//func
void solve(int i){
	for(int j = 0; j < s.size(); j++){
		//duyet xau s de tim vi tri ky tu se in ra
		if(!mark[j]){
			a[i] = j;
			mark[j] = true; //da xet
			
			if(i == s.size() - 1){
				for(int k = 0; k < s.size(); k++){
					cout << s[a[k]];
				}
				cout << " ";
			}
			else solve(i+1);
			mark[j] = false; // chua xet
		}
			
	}
}


int main(){
	int t;
	cin >> t;
	while(t--){
		cin>>s;
		memset(mark, false, sizeof(mark));
		sort(s.begin(), s.end());
		solve(0);
		cout << endl;
	}
	return 0;
}
