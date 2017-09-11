#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<int> heights;
vector<int> poles;
int max_value;

void create_heights_vector(string all_heights){
	string single_height;
	int int_value;
	for(int i = 0; i < all_heights.length(); i++){
		if(i + 1 == all_heights.length()){
			single_height += all_heights[i];
			stringstream ss(single_height);
			ss >> int_value;
			heights.push_back(int_value);
			single_height = "";
		}
		else if(all_heights[i] != ' '){
			single_height += all_heights[i];
		}
		else{
			stringstream ss(single_height);
			ss >> int_value;
			heights.push_back(int_value);
			single_height = "";
		}
	}
}

int main(){
	int t, sum;
	string all_heights;
	cin >> t;
	cin.ignore();
	for(int i = 0; i < t; i++){
		getline(cin, all_heights);
		create_heights_vector(all_heights);
		max_value = -1;
		for(int it = 0; it < heights.size(); it++){
			if(heights[it] == max_value){
				poles.push_back(it);
			}
			else if(heights[it] > max_value){
				max_value = heights[it];
				poles.clear();
				poles.push_back(it);
			}
			else{
			}
		}
		sum = 0;
		for(int it = 0; it < poles.size(); it++){
			if(it % 2 == 0){
				sum += poles[it];
			}
			else{
				sum = sum - poles[it] - 1;
			}
		}
		if(poles.size() % 2 == 1){
			sum = sum - heights.size();
		}
		sum = - sum;
		cout << sum << endl;
		heights.clear();
	}
}