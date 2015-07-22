#include<stdio.h>
int main(){
	int i,pid[5],servt[5],tq,fin[5],sum=0,count=0,tat[5],wt[5],service_time[5];
	float sum_wt=0,sum_tat=0;
	printf("Enter 5 process id\n");
	for (i=0;i<5;i++){
		scanf("%d",&pid[i]);
	}
	printf("Enter 5 service time\n");
	for (i=0;i<5;i++){
		scanf("%d",&servt[i]);
		service_time[i]=servt[i];
	}
	for (i=0;i<5;i++){
		sum=sum+servt[i];
	}
	printf("Enter time quantum\n");
	scanf("%d",&tq);
	while (count!=sum) {
		for(i=0;i<5;i++){
			if(servt[i]>tq){
				count=count+tq;
				servt[i]=servt[i]-tq;
			}
			else if(servt[i]>0 && servt[i]<=tq){
				count=count+servt[i];
				servt[i]=servt[i]-tq;
				fin[i]=count;
			}
		}
	}
	for (i=0;i<5;i++){
		tat[i]=fin[i]-pid[i];
		sum_tat=sum_tat+tat[i];
	}
	wt[0]=0;
	for (i=1;i<5;i++){
		wt[i]=tat[i]-servt[i];
		sum_wt=sum_wt+wt[i];
	}
	printf("-------------------------------------------------------------------------\n");
	printf("Process ID\t|Service Time\t|Finish time\t|TAT\t\t|WT\t|\n");
	printf("-------------------------------------------------------------------------\n");
	for (i=0;i<5;i++){
		printf("%d \t\t| %d \t\t| %d\t\t| %d \t \t|   %d\t| \n",pid[i],service_time[i],fin[i],tat[i],wt[i]);
	}
	printf("-------------------------------------------------------------------------\n");
	printf("Average Turn around time: %f\nAverage waiting time: %f",sum_tat/5,sum_wt/5);
	return 0;
}
