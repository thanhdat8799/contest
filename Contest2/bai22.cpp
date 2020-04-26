#include <bits/stdc++.h>
using namespace std;

//variables
int times;
int mazeSize = 1;
int maze[8][8];
vector<string> res;
bool noRes = true;

//functions
void init(){ //khoi tao me cung khong co duong di va bien noRes = true
  noRes = true;
  for(int i = 0; i < 10; i++){
    for(int j = 0; j < 10; j++){
      maze[i][j] = 0;
    }
  }
  res.clear();
}

void setup(){ // cho nguoi dung nhap so lieu
    cin >> mazeSize;
    for(int i = 0; i < mazeSize; i++){
    for(int j = 0; j < mazeSize; j++){
      cin >> maze[i][j];
    }
  }
}

void solution(int row, int col, string oneRes){
  if(maze[0][0] == 0 || maze[mazeSize -1][mazeSize-1] == 0) return;

  if(row == mazeSize -1 && col == mazeSize -1){
    res.push_back(oneRes);
    noRes = false;
    return;
  }
  if(maze[row][col+1] == 1) //go RIGHT
    solution(row, col+1, oneRes+"R");
  
  if(maze[row+1][col] == 1) //go DOWN    
    solution(row+1, col, oneRes+"D");
  
}


int main() {
  cin >> times;
  while(times--){
    init();
    setup();
    solution(0, 0, "");
    if(noRes){
      cout << "-1";
    }
    else{
      sort(res.begin(), res.end());
      for(int i = 0; i < res.size(); i++){
        cout << res[i] << " ";
      }
      cout << endl;
    }
  }
  return 0;
}
