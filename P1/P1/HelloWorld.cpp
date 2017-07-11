#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>

using namespace std;

int main() {
	cout << "Hello World!"<<endl<<endl;

	string NameArray[10] = { "John", "James", "Joe", "Joseph",
		"Johanson", "Joey", "Jay", "June", "Jarret", "Jag" };
	cout << "Before the name being random\n";
	for (int i = 0; i <= 9; i++){
		cout << NameArray[i] << endl;
	}
	cout << endl;
	cout << "After the randomizing\n";
	srand(time(0));
	
	for (int j = 0;j <= 9; j++) {
		string Random;
		Random = NameArray[rand() % 10];
		cout << Random << endl;
		NameArray[j] = Random;
	}
	cin.get();
	return 0;

}