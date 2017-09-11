#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool master_bool = false;
int total_rows, total_cols, total_blanks, aux_count;
vector<char> vec_row;
vector< vector<char> > board;

void create_board(int total_rows, int total_cols){
	string str_row;
	for(int j = 0; j < total_rows; j++){
		cin >> str_row;
		vec_row.clear();
		for(int n = 0; n < total_cols; n++){
			if(str_row[n] == '0'){
				vec_row.push_back('B');
			}
			else if(str_row[n] == '1'){
				vec_row.push_back('N');
			}
		}
		board.push_back(vec_row);
	}
}

void recorrido_rec(int row, int col){
	if(row == 0 || col == 0 || row == total_rows - 1 || col == total_cols - 1){
		master_bool = true;
		total_blanks += aux_count;
		aux_count = 0;
	}
	if(row < total_rows - 1){
		if(board[row + 1][col] == 'B'){
			board[row][col] = 'G';
			recorrido_rec(row + 1, col);
		}
	}
	if(col < total_cols - 1){
		if(board[row][col + 1] == 'B'){
			board[row][col] = 'G';
			recorrido_rec(row, col + 1);
		}		
	}
	if(row > 0){
		if(board[row - 1][col] == 'B'){
			board[row][col] = 'G';
			recorrido_rec(row - 1, col);
		}
	}
	if(col > 0){
		if(board[row][col - 1] == 'B'){
			board[row][col] = 'G';
			recorrido_rec(row, col - 1);
		}
	}
	if(master_bool){
		board[row][col] = 'N';
		total_blanks++;
	}
	if(!master_bool){
		board[row][col] = 'N';
		aux_count++;
	}
}

int main(){
	int t;
	cin >> t;
	for(int i = 0; i < t; i++){
		board.clear();
		total_blanks = 0;
		cin >> total_rows >> total_cols;
		create_board(total_rows, total_cols);
		for(int r = 0; r < total_rows; r++){
			for(int c = 0; c < total_cols; c++){
				if(board[r][c] == 'B'){
					master_bool = false;
					aux_count = 0;
					recorrido_rec(r, c);
				}
			}
		}
		cout << total_blanks << endl;
	}
}