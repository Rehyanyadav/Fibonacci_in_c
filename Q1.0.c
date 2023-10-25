//write a program to generate the fabinaco no

#include<stdio.h>
int main()
{

    int i,n,k;
    
    printf("ente the no :");
    scanf("%d",&n);
    int a[n];

    a[0]=0;
 for(i=2;i<n;i++)
    {
a[i]=a[i-1]+a[i-2];
    }
 for(k=0;k<n;k++){
    printf("%d\n",a[k]);

 }
    return 0;
}