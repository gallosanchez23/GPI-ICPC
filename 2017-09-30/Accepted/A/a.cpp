#include <iostream>
#include <map>

using namespace std;

int main(){
	map<string, int> notes_position;
	string notes[12] = {"SI", "LA#", "LA", "SOL#", "SOL", "FA#", "FA", "MI", "RE#", "RE", "DO#", "DO"};
	notes_position["DO"] = 11;
	notes_position["DO#"] = 10;
	notes_position["RE"] = 9;
	notes_position["RE#"] = 8;
	notes_position["MI"] = 7;
	notes_position["FA"] = 6;
	notes_position["FA#"] = 5;
	notes_position["SOL"] = 4;
	notes_position["SOL#"] = 3;
	notes_position["LA"] = 2;
	notes_position["LA#"] = 1;
	notes_position["SI"] = 0;
	string note;
	int n;
	cin >> n >> note;
	cout << (notes[((n + notes_position[note]) % 12)]) << endl;
}