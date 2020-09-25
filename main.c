#include <stdio.h>
#include <stdlib.h>

int main()
{
    /**< 2-D Array is basically a situation where we have an array where all of the elements in the array are actually array themselves */
    /**< Nested - Loops The looping structure where we can have a loop inside a loop */

    int nums[3][2] = {
                    {1,2},
                    {3,4},
                    {5,6},
                    };
    int i,j;
    for(i=0;i<3;i++){ /**< i = rows, j = columns */
        for(j=0;j<2;j++){
            printf("%d,",nums[i][j]);
        }
        printf("\n");
    }
    return 0;
}
