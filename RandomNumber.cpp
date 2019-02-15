#include<stdio.h>
#include<time.h>
 int main(){
int next,min,max,a,n,i;
	printf("Enter Minimum Number : ");
	scanf("%d",&min);
	printf("Enter Maximum Number : ");
	scanf("%d",&max);
	if(max<min){
		printf("Maximum Number must be greater than Minimum Number.\n");
		return main();
	}
	else {
		printf("Enter the amount of random number you want : ");
		scanf("%d",&n);
		next = 3251 ;
			for(i=1;i<=n;i++){
			next = ((next * next) / 100 ) % 10000 ;
			a= next % (max-min+1) + min ;
			 printf("%d\n",a); 
			}
	}
	
	return 0;	
}
