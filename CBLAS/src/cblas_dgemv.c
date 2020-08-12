#include "cblas.h"

void cblas_dgemv(const enum CBLAS_ORDER order, const enum CBLAS_TRANSPOSE TransA, const int M, const int N, const double alpha, const double* A, const int lda, const double* X, const int incX, const double beta, double* Y, const int incY) {
	double temp = 0;

	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			temp += (*(A + i * N + j) * *(X + j * 1 + 0));
		}
		*(Y + i * 1 + 0) = temp;
		temp = 0;
	}
}