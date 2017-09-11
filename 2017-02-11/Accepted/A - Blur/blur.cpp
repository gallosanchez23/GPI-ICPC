#include <iostream>
#include <map>

using namespace std;

int main(){
  int w, h, n;
  cin >> w >> h >> n;
  double board[h][w], aux_board[h][w];
  for(int x = 0; x < h; x++){
    for(int y = 0; y < w; y++){
      cin >> board[x][y];
    }
  }
  for(int x = 0; x < n; x++){
    for(int x = 0; x < h; x++){
      for(int y = 0; y < w; y++){
        aux_board[x][y] = 0;
      }
    }
    for(int x = 0; x < h; x++){
      for(int y = 0; y < w; y++){
        if(x > 0 && x < h-1 && y > 0 && y < w-1){
          aux_board[x][y] = (board[x-1][y-1] + board[x-1][y] + board[x-1][y+1] + board[x][y-1] + board[x][y] + board[x][y+1] + board[x+1][y-1] + board[x+1][y] + board[x+1][y+1]);
        }
        else if(x == 0){
          if(y == 0){
            aux_board[x][y] = (board[h-1][w-1] + board[h-1][y] + board[h-1][y+1] + board[x][w-1] + board[x][y] + board[x][y+1] + board[x+1][w-1] + board[x+1][y] + board[x+1][y+1]);
          }
          else if(y == w-1){
            aux_board[x][y] = (board[h-1][y-1] + board[h-1][y] + board[h-1][0] + board[x][y-1] + board[x][y] + board[x][0] + board[x+1][y-1] + board[x+1][y] + board[x+1][0]);
          }
          else{
            aux_board[x][y] = (board[h-1][y-1] + board[h-1][y] + board[h-1][y+1] + board[x][y-1] + board[x][y] + board[x][y+1] + board[x+1][y-1] + board[x+1][y] + board[x+1][y+1]);
          }
        }
        else if(x == h-1){
          if(y == 0){
            aux_board[x][y] = (board[x-1][w-1] + board[x-1][y] + board[x-1][y+1] + board[x][w-1] + board[x][y] + board[x][y+1] + board[0][w-1] + board[0][y] + board[0][y+1]);
          }
          else if(y == w-1){
            aux_board[x][y] = (board[x-1][y-1] + board[x-1][y] + board[x-1][0] + board[x][y-1] + board[x][y] + board[x][0] + board[0][y-1] + board[0][y] + board[0][0]);
          }
          else{
            aux_board[x][y] = (board[x-1][y-1] + board[x-1][y] + board[x-1][y+1] + board[x][y-1] + board[x][y] + board[x][y+1] + board[0][y-1] + board[0][y] + board[0][y+1]);
          }
        }
        else if(y == 0){
          aux_board[x][y] = (board[x-1][w-1] + board[x-1][y] + board[x-1][y+1] + board[x][w-1] + board[x][y] + board[x][y+1] + board[x+1][w-1] + board[x+1][y] + board[x+1][y+1]);
        }
        else{
          aux_board[x][y] = (board[x-1][y-1] + board[x-1][y] + board[x-1][0] + board[x][y-1] + board[x][y] + board[x][0] + board[x+1][y-1] + board[x+1][y] + board[x+1][0]);
        }
      }
    }
    for(int x = 0; x < h; x++){
      for(int y = 0; y < w; y++){
        board[x][y] = aux_board[x][y];
      }
    }
  }
  map< double, bool > numbers;
  for(int x = 0; x < h; x++){
    for(int y = 0; y < w; y++){
      numbers[board[x][y]] = true;
    }
  }
  cout << numbers.size() << endl;
}