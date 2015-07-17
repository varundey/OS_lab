#include<stdio.h>
int main(){
	int pid[5],prior[5],servt[5],finish_time[5],i,j,p,sum=0,tat[5],wt[5],prid,st;
	float sum_tat=0, sum_wt=0;
	printf("Enter 5 process id\n");
	for (i=0;i<5;i++){
		scanf("%d",&pid[i]);
	}
	printf("Enter 5 service time\n");
	for (i=0;i<5;i++){
		scanf("%d",&servt[i]);
	}
	printf("Enter priority for the process id\n");
	for (i=0;i<5;i++){
		scanf("%d",&prior[i]);
	}
	for(i=0;i<5;i++){
		for (j=i+1;j<5;j++){
			if(prior[i]>prior[j]){
				p=prior[i];
				prior[i]=prior[j];
				prior[j]=p;
				
				prid=pid[i];
				pid[i]=pid[j];
				pid[j]=prid;
				
				st=servt[i];
				servt[i]=servt[j];
				servt[j]=st;
			}
		}
	}
	for (i=0;i<5;i++){
		sum=sum+servt[i];
		finish_time[i]=sum;
	}
	printf("-----------------------------------------------------------------------------------------\n");
	for (i=0;i<5;i++){
		tat[i]=finish_time[i]-pid[i];
		sum_tat=sum_tat+tat[i];
	}
	wt[0]=0;
	for (i=1;i<5;i++){
		wt[i]=tat[i]-servt[i];
		sum_wt=sum_wt+wt[i];
	}
	printf("Process ID\t|Priority\t|Service Time\t|Finish time\t|TAT\t\t|WT\t|\n");
	printf("-----------------------------------------------------------------------------------------\n");
	for (i=0;i<5;i++){
		printf("%d \t\t| %d \t\t| %d\t\t| %d \t \t|  %d\t \t|   %d\t| \n",pid[i],prior[i],servt[i],finish_time[i],tat[i],wt[i]);
	}
	printf("-----------------------------------------------------------------------------------------\n");
	printf("Average Turn around time: %f\nAverage waiting time: %f",sum_tat/5,sum_wt/5);
	return 0;
}
