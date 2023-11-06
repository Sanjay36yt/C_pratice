#include<stdio.h>
#include<ctype.h>
#include<conio.h>


char up_ch(char *letter);


int main(){
	char name[11];
printf("Enter the name :\n");
scanf("%s",name);
printf("size of name %d\n",sizeof(name));
up_ch(name);
printf("%s\n",name);
getch();

}

char up_ch(char *letter){
int i;
printf("size of name %d\n",sizeof(letter));
for(i=0;i<sizeof(letter);i++){
	letter[i]=toupper(letter[i]);
}
}
