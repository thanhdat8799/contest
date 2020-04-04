#include <bits/stdc++.h> 

using namespace std;

bool ok = true;

bool check(int arr[], int n, int k){
	int count = 0;
	for(int i = 0; i < n; i++){
		if(arr[i] == 1){
			count++;
		}
	}
	return count == k;
}

void init(int arr[], int n){
	for(int i = 0; i < n; i++){
		arr[i] = 0;
	}
}

void nextBinary(int arr[], int n){
	int i;
	for(i = n-1 ; i >=0; i--){
		if(arr[i] == 1) 
			arr[i] = 0;
		else{
			arr[i] = 1;
			break;
		}
	}
	//cout <<  "i value: " << i<< endl;
	if(i==-1){
		ok = false;
	}
}

void print(int arr[], int n){
	for(int i = 0; i < n; i++){
		cout <<	arr[i];
	}
	cout << endl;
}

int main(){
	int times;
	cin >> times;
	while(times--){
		int n = 0, k = 0;
		cin >> n >> k;
		int arr[n];
		init(arr, n);
		ok = true;
		while(ok){
			if(check(arr, n, k)){
				print(arr, n);
			}
			nextBinary(arr, n);
		}
	}
	
	return 0;
}
