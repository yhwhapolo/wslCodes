// started 13/11/24 at 9 PM
#include <iostream>
#include <string>
#include <stack>
using namespace std;

// vou tentar fazer uma função que faz as conversões
int convertion(int num, char base){
	stack <int> restos;

	switch(base){

		case 2:
			while(num >= base){
				restos.push(num % base);
			}
			break;
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 11:
		case 12:
		default:
			cout << "Please, select a valid option\n";
			break;
	}
	return 0;
}

int main(){

	int num = 0;
	char base = 0;
	
	cout << "Provide a integer to switch its base: ";
	while(!(cin >> num)){
		cout << "Invalid input. Please enter an integer: ";
		cin.clear();
		cin.ignore(1000, "\n");
	}

	cout << "[2] base 2 \t [7] base 7 \n";
	cout << "[3] base 3 \t [8] base 8 \n";
	cout << "[4] base 4 \t [9] base 9 \n";
	cout << "[5] base 5 \t [11] base 11 \n";
	cout << "[6] base 6 \t [12] base 12 \n\n";
 	cout << "Choose a base to convert it: ";
	cin >> base;

	//cout << "The number " << num << " in the base " << base << "equals " << convertion(num, base)"\n";

	return 0;
}

// pede um número na base 10 ao user (apenas inteiros porque mexer com números quebrados é mais trabalhoso)
// pede, por meio de um menu, a que base o user quer converte-lo
// pega o número dado e divide-o sucessivas vezes pela base para qual se quer convertê-lo armazenando o resto de cada divisão

// faz isso até que o quociente da divisão seja menor que o divisor(base)
// o número convertido é formado pelo último quociente obtido seguido dos restos na ordem inversa em que foram obtidos
