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

<<<<<<< Updated upstream
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

void Matrix::findMin(int index)
{
    if(index==0)//找行最小的
    {
        for(int i=0;i<n;i++)
        {
            int min = container[i][0].weight;
            for(int j=0;j<n;j++)
            {
                if(container[i][j].weight<min)
                    min = container[i][j].weight;
            }
            for(int j=0;j<n;j++)
                 container[i][j].weight -= min;
        }

    }
    else if(index==1)//找列最小的
    {

    }
    else if(index==2)//找未标记中的最小的
    {

    }

=======
void Matrix::findMin(int index)
{
    if(index==0)//找到每一行最小的，并减去
    {
        for(int i=0;i<container.size();i++)
        {
            int min = container[i][0].weight;
            for(int j=0;j<container[i].size();i++)
            {

            }
        }
    }
    else if(index==1)//找到每一列最小的，并减去
    {

    }
    else if(index==2)//找到未标记中最小的，并减去
    {

    }
>>>>>>> Stashed changes
}
