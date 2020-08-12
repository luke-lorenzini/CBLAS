#include <math.h>

#include "cblas.h"

double  cblas_dnrm2(const int N, const double* X, const int incX) {
	double retVal = 0;

	for (int i = 0; i < N; i++) {
		retVal += pow(*(X + i), 2);
	}

	return sqrt(retVal);
}