#include <bits/stdc++.h>

using namespace std;

void print_next_permutation(int arr[], int n){ //parameters are the array to find next permutation and the number of its elements
	if( next_permutation(arr, arr + n) ){ //arguments are the first and the last index of the array
		for(int i = 0; i < n; i++){
			cout << arr[i] << " ";
		}
		cout << endl;
	}
	else{
		for(int i = 0; i < n; i++){ //kho hieu vai lin
			cout << arr[i] << " ";
		}
		cout << endl;
	}
}

int main(){
	int times;
	cin >> times;
	
	while(times--){
		int n; //length of array
		cin >> n;
	
		int arr[n]; //input array
		for(int i = 0; i <n; i++){
			cin >> arr[i];
		}
		print_next_permutation(arr, n);
	}
	
	return 0;
}
