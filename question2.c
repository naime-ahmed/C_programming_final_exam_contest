#include<stdio.h>
#include<float.h> 
#include<math.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>

int main(){

    char str[51];

    scanf( "%s", &str );

    int countA = 0;
    int countOthers = 0;
    int len = strlen(str);

    for (int i = 0; i < len; i++)
    {
        if (str[i] == 'a')
        {
            countA++;
        }
        else{
            countOthers++;
        }        
    }

    if (countOthers > countA)
    {
        int diff = countOthers - countA;
        int longBeautifulStr = len - (diff+1);
        printf( "%d\n", longBeautifulStr );
    }
    else if (countOthers == countA)
    {
        int longBeautifulStr = (countOthers + countA) -1;
        printf( "%d\n", longBeautifulStr );
    }
    
    else{
        printf( "%d\n", strlen(str) );
    }
    

    return 0;
}