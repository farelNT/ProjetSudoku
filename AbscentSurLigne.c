#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
bool absentSurLigne (int k, int grille[9][9], int i)
{
    for (int j=0; j < 9; j++)
        if (grille[i][j] == k)
            return false;
    return true;
}
