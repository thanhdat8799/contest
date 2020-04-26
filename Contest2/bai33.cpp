#include <bits/stdc++.h>

using namespace std;

int n=10, dem = 0;
bool cot[10], xuoi[20], nguoc[20];

void init(){
	for(int i = 1; i <=n; i++){
		cot[i] = true;
	}
	
	for(int i = 1; i <=20; i++){
		xuoi[i] = true;
		nguoc[i] = true;
	}
}

void solution(int i){
	for(int j = 1; j <= n; j++){
		if(cot[j] && xuoi[i-j+n] && nguoc[i+j-1]){
			cot[j] = false;
			xuoi[i-j+n] = false;
			nguoc[i+j-1] = false;
			if(i == n){
				dem++;
			}
			else solution(i+1);
			cot[j] = true;
			xuoi[i-j+n] = true;
			nguoc[i+j-1] = true;
		}
	}
}

int main(){
	int times;
	cin >> times;
	while(times--){
		cin >> n;
		init();
		solution(1);
		cout << dem;
	}
	
	return 0;
}
