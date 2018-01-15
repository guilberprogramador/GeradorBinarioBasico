#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p1 = 0 ;
    int p2 = 1 ;

    printf("%d\n",p1);

    printf("%d",p2);

    for(p1 = 0; p1 <10; p1 = p1 + 10){
        printf("%d\n", p1, p2);
    }

    printf("01\n");
    printf("%d",p2);



    return 0;
}
