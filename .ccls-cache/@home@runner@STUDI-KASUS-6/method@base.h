#include <iostream>
#include <string.h>
using namespace std;

class Array {
public:
  void input();
  void proses();
  void output();

private:
  string matkul[50]; // Jumlah Mata Kuliah 
  string mhs[100]; // nama mahasiswa
  int b, c;       // berapa banyak input
  int n_tgs[100], n_uts[100], n_uas[100], n_akhir[100];
  int i, j; // loop for
  float rata_tgs, rata_uts, rata_uas;
};

void Array::input() {
  cout << "+=========================================+\n";
  cout << "Jumlah Mahasiswa : ";
  cin >> b;  
  cout << "Jumlah Mata Kuliah : ";
  cin >> c;
  cout << "+=========================================+\n";
  for (int i = 1; i <= b; i++) {
    cout << "Nama Mahasiswa : ";
    cin >> mhs[i];

	for (int j = 1; j <= c; j++){
	cout << "Matakuliah : ";
	cin >> matkul[j];
    cout << "Masukkan Nilai Tugas : ";
    cin >> n_tgs[j];
    cout << "Masukkan Nilai UTS   : ";
    cin >> n_uts[j];
    cout << "Masukkan Nilai UAS   : ";
    cin >> n_uas[j];
    cout << "\n";
	}
}
};

void Array::proses() {

  // proses nilai akhir dan rata rata
  for (j = 1; j <= c; j++) {
    n_akhir[j] =
        n_tgs[j] * 20 / 100 + n_uts[j] * 35 / 100 + n_uas[j] * 45 / 100;
		rata_tgs += n_tgs[j];
		rata_uts += n_uts[j];
		rata_uas += n_uas[j];
  }
  rata_tgs = rata_tgs / c;
  rata_uts = rata_uts / c;
  rata_uas = rata_uas / c;
};

void Array::output() {
  cout << "+=======================================================================================+\n";
  cout << "                              Daftar Nilai Mahasiswa\n";
  cout << "=========================================================================================\n";
  for (i = 1; i<= b; i++){
  	cout << "Nama : " << mhs[i];
    cout << "\n|| Mata Kauliah ||   Nilai Tugas   ||   Nilai UTS   ||  Nilai UAS   ||   Nilai Akhir   ||\n";
        for (j = 1; j <= c; j++) {
    cout << "||  "<<matkul[j] << "                 " << n_tgs[j] << "             " << n_uts[j] << "                  " << n_uas[j] << "                  " << n_akhir[j] << "           \n";

  }



 cout << "==========================================================\n"; 
  cout << " Nilai rata-rata Tugas : " << rata_tgs;
  cout << "\n Nilai rata-rata UTS : " << rata_uts;
  cout << "\n Nilai rata-rata UAS : " << rata_uas << endl;
    cout << "==========================================================\n"; 
}
};