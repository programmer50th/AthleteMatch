#ifndef MATRIX_H
#define MATRIX_H
#include <vector>
#include "cell.h"
class Matrix
{
public:
    Matrix(int n);
    int n;
    std::vector<std::vector<Cell>> container;
    void dotMul(Matrix m);
};

#endif // MATRIX_H
