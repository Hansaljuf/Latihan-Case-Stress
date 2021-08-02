#include <iostream>
using namespace std;

typedef struct{
	const int baju=49000, celana=15000, masker=1000;
	int total;
}bungkus;

int main(){

	int n, baju, celana, masker, jumlah_produk;
	bungkus untung;

	cin >>n;

	baju=n/7;
	celana=(n%7)/3;
	masker=4*(n%7%3)/1;

	jumlah_produk=baju+celana+masker;
	untung.total=(baju*untung.baju)+(celana*untung.celana)+(masker*untung.masker);

	cout <<"Dapat memproduksi : " <<baju <<" baju, " <<celana <<" celana, " <<masker << " masker" <<endl;
	cout <<"Jumlah produk : " <<jumlah_produk <<endl;
	cout <<"Keuntungan yang diperoleh : Rp." <<untung.total <<",00" <<endl;

	return 0;
}