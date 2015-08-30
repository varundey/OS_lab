#include<stdio.h>
int main(){
	int mem,i,req,alloc_no,n,count=0;
	char s[50];
	printf("Enter file name\n");
	scanf("%s",&s);
	
	printf("Enter number of blocks in the main memory\n");
	scanf("%d",&mem);
	int bloc_no[mem];
	for (i=1;i<=mem;i++){
		bloc_no[i]=0;
	}
	
	printf("Enter number of already allocated blocks\n");
	scanf("%d",&alloc_no);
	printf("Enter %d blocks which are allocated\n",alloc_no);
	for (i=1;i<=alloc_no;i++){
		scanf("%d",&n);
		bloc_no[n]=1;
	}
	
	printf("Choose an indexed block\n");
	scanf("%d",&req);
	int ind;
	printf("Enter indexed block\n");
	scanf("%d",&ind);
	
	if(ind==req){
		for (i=1;i<=mem;i++){
			if (bloc_no[i]==1){
				continue;
			}
			else{
				printf("%d\t",i);
				count++;
				if (count==req){
					break;
				}
			}
		}
	}
	
	
	
	
	
	
	/*
	if(req<=mem-alloc_no){
		printf("Allocated blocks are\n");
		for (i=1;i<=mem;i++){
			if (bloc_no[i]==1){
				continue;
			}
			else{
				printf("%d\t",i);
				count++;
				if (count==req){
					break;
				}
			}
		}
	}
	else    printf("Not enough space!!");
*/	
	return 0;
}
