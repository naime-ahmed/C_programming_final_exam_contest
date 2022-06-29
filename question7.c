#include<stdio.h>
#include<float.h> 
#include<math.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>

int main(){

    int L, R;
    char giftStr[100000];
    scanf( "%d %d", &L, &R );

    scanf( "%s", &giftStr);

    int storeR = R;
    int len = strlen(giftStr);

    for (int i = 1; i <=len ; i++)
    {
        if ((i >= L) && i <= R)
        {
            char temp = giftStr[i-1];
            giftStr[i-1] = giftStr[R-1];
            giftStr[R-1] = temp;
            R--; 
        }
        
    }

    printf( "%s", giftStr );
    

    return 0;
}