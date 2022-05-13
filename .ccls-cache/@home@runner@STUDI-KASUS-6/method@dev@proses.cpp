#include <iostream>
#include "../base.h"
using namespace std;

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
