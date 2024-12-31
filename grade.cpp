#include <iostream>
using namespace std;

int main()
{
	float grade;
	cout << "insert the grade: ";
	cin >> grade;

	if(grade < 5.75){
		cout << "very sorry, not this time.\n";
	}

	else if(grade <= 7.0){
		cout << "it´s ok.\n";
	}

	else{
		cout << "well done, congrats.\n";
	}
}

