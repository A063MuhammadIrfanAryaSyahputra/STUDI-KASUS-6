#include <iostream>
#include "../base.h"
using namespace std;

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
int main(){
  Array base;
	base.input();
}
