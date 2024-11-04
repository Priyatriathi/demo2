#include<stdio.h>
int main()
{
    int a,b;
    printf("enter a and b");
    scanf("%d %d",&a,&b);
    printf("values of before swap a=%d and b=%d\n ",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("values of after swap a=%d and b=%d",a,b);
      return 0;
}
