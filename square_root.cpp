#include <iostream>
#include <cmath>
using namespace std;

// vamos criar uma função que calcula raíz quadrada utilizando média aritmética (tipo tentativa e erro) e vamos utilizar a função da lib cmath

double square_root(double x)
{
	double old = 0.0;
	double guess = 1.0;

	while(guess != old){
		old = guess;
		guess = (guess + x/guess)/2;
		
	}

	return guess;
}

int main()
{
	double num;
	cout << "Provide a number to extract its sqrt: ";
	cin >> num;

	cout << "by arithmetic mean: " << square_root(num) << "\n";
	cout << "by the function sqrt: " << sqrt(num) << "\n";
}
