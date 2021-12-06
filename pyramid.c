#include <stdio.h>

int main()
{
    int i;
    int j=1;
    int n;
    scanf("%d",&n);
    int k;
    int l=n;
    while(1)
    {
        k=l-1;
        while(k)
        {
            printf(" ");
            k--;
        }
        for(i=0;i<j;i++)
            {
                printf("* ");
            }
        
        printf("\n");
        
        j++;
        l--;
        if(j>n)
            break;
    }

    return 0;
}
