#include<iostream>
#include<conio.h>
#include<cstring>
#include<stdio.h>
#include<windows.h>
using namespace std;
main()
{
    int nilai;
    char indeks;
    cout<<"MASUKAN NILAI ALGORITMA ANDA : "; cin>>nilai;
    if (nilai>=80 && nilai<=100)
    {
         indeks='A';
         cout<<"NILAI ANDA ADALAH "<<indeks;
    }
    else if (nilai>=65 && nilai<=79)
    {
         indeks='B';
         cout<<"NILAI ANDA ADALAH "<<indeks;
    }
    else if (nilai>=45 && nilai<=64)
    {
        indeks='C';
        cout<<"NILAI ANDA ADALAH "<<indeks;
    }
    else if (nilai>=0 && nilai <=44)
    {
        indeks='D';
        cout<<"NILAI ANDA ADALAH "<<indeks;
    }


    getch();
    return 0;
}
