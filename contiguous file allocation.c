#include<stdio.h>
int main(){
	int mem,start,i,req;
	char s[50];
	printf("Enter file name\n");
	scanf("%s",&s);
	printf("Enter number of blocks in the main memory\n");
	scanf("%d",&mem);
	printf("Enter starting address of the block\n");
	scanf("%d",&start);
	printf("Enter number of required block\n");
	scanf("%d",&req);
	if(start+req<=mem){
		printf("Allocated blocks are\n");
		for(i=start;i<=req+start;i++){
			printf("%d\t",i);
		}
	}
	else{
		printf("Not enough space!!");
	}
	return 0;
}
