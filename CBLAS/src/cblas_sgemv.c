#include "cblas.h"

void cblas_sgemv(const enum CBLAS_ORDER order, const enum CBLAS_TRANSPOSE TransA, const int M, const int N, const float alpha, const float* A, const int lda, const float* X, const int incX, const float beta, float* Y, const int incY) {
	float temp = 0;

	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			temp += (*(A + i * N + j) * *(X + j * 1 + 0));
		}
		*(Y + i * 1 + 0) = temp;
		temp = 0;
	}
}