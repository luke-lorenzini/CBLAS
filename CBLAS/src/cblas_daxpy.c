#include "cblas.h"

void cblas_daxpy(const int N, const double alpha, const double* X, const int incX, double* Y, const int incY) {
	for (int i = 0; i < N; i++) {
		Y[i] = alpha * X[i] + Y[i];
	}
}