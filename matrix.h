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
    void findMin(int index);//0按行，1按列，2找为覆盖的
};

#endif // MATRIX_H
