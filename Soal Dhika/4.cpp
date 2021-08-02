#include <iostream>
using namespace std;


//fungsi khusus cara 1
int searchCh(char arr[], int *min){
	int found=0, i=*min;
	while(found==0){
		if(arr[i] >= 'a' && arr[i] <= 'z')
			found = 1;
		i++;
	}

	*min = i;

	return found;
}

int searchNum(char arr[], int *min){
	int found=0, i=*min;
	while(found==0){
		if(arr[i] >= '0' && arr[i] <= '9')
			found = 1;
		i++;
	}

	*min = i;

	return found;
}


int main(){

	char arr[6]; //deklarasi
	char ch[6], in[6];

	int i;

	//inisialisasi
	for(i=0; i<6; i++)
		cin >> arr[i];


	int j=0, k=0;
	for(i=0; i<6; i++){
		if((arr[i]>='a' && arr[i]<='z')){
			ch[j] = arr[i];
			j++;
		}
		if((arr[i]>='0' && arr[i]<='9')){
			in[k] = arr[i];
			k++;
		}
	}

	// CARA 1
	if(j==3 && k==3){	//kondisi jika karakter dan angka = 3
		int j=-1, k=-1;
		for(i=0; i<6; i+=2){
			if(searchCh(arr, &j))
				cout <<j <<"-----" <<arr[j-1] <<endl;
			if(searchNum(arr, &k))
				cout <<k <<"-----" <<arr[k-1] <<endl;
		}
	}
	else
		cout <<"tidak valid\n";



	//CARA 2
	// if(j==3 && k==3){
	// 	j=0; k=0;
	// 	for(i=0; i<6; i++){
	// 		if(i%2==0){
	// 			cout <<ch[j] <<endl;
	// 			j++;
	// 		}
	// 		else{
	// 			cout <<in[k] <<endl;
	// 			k++;
	// 		}
	// 	}
	// }

	// else
	// 	cout <<"tidak valid\n";



	return 0;
}