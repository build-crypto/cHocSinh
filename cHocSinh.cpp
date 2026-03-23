#include "cHocSinh.h"
#include <iostream>
#include <string.h>
using namespace std;

void cHocSinh::Nhap()
{
    cout<<"Nhap Ma Hoc Sinh : ";
    fgets(CODE,9,stdin);
    if (CODE[strlen(CODE)-1]=='\n') CODE[strlen(CODE)-1] ='\0' ;
    cout<<"Nhap Ten Hoc Sinh : ";
    fgets(NAME,31,stdin);
    if (NAME[strlen(NAME)-1]=='\n') NAME[strlen(NAME)-1] ='\0' ;
    do {
    cout<<"Nhap Gioi Tinh Hoc Sinh(NAM/NU/KHAC) : ";
    fgets(GENDER,5,stdin);
    if (GENDER[strlen(GENDER)-1]=='\n') GENDER[strlen(GENDER)-1] ='\0' ;
    } while ((strcmp(GENDER,"NAM"))&&(strcmp(GENDER,"NU"))&&(strcmp(GENDER,"KHAC")));
    cout<<"Nhap Nam Sinh: ";
    cin>>BORN;
    cout<<"Nhap Diem Trung Binh (Thang diem 10): ";
    cin>>DTB;
    cout<<endl;
    cin.ignore();
}

void cHocSinh::COMPARE(cHocSinh A)
{
    cout<<"Ket Qua So Sanh Giua Hai Hoc Sinh:"<<endl;
    if (DTB>A.DTB) cout<<NAME<<" Co DTB cao hon "<<A.NAME;
    else if (DTB<A.DTB) cout<<NAME<<" Co DTB thap hon "<<A.NAME;
    else cout<<NAME<<" Co DTB bang "<<A.NAME;
    cout<<endl;
    if (BORN>A.BORN) cout<<NAME<<" nho tuoi hon "<<A.NAME;
    else if (BORN<A.BORN) cout<<NAME<<" lon tuoi hon "<<A.NAME;
    else cout<<NAME<<" bang tuoi "<<A.NAME;
}
