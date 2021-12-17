#ifndef MATRIX_H
#define MATRIX_H
#include <vector>
#include "cell.h"
#include <iostream>

using namespace std;
class Matrix
{
public:
    Matrix(int n);
    int n;
    std::vector<std::vector<Cell>> container;
    void dotMul(Matrix m);
    void findMin(int index);//0按行，1按列，2找为覆盖的
    void print();
};

#endif // MATRIX_H
