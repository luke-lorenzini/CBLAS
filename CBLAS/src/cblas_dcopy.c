#include "cblas.h"

void cblas_dcopy(const int N, const double* X, const int incX, double* Y, const int incY) {
	for (int i = 0; i < N; i++) {
		Y[i] = X[i];
	}
}