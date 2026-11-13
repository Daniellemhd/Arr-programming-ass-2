#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	int arr[10];
	int copy[10];
	int sum=0;
	float avg;
	int largest=0;
	int second_lgst=0;
	printf("Enter your 10 elements:\n");
	for(int i=0;i<10;i++){	
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<10;i++){
		sum=sum+arr[i];
	}
	printf("sum=%d\n",sum);
	avg=(float)sum/10;
	printf("average=%.2f\n",avg);
	
	for(int i=0;i<10;i++){
		if(arr[i]>largest){
			largest=arr[i];
		}
	}
	printf("largest=%d\n",largest);
	
	for(int i=0;i<10;i++){
		if(arr[i]<largest&&arr[i]>second_lgst){
		   second_lgst=arr[i];
		}
	}
	printf("second lgst=%d\n",second_lgst);
	
	for(int i=0;i<10;i++){
		copy [i]= arr[i];
	}
	printf("copied array:\n");
	for(int i=0;i<10;i++){
		printf("%d",copy[i]);
	}
	printf("\n");
	return 0;
}