#include <QCoreApplication>
#include "matrix.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    //a
    int n = 3;
    Matrix m(n);


    //a
    return a.exec();
}
