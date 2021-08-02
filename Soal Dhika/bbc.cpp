#include <iostream>
using namespace std;

void star();
void space();

int main(){

	int n;
	cin >> n;

	int row, column;
	//1
	for(row=0; row<n*2; row++){
		for(column=0; column<=row; column++){
			star();
		}
		for(int i=0; i<2; i++){
			for(column=row; column<n*2-1; column++){
				space();
			}
		}
		for(column=0; column<=row; column++){
			star();
		}
		for(column=1; column<=row; column++){
			star();
		}
		for(int i=0; i<2; i++){
			for(column=row; column<n*2-1; column++){
				space();
			}
		}
		for(column=0; column<=row; column++){
			star();
		}
		cout <<endl;
	}

	//2
	for(row=0; row<n; row++){
		for(column=0; column<=n*2; column++)
			space();
		for(column=0; column<n*3+(n-3); column++)
			star();

		cout <<endl;
	}

	//3
	for(row=0; row<n; row++){
		for(column=0; column<=n*4+(n-3); column++)
			space();
		for(column=0; column<row; column++)
			space();
		for(column=row; column<n; column++)
			star();

		cout <<endl;
	}

	return 0;
}

void star(){
	cout <<"*";
}

void space(){
	cout <<" ";
}

//Code die, ku cuma ubah dari c ke c++ saja
//Soal gile