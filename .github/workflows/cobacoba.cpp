#include <iostream>

#include <chrono>
//chrono untuk memainkan waktu

using namespace std;
// using namespace agar tidak mengulangi pemanggilan

int pertambahan (int x, int y) {
	return x + y;
}
// pertambahan untuk menambah bilangan

int pengurangan (int x, int y) {
	return x - y;
}
// pengurangan untuk mengurang bilangan

int perkalian (int x, int y) {
	return x * y;
}
// perkalian untuk mengali bilangan

int pembagian (int x, int y) {
	return x / y;
}
// pembagian untuk membagi bilangan

void log (int result){
	cout << "hasilnya adalah " << result << endl;
}
// Void digunakan jika tidak ingin menggunakan return

//const digunakan untuk variabel agar tidak bisa dirubah atau ditiban

int main () {
	cout << "hello world" << endl;
	cout << "yeah" << endl << endl << endl;
	cout << "nama saya adalah" << endl;
	cout << "muhammad fahmi fauzy" << endl << endl;
	
	int usia = 30; // angka menggunakan int
	cout << "usia saya adalah " << usia << endl << endl;
	
	double tinggisaya = 172.2; // double untuk penggunaan koma
	cout << "tinggi saya adalah " << tinggisaya << " cm " << endl << endl;
	
	int x = 5;
	int y = 7;
	int z = x + y;
	
	cout << "penjumlahan antara nilai " << x << " dengan nilai " << y << " adalah " << z << endl << endl ;
	
	int hasil = pertambahan (x = 10, y = 16);
	cout << hasil << endl;

		
	int tambah1 = pertambahan (x=15, y=10);
	int tambah2 = pertambahan (x=35, y=15);
	log(tambah1);
	log(tambah2);
		
	int kurang1 = pengurangan (x=15, y=10);
	int kurang2 = pengurangan (x=35, y=15);
	log(kurang1);
	log(kurang2);

	int kali1 = perkalian (x=15, y=10);
	int kali2 = perkalian (x=35, y=15);
	log(kali1);
	log(kali2);

	int bagi1 = pembagian (x=20, y=10);
	int bagi2 = pembagian (x=45, y=15);
	log(bagi1);
	log(bagi2);
	
	cout << endl;
	
	int raport = 70 ;
	if (raport >= 70) {
		cout << "anda seseorang yang cerdas " << endl;
	}else {
		cout << "anda seseorang yang kurang pintar" << endl;
	}
	// if digunakan untuk pengandaian
	// else digunakan jika variable pertama salah
	
	int nilai_raport {};
	cout << "masukan nilai total nilai raport anda (0-600): " ;
	cin >> nilai_raport; //cin untuk memasukkan sebuah variable
	cout << "rata rata nilai raport anda adalah " << nilai_raport / 6 << endl;
	
	int nilai_rata_rata = nilai_raport / 6;
	if (nilai_rata_rata >75){
		cout << "SELAMAT ANDA LULUS ";
	}else if (nilai_rata_rata >60){
		cout << "SILAHKAN TEST ULANG";
	}else {
		cout << "ANDA TIDAK LULUS ";
	}
		
	cin.get();
	
	return 0;
