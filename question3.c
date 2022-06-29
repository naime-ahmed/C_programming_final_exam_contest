#include<stdio.h>
#include<float.h> 
#include<math.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>


int main(){

    int testCase;
    scanf( "%d", &testCase );

    for (int i = 0; i < testCase; i++)
    {
        int num;
        scanf( "%d", &num );
        int numArr[num];

        for (int i = 0; i < num; i++)
        {
            scanf( "%d", &numArr[i] );
        }
        
        for (int i = 0; i < num/2; i++)
        {
            printf( "%d ", numArr[i] );
            printf( "%d ", numArr[num-1-i] );
        }
        if (num%2 != 0)
        {
            printf( "%d", numArr[(num/2)] );
        }
        
        printf( "\n" );
        
        
    }
    
    return 0;
}