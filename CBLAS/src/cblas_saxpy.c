#include "cblas.h"

void cblas_saxpy(const int N, const float alpha, const float* X, const int incX, float* Y, const int incY) {
	for (int i = 0; i < N; i++) {
		Y[i] = alpha * X[i] + Y[i];
	}
}