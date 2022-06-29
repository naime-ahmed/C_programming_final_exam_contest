#include<stdio.h>
#include<float.h> 
#include<math.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>

int main(){

    for (int i = 0;; i++)
    {
        int num;
        scanf( "%d", &num );
        if (num == 42)
        {
            break;
        }
        else{
            printf( "%d\n", num );
        }
        
    }
    
    return 0;
}