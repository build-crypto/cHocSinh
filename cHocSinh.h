#ifndef CHOCSINH_H
#define CHOCSINH_H


class cHocSinh
{
    public:
        void Nhap();
        void COMPARE(cHocSinh);
    private:
        char  NAME[31];
        char  CODE[9];
        char  GENDER[5];
        int  BORN;
        double DTB;

};

#endif // CHOCSINH_H
