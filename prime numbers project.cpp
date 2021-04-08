//c program to find prime number

#include<stdio.h>
int main(){
	int i,n;
	int isprime = 1;
	printf("Enter the number to check if it is prime or not: \n");
	scanf("%d",&n);
	for(i =2; i*i<n;i++){
		if(n%i==0){
			isprime = 0;
		}
	}
	
	
    if(isprime){
	
	printf("the number %d is prime\n" , n);
	}
	else{
		
		printf("the number %d is not prime\n", n);
	}
	
	
	return 0;
}
