#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
 int *a,n,i;
printf("Enter the number of inputs:");
scanf("%d",&n);
	
a =(int *)malloc(sizeof(int)*n);
 printf("address of int start : %p\n",a);
	printf("Enter the number \n");
for(i=0;i<n;i++){
	scanf("%d",&a[i]);
}
	for(i=0;i<n;i++){
	printf("a[%d]=%d\n",i,a[i]);
}

getch();
	free(a);
printf("address od a %p\n",a);
getch();
}
