#include <bits/stdc++.h>

using namespace std;

void init(int arr[], int n){
	for(int i = 1; i<=n; i++){
		arr[i-1] = i;
	}
}

int print_next_permutation(int arr[] , int n){
	do{
		for(int i = 0; i < n; i++){
			cout << arr[i];
		}
		cout << " ";
	}
	while(next_permutation(arr, arr + n));
	
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
		print_next_permutation(arr, n);		
	}
	
	return 0;
}
