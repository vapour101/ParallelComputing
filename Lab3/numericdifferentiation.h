#ifndef NUMERICDIFFERENTIATION_H
#define NUMERICDIFFERENTIATION_H

#include <vector>

typedef double(*func_t)(std::vector<double>);

std::vector<std::vector<double>> numericDiff(func_t func, double lowerBound, double upperBound, int dimension, int numThreads);


#endif // NUMERICDIFFERENTIATION_H
