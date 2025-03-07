#include<stdio.h>
#define Pi 3.1416

main()
{
    int r;
    float area;

    printf("input number: ");
    scanf("%d",&r);

    area= Pi*r*r;

    printf("%d",area);
}
