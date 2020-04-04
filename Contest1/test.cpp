#include <bits/stdc++.h> 

using namespace std;

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

void nextBinary(int arr[], int n, bool ok){
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
	bool ok = true;
	while(times--){
		int n, k;
		cin >> n >> k;
		int arr[n];
		init(arr, n);
		while(ok){
			if(check(arr, n, k)){
				print(arr, n);
			}
			nextBinary(arr, n, ok);
		}
	}
	
	return 0;
}
