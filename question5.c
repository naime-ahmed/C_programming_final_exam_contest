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

        int athletes[num];
        for (int i = 0; i < num; i++)
        {
            scanf( "%d", &athletes[i] );
        }

        for (int i = 0; i < num; i++)
        {
            for (int j = i+1; j < num; j++)
            {
                if (athletes[i] < athletes[j])
                {
                    int temp = athletes[i];
                    athletes[i] = athletes[j];
                    athletes[j] = temp; 
                }
                
            }
        
        }

        int minDiff = 1000;

        for (int i = 0; i < num - 1; i++)
        {
            int diff = athletes[i] - athletes[i+1];
            if (diff < minDiff)
            {
                minDiff = diff;
            }
            
        }

        printf( "%d\n", minDiff );


        
    }
    

    return 0;
}