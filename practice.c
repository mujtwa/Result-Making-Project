// break is a keyword in c language
// it put inside the if condition only inside loop condition
// after execution it control went out from the loop
// exit function takes 0 and 1 2 3 etc. and through exit() function program terminated finally.
// break put inside the if condition only inside loop condition for , while do..while loop./*

#include<stdio.h>
int main()
{
    int i=1;
    /*for(i=1;i<=10;i++)
    {
        if(i==4)
            break;
        printf("%d\n",i);

    }
    printf("My name is Mujtaba Ali");
*/
/*while(i<=10)
{
    if(i==4)
        exit(1);
    printf("%d\n",i);
    i+=1;
}
printf("Name is Mujtaba Ali");*/

do
{
    if(i==3)
        exit(0);
    printf("%d\n",i);
    i+=1;
}while(i<=12);
printf("mujtaba ali");
    return 0;
}
