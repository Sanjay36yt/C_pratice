#include<stdio.h>
void set_individual(int row, int col, int val);
void print_arr();
void set_arr_to(int num);
void set_col_to(int col, int val);
void set_row_to(int row, int val);
void set_start();

int arr[8][8];


int main(){
	int option = 0;
	while(1){
		int opt;
		printf("1. Start the Game\n");
		printf("2. option\n");
		printf("3. exit\n");
		scanf("%d",&opt);
		if(opt == 1){
		set_start();		


}
else if(opt == 2){
	while(1){
		printf("1. Change all values\n");
		printf("2. Change a single row.\n");
		printf("3. Change a single column.\n");
		printf("4. Change individual coordinates\n");
		printf("5. Exit\n Enter your choice: ");
		scanf("%d", &option);
		if(option >= 6 || option < 1){
			printf("Invalid option, try again\n");
			continue;
		} else if (option == 1) {
			int val;
			printf("Enter the value you want to set: ");
			scanf("%d", &val);
			set_arr_to(val);
			printf("Value set, printing now...\n");
			print_arr();
		} else if (option == 3) {
			int col, val;
			printf("Enter the column you want to modify: ");
			scanf("%d", &col);
			printf("Enter the value you want to set for column %d: ", col);
			scanf("%d", &val);
			set_col_to(col, val);
			printf("Value set, printing now...\n");
			print_arr();
		} else if (option == 2) {
			int row, val;
			printf("Enter the row you want to modify: ");
			scanf("%d", &row);
			printf("Enter the value you want to set for row %d: ", row);
			scanf("%d", &val);
			set_row_to(row, val);
			printf("Value set, printing now...\n");
			print_arr();
		} else if (option == 4) {
			int row; int col; int val;
			printf("Enter the row: ");
			scanf("%d", &row);
			printf("Enter the col: ");
			scanf("%d", &col);
			printf("Enter the value to set in arr[%d][%d]: ", row, col);
			scanf("%d", &val);
			set_individual(row, col, val);
			printf("Value set, printing now...\n");
                        print_arr();
		} else if (option == 5){
			printf("Exitting...\n");
			break;
		} else {
			continue;
		}
	}

     }	
else if(opt == 3 ){
	break;
   }

}
}


void print_arr(){
	for(int i=0; i<8; i++){
                for (int j=0; j<8; j++){
                        printf("%d  ", arr[i][j]);
                }
                printf("\n");
        }
}

void set_arr_to(int num){
	for(int i=0; i<8; i++){
                for(int j=0; j<8; j++){
                        arr[i][j] = num;
                }
        }
}

void set_col_to(int col, int val){
	for(int i=0; i<8; i++){
		arr[i][col] = val;
	}
}

void set_row_to(int row, int val){
	for(int i=0; i<8; i++){
                arr[row][i] = val;
        }
}

void set_individual(int row, int col, int val){
	arr[row][col] = val;
}

void cod_val(int one, int two){
	for(int j=0; j<8; j++){
		arr[one][j] = 0;
		
}
	for(int i=0; i<8; i++){
		arr[i][two] =0;
}


}

int rec_val(){
int count=0;

	for(int i=0; i<8; i++){
		for(int j=0; j<8; j++){
			if(arr[i][j]==0){
		count =count+1;
}

}
}

return count;
}
       

   //code used to get valu from use after pressing 1
void set_start(){
int num,ar,one,two;
char cma;
printf("<----------------------------------------------------------------------------------------------------->\n");
//print_arr();
//printf("\t\t\t\tSet the Arry number:(1 to 9)\t");
//scanf("%d",&ar);
set_arr_to(2);
print_arr();
printf("\t\t\t\tEnter The Number of Choppers\t");
scanf("%d",&num);
printf("\n");
while(num != 0){
printf("\t\t\t\tEnter the cordinates (x,y):");
scanf("%d%c%d",&one,&cma,&two);
printf("\n");
cod_val(one,two);
print_arr();
num-- ;
printf("\nnumber of recovery:%d\n",rec_val());
printf("\n");
}
}
