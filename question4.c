#include<stdio.h>
#include<float.h> 
#include<math.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>

int main(){

    int saleTv, canCarryTv;

    scanf( "%d %d", &saleTv, &canCarryTv );

    int tv[saleTv];

    for (int i = 0; i < saleTv; i++)
    {
        scanf( "%d", &tv[i] );
    }

    for (int i = 0; i < saleTv; i++)
    {
        for (int j = i+1; j < saleTv; j++)
        {
            if (tv[i] > tv[j])
            {
                int temp = tv[i];
                tv[i] = tv[j];
                tv[j] = temp; 
            }
            
        }
        
    }

    int maxProfit = 0;

    for (int i = 0; i < canCarryTv; i++)
    {
        if (tv[i] < 0)
        {
            maxProfit += tv[i];
        }
        
    }

    printf( "%d\n", abs(maxProfit) );
    

    return 0;
}