#include <iostream>
using namespace std;

int main() {
	
	for(int x = 1; x < 101; x++){
		if (x%3 == 0){
			cout << "fizz";
		}
		if (x%5 == 0){
			cout << "buzz";
		}
		if (x%3 != 0 && x%5 != 0){
			cout << x;
		}
		cout << endl;
	}
}