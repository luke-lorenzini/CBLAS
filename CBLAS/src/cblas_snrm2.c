#include <math.h>

#include "cblas.h"

float  cblas_snrm2(const int N, const float* X, const int incX) {
	float retVal = 0;

	for (int i = 0; i < N; i++) {
		retVal += pow(*(X + i), (float)2);
	}

	return sqrtf(retVal);
}