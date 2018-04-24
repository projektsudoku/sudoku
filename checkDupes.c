#include <stdio.h>
#include <stdlib.h>

int sudokuPreset()
{
    int presetSudoku[10][10];
    int spielerEingabe[10][10];

    presetSudoku[1][1] = 1;
    presetSudoku[1][2] = 2;
    presetSudoku[1][3] = 3;

    spielerEingabe[1][1] = 3;
    spielerEingabe[1][2] = 1;
    spielerEingabe[1][3] = 2;

    checkDupes(presetSudoku, spielerEingabe);
}

int checkDupes(int presetSudoku[10][10], int spielerEingabe[10][10])
{
    int i = 0, j = 0;

    for (i = 1; i < 10; i++) {
        for (j = i; j < 10; j++) {
            if (presetSudoku[i][j] == spielerEingabe[i][j]) {
                printf("No dupes.");
                return 1;
            }
        }
        printf("\nIhre Eingabe stimmen mit der Lösung überein!");
        printf("\nHerzlichen Glueckwunsch!");
        return 0;
    }
}

int main()
{
    sudokuPreset();

    return 0;
}
