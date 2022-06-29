#include<stdio.h>
#include<float.h> 
#include<math.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>

int main(){

    int timesOfOperation;
    int add;

    scanf( "%d", &timesOfOperation);
    scanf( "%d", &add );

    int tempVal = 1;

    for (int i = 0; i < timesOfOperation; i++)
    {
        int A = (tempVal* 2);
        int B = (tempVal+add);

        if ( A < B)
        {
            tempVal = tempVal * 2;
        }
        else
        {
            tempVal+=add;
        }
        

    }
    printf( "%d\n", tempVal );
    

    return 0;
}

/*

#include <stdio.h>
int main()
{

    int n;
    int k;

    scanf( "%d", &n);
    scanf( "%d", &k);

    int temp = 1;

    int a, b;
    while(n--)
    {
        a = temp * 2;
        b = temp + k;
        (a < b) ? (temp *= 2) : (temp += k);
    }
    printf("%d\n", temp);
    return 0;
}

*/