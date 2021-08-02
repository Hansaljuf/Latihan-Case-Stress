#include <iostream>
using namespace std;

int main (){

	int n,m;
	int i;

	cin >> n;
	int ap [n];
	for (i=0; i<n; i++){
		cin >> ap [i];
	}

	cin >> m;
	int ak [m];
	for (i=0; i<m; i++){
		cin >> ak [i];
	}

	int max;
	if (n < m)
		max = m;
	else
		max = n;

	int check = 0;
	for (i=0; i < max; i++){
		if (ap [i] % 2 == ak [i] % 2){
			check++;
		}
	}

	cout << check << endl;

	if (check == max)
		cout << "valid";
	else
		cout << "tidak valid";

	return 0;
}