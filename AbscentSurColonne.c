#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
bool absentSurColonne (int k, int grille[9][9], int j)
{
    for (int i=0; i < 9; i++)
        if (grille[i][j] == k)
            return false;
    return true;
}
