#include <iostream>
using namespace std;

int main (){

	char ch [10];

	int i = 0;
	for (i=0; i<10; i++){
		cin >> ch [i];
	}

	int check = 1;
	if ((ch[0] != 'a') && (ch[0] !='i') && (ch[0] != 'u') && (ch[0] != 'e') && (ch[0] != 'o')){
		for (i=1; i<10; i++){
			if ((i%2==1) && (ch [i] == 'a' || 'i' || 'u' || 'e'|| 'o')){
				check++;
			}
			if ((i%2==0) && ((ch[i] != 'a') && (ch[i] !='i') && (ch[i] != 'u') && (ch[i] != 'e') && (ch[i] != 'o'))){
				check++;
			}
		}
	}

	else {
		for (i=1; i<10; i++){
			if ((i%2==0) && (ch [i] == 'a' || 'i' || 'u' || 'e'|| 'o')){
				check++;
			}
			if ((i%2==1) && ((ch[i] != 'a') && (ch[i] !='i') && (ch[i] != 'u') && (ch[i] != 'e') && (ch[i] != 'o'))){
				check++;
			}
		}
	}

	if (check == 10)
		cout << "valid\n";
	else
		cout << "tidak valid\n";

	return 0;
}