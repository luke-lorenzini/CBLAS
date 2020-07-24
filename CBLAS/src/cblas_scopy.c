#include "cblas.h"

void cblas_scopy(const int N, const float* X, const int incX, float* Y, const int incY) {
	for (int i = 0; i < N; i++) {
		Y[i] = X[i];
	}
}