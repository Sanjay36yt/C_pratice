#include<stdio.h>
#include<conio.h>
	/* function program */

int fu_odd(int num);

int fu_odd(int num){

if(num%2 == 0){
	return 1;
}else
return 0;

}

int main(){

int num;

while(1){
	

printf("Enter the number:");
scanf("%d",&num);
	if(num == 0){
	break;
}
else{
if(fu_odd(num)){
	printf("even\n");
}
else{
	printf("odd\n");
}
}
}

}
