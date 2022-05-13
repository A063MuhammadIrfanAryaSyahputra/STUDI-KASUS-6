#include "../base.h"
#include <iostream>
using namespace std;

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
}
};