#include "cHocSinh.h"
#include <iostream>
using namespace std;
int main ()
{
    cHocSinh A;
    A.Nhap();
    cHocSinh B;
    B.Nhap();
    A.COMPARE(B);
    return 0;
}
