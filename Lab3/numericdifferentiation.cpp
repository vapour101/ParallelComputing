#include "numericdifferentiation.h"
#include <omp.h>
using namespace std;



vector<vector<double>> numericDiff(func_t func, double lowerBound, double upperBound, int dimension, int numThreads)
{
	vector<vector<double>> results;
	double h = 0.0001;
	int sections = (upperBound - lowerBound) / h;


}
