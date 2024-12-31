#include <iostream>
#include <vector>
using namespace std;

double average(vector <double> grades)
{
	auto sum = 0.0;
	auto size = grades.size();
	
	for(auto i = 0u; i < size; ++i){
		sum += grades[i];
		
	}
	
	return sum/size;
}

int main()
{
	auto grades = vector <double> {8.5, 10.0, 9.0, 6.0};
	cout << "sua média em sociologia é " << average(grades) << "\n";

}
