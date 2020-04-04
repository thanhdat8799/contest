#include <bits/stdc++.h>

using namespace std;

int main(){
	int times;
	cin >> times;
	
	while(times--){
		int n;
		cin >>n;
		queue<long long> q;
		q.push(9);
		
		while(!q.empty()){
			long long front = q.front();
			q.pop();
			
			if(front % n == 0){
				cout << front << endl;
				break;
			}
			else{
				q.push(front * 10);
				q.push(front * 10 + 9);
			}
		}
	}
	
	return 0;
}
