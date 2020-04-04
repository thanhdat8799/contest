#include <bits/stdc++.h>

using namespace std;

char check(char binary[]){
	for(int i = strlen(binary) - 1; i >= 0; i--){
		if(binary[i] == '1') 
			binary[i] = '0';
		else{
			binary[i] = '1';	
			break;
		}
	}
	cout << binary << endl;
}

int main(){
	int times;
	cin >>times;
	
	while(times--){
		char binary[1001];
		cin >> binary;
		check(binary);
	}
	
	return 0;
}
