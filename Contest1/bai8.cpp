#include <bits/stdc++.h>

using namespace std;

void init(int arr[], int n){
	for(int i = 0; i < n; i++){
		arr[i] = n - i;
	}
}

int print_prev_permutation(int arr[] , int n){
	do{
		for(int i = 0; i < n; i++){
			cout << arr[i];
		}
		cout << " ";
	}
	while(prev_permutation(arr, arr + n));
	
	cout << endl;
}

int main(){
	int times;
	cin >> times;
	while(times--){
		int n;
		cin >> n;
		int arr[n];
		init(arr, n);
		print_prev_permutation(arr, n);		
	}
	
	return 0;
}
