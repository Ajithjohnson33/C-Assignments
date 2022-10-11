#include <stdio.h>

int main()
{
    int cloth_1 =36;
    int cloth_2=24;
    int wid;

    for(int i=1;i<=cloth_1 && i<=cloth_2;++i)
    {
        if (cloth_1%i==0 && cloth_2%i==0)
        {
           wid=i;
        }
    }
    printf("MAXIMUM WIDTH : %d",wid);
    return 0;
}
