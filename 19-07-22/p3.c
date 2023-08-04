#include<stdio.h>
int main()
{
    int a,rev=0,rem,p;
    printf("Enter the number: ");
    scanf("%d ",&a);
    for ( p=a;a!=0;a=a/10)
    {
        rem=a%10;
        rev=rev*10+rem;
        
    }
    printf("The reverse number is %d",rev);
    

}