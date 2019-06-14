#include "header.h"
// DICKY IBROHIM
int main()
{   Point P1, P2, P3;
    P1= MakePoint (7, 9);
    P2= MakePoint (1,1);
    P3= AddPoint(P1,P2);
    PrintPoint (P1);
    printf ("\nNilai X= %d", GetX (P1));
    printf ("\nNilai Y= %d\n\n", GetY (P1));
    printf ("Add is= %d %d\n",P1);
    printf ("Add is= %d %d\n\n",P2);

    printf ("Add is= %d %d\n",AddPoint(P1, P2));
    printf ("Add is= %d %d\n",P3);

    return 0;
}
