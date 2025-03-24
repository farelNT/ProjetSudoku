#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
bool absentSurCarre (int k, int grille[9][9], int i, int j)
{
    int _i = i-(i%3), _j = j-(j%3);  // ou encore : _i = 3*(i/3), _j = 3*(j/3);
    for (i=_i; i < _i+3; i++)
        for (j=_j; j < _j+3; j++)
            if (grille[i][j] == k)
                return false;
    return true;
}
j'espere que c'est bon maintenant.
