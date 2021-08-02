#include <iostream>
using namespace std;

int main (){

	const int gorengan = 500;
	const int gehu = 100;
	const int bala = 150;
	const int pisang = 75;
	const int cireng = 175;

	int n,m,k,h,r;

	cin >> n;
	cin >> m;
	cin >> k;
	cin >> h;
	cin >> r;

	n *= gehu;
	m *= bala;
	k *= pisang;
	h *= cireng;
	r *= n+m+k+h;

	cout << r;

	return 0;
}