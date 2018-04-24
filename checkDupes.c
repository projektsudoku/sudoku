#include <stdio.h>
#include <stdlib.h>

int checkDuplicates()
{
    int array[10][10];
    array[1][1] = 1;
    array[1][2] = 2;
    array[1][3] = 3;
    array[1][4] = 4;
    array[1][5] = 5;
    array[1][6] = 6;
    array[1][7] = 7;
    array[1][8] = 8;
    array[1][9] = 9;

    int i, j, rowLength = 10, columnLength = 10;

    for (i = 1; i < rowLength; i++) {
        for (j = i + 1; i < columnLength; j++)
        if (array[i][i] == array[i][j]) {
            printf("No dupes allowed.");
            return 1;
        }
    }
    return 0;
}

int main()
{
    checkDuplicates();

    return 0;
}
