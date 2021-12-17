#ifndef MATRIX_H
#define MATRIX_H
#include <vector>
#include "cell.h"
class Matrix
{
public:
    Matrix(int n);
    std::vector<std::vector<Cell>> container;
};

#endif // MATRIX_H
