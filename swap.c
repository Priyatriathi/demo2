#include<stdio.h>
int main()
{
  // third version third time pushing

    int a,b;
    printf("enter a and b");
    scanf("%d %d",&a,&b);
    printf("values of before swap a=%d and b=%d\n ",a,b);
    int t=a;
    a=b;
    b=t;
    printf("values of after swap a=%d and b=%d",a,b);
      return 0;
}
