#include <iostream>
#include <vector>

using namespace std;

int main(){
	long int num, aux_num, tamaño, posicion, m;
	vector<bool> starts_delete;
	cin >> num;
	while(num != 0){
		aux_num = num;
		starts_delete.clear();
		starts_delete.push_back(false);
		tamaño = 2;
		while(aux_num != 1){
			if(aux_num % 2 == 0){
				starts_delete.push_back(starts_delete.back());
				aux_num /= 2;
			}
			else{
				if(starts_delete.back() == false){
					aux_num = aux_num / 2 + 1;
				}
				else{
					aux_num /= 2;
				}
				starts_delete.push_back(!starts_delete.back());
			}
		}
		starts_delete.pop_back();
		while(tamaño < num){
			tamaño *= 2;
		}
		posicion = 1;
		while(!starts_delete.empty()){
			m = tamaño / 2;
			if(starts_delete.back() == true){
				posicion += m;
				tamaño /= 2;
				//m = tamaño / 2;
			}
			else{
				tamaño /= 2;
			}
		}
	}
}