#include <bits/stdc++.h>

using namespace std;

int main(){
	int times;
	cin >> times;
	while(times--){
	int n;
	cin>> n;
	if(n<= 0) return 0; //base case
	vector<string> arr;
	arr.push_back("0");
	arr.push_back("1");
	for(int i = 2; i < pow(2, n); i *= 2){
		for(int j = i-1; j >= 0; j--){ //double the arr by reverse direction
			arr.push_back(arr[j]);
		}
		
		for(int j = i*2-1; j >= i; j--){ // append 1 to the half left
			arr[j] = "1" + arr[j]; 
		}
		
		for(int j = i - 1; j >=0; j--){ // append 0 to the half right
			arr[j] = "0" + arr[j];
		}
	}
	
	for(int i = 0; i <= arr.size() - 1; i++){
		cout << arr[i] << " ";
	}	
	
	cout << endl;
	}
	
	return 0;
}
