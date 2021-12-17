#include "matrix.h"

Matrix::Matrix(int n)
{
    this->n = n;
    container.resize(n);
    for(auto it = container.begin();it!=container.end();++it)
    {
        it->resize(n);
    }
}

void Matrix::dotMul(Matrix m)
{
    auto itm = m.container.begin();
    for(auto it = container.begin();it!=container.end();++it)
    {
        auto im = itm->begin();
        for(auto i = it->begin();i!=it->end();++i)
        {
            i->weight = i->weight*im->weight;
            ++im;
        }
        ++itm;
    }
}
