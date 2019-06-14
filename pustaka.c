#include "header.h"
// DICKY IBROHIM
Point MakePoint (int a, int b)//FUCTION OF STRUCT
{
    Point P;
    P.x=a;
    P.y=b;
    return P;
}
// CONTOH PERBANDINGANDENGAN FUCTION BIASA
/*
int Tambah (int a, int b)
{
    return 9;
}
*/
void PrintPoint (Point P)// PROCEDURE STRUCT
{
    printf ("Point X= %d", P.x);
    printf ("\nPoint Y= %d", P.y);
}

int GetX (Point P)
{
    return P.x;
}

int GetY (Point P)
{
    return P.y;
}

Point AddPoint (Point P1, Point P2)
{
    Point Add;
    Add.x= P1.x+P2.x;
    Add.y= P1.y+P2.y;

    return Add;
}
