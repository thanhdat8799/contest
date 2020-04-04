#include <bits/stdc++.h>

using namespace std;

int helper(vector<int> vec, int money){ //greedy algorithm
	int count = 0;
	for(int i = vec.size() - 1; i >= 0; i--){//duyet tu phan tu lon nhat den be dan
		if(money >=  vec[i]){ 
			count += money / vec[i];
			money %= vec[i];
		}
	}
	
	return count;
}

int main(){
	int n,s;
	cin >> n >> s;
	vector<int> vec;
	
	for(int i = 0; i < n; i++){
		int temp;
		cin >> temp;
		vec.push_back(temp);
	}
	sort(vec.begin(), vec.end());  //sap xep mang tang dan
	
	cout << helper(vec, s);
	
	return 0;
}
