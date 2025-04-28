#include<stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);

    if(tk >= 100)
    {
        printf("Pizza kabo");
    }
    else if(tk >= 50)
    {
        printf("Fuska kabo");
    }
    else if(tk >= 20)
    {
        printf("Lisu kabo");
    }
    else{
        printf("Kisui kabo na");
    }

    return 0;
}