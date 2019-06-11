#include <stdio.h>

int main()
{
    int n,loop=1;
    scanf("%d",&n);
    for(int i=n,loop=1;loop<=5;i+=n,loop++)
    {
        printf("%d ",i);
    }
    
}
