#include <iostream>

using namespace std;

int main(){
	char name[50];
	char vowel[50];
	char consonant[50];
	int countVowel = 0;
	int countConsonant = 0;
	
	cout << "Enter your full name: ";
	cin.getline(name, 50);
	for(int i = 0; name[i] != '\0'; i++){
		if(name[i] == 'a' || name[i] == 'A' || name[i] == 'e' || name[i] == 'E' ||
		   name[i] == 'i' || name[i] == 'I' || name[i] == 'o' || name[i] == 'O' ||
		   name[i] == 'u' || name[i] == 'U'){
		   
		   vowel[countVowel] = name[i];
		   countVowel++;
		}else if(name[i] != ' '){
			consonant[countConsonant] = name[i];
			countConsonant++;
		}
	}
	
	cout << "Vowel: ";
	for(int j = 0; j < countVowel; j++){
		cout << vowel[j] << " ";
	}
	cout << endl;
	
	cout << "Consonant: ";
	for(int k = 0; k < countConsonant; k++){
		cout << consonant[k] << " ";
	}
//	cout << endl;
	
	return 0;
}
