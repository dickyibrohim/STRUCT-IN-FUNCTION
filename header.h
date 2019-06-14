#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//STRUCT DI DECLARASIKAN DI HEADER
typedef struct
{
    int x;
    int y;
} Point;
Point MakePoint (int a, int b); //FUCTION OF STRUCT
void ReadPoint (Point P); // PROCEDURE STRUCT
Point AddPoint (Point P1, Point P2);

#endif // HEADER_H_INCLUDED
