#include <iostream>
using namespace std;

int main(){
	int n;
	float sum = 0;
	float average;
	
	cout << "How many grades: ";
	cin >> n;
	
	int grades[n];
	cout << "Enter grades: " << endl;
	for(int i = 0; i < n; i++){
		cin >> grades[i];
		sum += grades[i]; 
		average = sum / n;
	}
	cout << "Sum: " << sum << endl;
	cout << "Average: " << average << endl;
	cout << "Mean: " << average << endl;
	
	int min = grades[0];
	int max = grades[0];
	
	for(int j = 1; j < n; j++){
		if(grades[j] < min){
			min = grades[j];
		}else if(grades[j] > max){
			max = grades[j];
		}
	}
	cout << "Minimum: " << min << endl;
	cout << "Maximum: " << max;
	
	return 0;
}
