#ifndef MATRIX_H
#define MATRIX_H
#include <vector>
#include "cell.h"
class Matrix
{
public:
    Matrix(int n);
    vector<vector<Cell>> container;
};

#endif // MATRIX_H
