#include "cblas.h"

void cblas_dgemm(const enum CBLAS_ORDER Order, const enum CBLAS_TRANSPOSE TransA, const enum CBLAS_TRANSPOSE TransB, const int M, const int N, const int K, const double alpha, const double* A, const int lda, const double* B, const int ldb, const double beta, double* C, const int ldc) {
	double temp = 0;

	int outter = M;
	int inner1 = K;
	int inner2 = N;

	for (int i = 0; i < outter; i++) {
		for (int k = 0; k < inner1; k++) {
			for (int j = 0; j < inner2; j++) {
				temp += (*(A + i * inner2 + j) * *(B + j * inner1 + k));
			}
			*(C + i * inner1 + k) = temp;
			temp = 0;
		}
	}
}