// #include<stdio.h>
// #include <string.h>
// int main()
// {
//     char numStr[101];
//     scanf( "%s", &numStr );
//     int strLen = strlen(numStr);

//     int freq[4] = {0, };
//     int maxVal;

//     for (int i = 0; i < strLen; i+=2)
//     {
//         int num = numStr[i] - '0';
//         ++freq[num];
//         if (num > maxVal)
//         {
//             maxVal = num;
//         }
        
//     }

//     for (int i = 1; i <= maxVal; i++)
//     {
//         while(freq[i]--)
//         {
//             printf("%d", i);
//             if (freq[maxVal] == 0)
//             {
//                 break;
//             }
            
//             printf("+");
//         }
//     }

//     return 0;
// }

#include<stdio.h>
#include <string.h>
int main()
{
    char numStr[101];
    scanf( "%s", &numStr );
    int len = strlen(numStr);

    int freq[4] = {0, }, max = 0;

    for (int i = 0; i < len; i+=2)
    {
        int num = numStr[i] - '0';
        if(num > max) max = num;
        ++freq[num];
    }

    for (int i = 1; i <= max; i++)
    {
        while(freq[i]--)
        {
            printf("%d", i);
            if(freq[max] == 0) return 0;
            printf("+");
        }
    }
}
