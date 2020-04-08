#include <bits/stdc++.h>

using namespace std;

char flip(char c){
	return (c == '0') ? '1' : '0';
}

int main(){
	int times;
	cin >>times;
	while(times--){
		//gray to binary
		string gray, binary = "";
		cin >> gray;
		binary += gray[0];
		for(int i = 1; i < gray.length(); i++){
			if(gray[i] == '0'){
				binary+= binary[i-1];
			}
			else {
				binary += flip(binary[i-1]);
			}
		}
		cout << binary << endl;
	}
	
	
	return 0;
}
