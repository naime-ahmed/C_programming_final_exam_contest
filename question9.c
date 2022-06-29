#include<stdio.h>
#include<float.h> 
#include<math.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>

int main(){

    int num;

    scanf( "%d", &num );

    char str[++num][42];

    for ( int i = 0; i < num; i++)
    {
        fgets(str[i], 42, stdin);
    }



    for (int i = 0; i < num; i++)
    {
        for (int j = i+1; j < num; j++)
        {
            if (strcmp(str[i],str[j])==0)
            {
               printf( "Yes\n" );
               return 0;
            }
            
        }
        
    }
    printf( "No\n" );

  
    

    return 0;
}

// another better way 
/*

#include <stdio.h>
#include<string.h>
#include <stdbool.h>

struct Name
{
    char familyName[11];
    char givenName[11];
};

int main()
{
    int n;
    scanf("%d", &n);
    
    struct Name s[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%s %s", &s[i].familyName, &s[i].givenName);
    }
    
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if( (strcmp(s[i].familyName, s[j].familyName) == 0) && (strcmp(s[i].givenName, s[j].givenName) == 0) )
            {
                printf("Yes\n");
                return 0;
            }
        }
    }
    
    printf("No\n");
    return 0;
}

*/