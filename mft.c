#include<stdio.h>
int main(){
	int min,rem,i, os, part,size[5],choice,sel_part,sel_size,sum_free;
	int quit=0;
	while (!quit){
		printf("Enter your choice\n1. Allocation\n2. Deletion\n3. Display \n4. Exit\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Enter size of main memory and size of os\n");
				scanf("%d %d",&min,&os);
				rem=min-os;
				printf("Enter no of partitions\n");
				scanf("%d",&part);
				part=rem/part;
				printf("Enter process size\n");
				for (i=1;i<=5;i++){
					scanf("%d",&size[i]);
					
				}
				break;
			case 2:
				printf("Enter partition from which you want to delete\n");
				scanf("%d",&sel_part);
				printf("Enter size you want to delete from partition %d\n",sel_part);
				scanf("%d",&sel_size);
				size[sel_part]=size[sel_part]-sel_size;
				break;
			case 3:
				sum_free=0;
				for (i=1;i<=5;i++){
					sum_free=sum_free+(part-size[i]);
					printf("Partition %d free space=%d\n",i,part-size[i]);		
				}
				printf("\nTotal available space=%d\n",rem-sum_free);
				break;
			case 4:
				quit=1;
				break;
				
			}
		}
	return 0;
}
