#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
	string password;
	string kucukharfler = "abcdefghijklmnoprstuwvyqz";
	string buyukharfler = "ABCDEFGHIJKLMNOPRSTUWVYQZ";
	string sayilar = "1234567890";
	string semboller = "£[&]%|-{#}@$/_";

	string BenimEklediklerim = "";
	int uzunluk;
	cout << "Sifre Uzunlugunu Seciniz : " << endl;
	cin >> uzunluk;
	srand((unsigned)time(NULL));
	int sayi;
	int i = 0;
	string tumu = kucukharfler + buyukharfler + sayilar + semboller + BenimEklediklerim;

	while (i < uzunluk) {
		sayi = (rand() % tumu.length());
		password += tumu.at(sayi);
		i++;
	}
	cout << "Sifreniz : " << password << endl;
	system("pause");
	return 0;

}
