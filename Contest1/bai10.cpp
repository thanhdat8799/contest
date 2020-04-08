#include <bits/stdc++.h>

using namespace std;

char xor_c(char c1, char c2){
	return (c1 == c2) ? '0' : '1';
}

int main(){
	int times;
	cin >> times;
	while(times--){
		//binary to gray
		string binary, gray = "";
		cin >> binary;
		 gray += binary[0]; 
  
    // Compute remaining bits, next bit is comuted by 
    // doing XOR of previous and current in Binary 
    for (int i = 1; i < binary.length(); i++) { 
        // Concatenate XOR of previous bit 
        // with current bit 
        gray += xor_c(binary[i - 1], binary[i]); 
    } 
  	cout << gray << endl;
	}
}
