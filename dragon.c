#include "stdio.h"
#include "defs.h"
#include "stdlib.h"

int main() {
    AllInit();

    int PieceOne = rand();
    int PieceTwo = rand();
    int PieceThree = rand();
    int PieceFour = rand();

    printf("PieceOne: %X\n", PieceOne);
    printf("PieceTwo: %X\n", PieceTwo);
    printf("PieceThree: %X\n", PieceThree);
    printf("PieceFour: %X\n", PieceFour);

    int Key = PieceOne ^ PieceTwo ^ PieceThree ^ PieceFour;
    int TempKey = PieceOne;

    TempKey ^= PieceThree;
    TempKey ^= PieceTwo;
    TempKey ^= PieceFour;

    printf("TempKey = %d\n", Key);
    printf("Key = %d\n", TempKey);

    return 0;
}