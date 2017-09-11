#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    int t, determiner, num_length;
    string number, new_number;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> number;
        num_length = number.length();
        if(number == "0"){
        	cout << 1 << endl;
        }
        else if(number == "1"){
        	cout << 66 << endl;
        }
        else{
	        if(num_length > 1){
	            new_number = number[num_length - 2];
	            new_number += number[num_length - 1];
	        }
	        else{
	            new_number = number[num_length - 1];
	        }
	        istringstream buffer(new_number);
	        buffer >> determiner;
	        determiner %= 10;
            if(determiner == 0 || determiner == 5){
                cout << 76 << endl;
            }
            else if(determiner == 1 || determiner == 6){
                cout << 16 << endl;
            }
            else if(determiner == 2 || determiner == 7){
                cout << 56 << endl;
            }
            else if(determiner == 3 || determiner == 8){
                cout << 96 << endl;
            }
            else{
                cout << 36 << endl;
            }
        }
    }
}
