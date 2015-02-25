#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void back ( int *combinations, int *data, int index, int size);
void allCombinations (int *data, int lengthOfBack );

void back ( int *combinations, int *data, int index, int size )
{
    int i;
    if ( index == size ){
        for ( i = 0; i < index; i ++ )
            printf("%d ", combinations[i] );
        printf("\n");
    }
    else
        for ( i = 0 ; i < 6 ; i ++ )
        {
            combinations[ index ] = data[ i ];
            back( combinations, data, index + 1, size );
        }
}


void allCombinations (int *combinations, int *data, int lengthOfBack ) {
    back(combinations, data, 0, lengthOfBack );  
}
int main (int argc, char **argv )
{
    int data[6] = { 0, 1, 2, 3, 4, 5 };
    int lengthOfBack = atoi (argv[argc-1]);
    int *combinations = (int*) malloc ( (lengthOfBack+1) * sizeof(int) );
    allCombinations ( combinations, data, lengthOfBack );
    return 0;
}

