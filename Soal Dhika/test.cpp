#include <iostream>
using namespace std;

int main (){

	int B [3];
	int K [3];

	for (int i=0; i<3; i++){
		cin >> B [i];
	}

	for (int i=0; i<3; i++){
		cin >> K [i];
	}

	int check = 0;
	for (int i=0; i<3; i++){
		for (int j=0; j<3; j++){
			if (B [j] % K [i] == 0){
				check++;
			}
		}
		if(check>1)
			break;
		else
			check=0;
	}

	if(check>1)
		cout << "valid!\n";
	else
		cout << "tidak valid\n";

	return 0;
}