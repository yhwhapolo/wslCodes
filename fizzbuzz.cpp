#include <iostream>
using namespace std;

int main()
{
	for(int i = 0; i <= 100; i++){
		if(i % 3 == 0 && i % 5 == 0){
			cout << "fizzbuzz\n";
		}

		else if(i % 3 == 0){
			cout << "fizz\n";
		}

		else if(i % 5 == 0){
			cout << "buzz\n";
		}

		else{
			cout << i << "\n";
		}
	}
}
