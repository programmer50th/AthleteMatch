#include "matrix.h"

Matrix::Matrix(int n)
{
    container.resize(n);
    for(auto it = container.begin();it!=container.end();++it)
    {
        it->resize(n);
    }
}
