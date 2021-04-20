#include <stdio.h>

int main()
{
    int a[5][3] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int b[5],c[3], toplam = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int d = 0; d < 5; d++)
        {
            toplam += a[d][i];

        }
        c[i] = toplam;
        toplam = 0;
    }

    for (int i = 0; i < 5; i++)
    {
        for (int d = 0; d < 3; d++)
        {
            toplam += a[i][d];
            
        }
        
        b[i] = toplam;
        toplam = 0;
    }
    
     for (int qwe = 0; qwe < 5; qwe++)
    {
        for (int asd = 0; asd < 3; asd++)
        {
            toplam += a[qwe][asd];
        }
       
    }
    printf("%i",toplam);
    
    
    return 0;
}