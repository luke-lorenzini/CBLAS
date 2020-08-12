#include "cblas.h"

void cblas_dscal(const int N, const double alpha, double* X, const int incX) {
	for (int i = 0; i < N; i++) {
		X[i] = alpha * X[i];
	}
}