#include <stdio.h>
int main() {
	int num = 0;
	int sum = 0;
	int count = 0;
	
	while(1){
		printf("enter a number :");
		scanf("%d",&num);

		if(num <=0) {
			break;
		}
		sum += num;
		count++;
	}
	double average = (double)sum/count;
	printf("sum of number: %d\n",sum);
	printf("average of number: %.2f\n" ,average);
}

