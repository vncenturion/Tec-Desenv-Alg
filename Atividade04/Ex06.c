/*
URI 1803
Input
The input is a matring, i.e. a 4x(N+2) matrix of digits (from 0 to 9), 0 < N < 80.

Output
The output is given in one single line and is the decoded string. Include the end-of-line character after the string.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char matring[4][82];

int getColumn(int columnIndex)
{
    char numString[5];
    int num;

    for (int i = 0; i < 4; ++i) {
        numString[i] = matring[i][columnIndex];
    }
    numString[4] = '\0';

    num = atoi(numString);

    return num;
}

void readMatring()
{
    int line;
    memset(matring, 0, 4 * 82);
    for (line = 0; line < 4; ++line) {
        gets(matring[line]);
    }
}

int main() 
{
    int column, columns, F, L;
    readMatring();
    
    
    columns = strlen(matring[0]);
    
    F = getColumn(0);
    L = getColumn(columns - 1);

    for (column = 1; column < columns - 1; ++column) {
        int c = (F * getColumn(column) + L) % 257;
        printf("%c", c);
    }

    printf("\n");
    return 0;
}