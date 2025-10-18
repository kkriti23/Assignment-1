#include<stdio.h>
#include<math.h>
// Function to reverse digits of a number
int reverseDigits(int n) {
/* Your Code Here */
    int rem,rev=0;
    int a=n;
    while(n>0){
    	rem=n%10;
    	rev=rev*10+rem;
    	n=n/10;
	}
	return rev;
}
// Function to check if number is Armstrong
int isArmstrong(int num) {
/* Your Code Here */
    int  count=0,a,b,remainder,result=0;
    a=num;
	while(a>0){
		a=a/10;
		count++;
	} 
	b=num; 
	while(b>0){
		remainder=b%10;
		result=result+pow(remainder,count);
		b=b/10;
	}
	if(result==num){
		return 1;
	}else{
		return 0;
	}
}
// Function to check if number is Adams Number
int isAdams(int num) {
/* Your Code Here */
    int sq,remain,reverse=0,remain1,reverse1=0,sq1;
	sq=num*num;
	while(sq>0){
		remain=sq%10;
		reverse=reverse*10+remain;
		sq=sq/10;
	}
	while(num>0){
		remain1=num%10;
		reverse1=reverse1*10+remain1;
		num=num/10;
	}
	sq1=reverse1*reverse1;
	if(sq1==reverse){
		return 1;
	}else{
		return 0;
	}
}
// #cp
// Function to check if number is prime
int isPrime(int num) {
/* Your Code Here */
    int count=0,i;
    if(num<2){
    	return 0;
	}
	for(i=2;i<=num;i++){
		if(num%i==0){
			count++;
		}	
	}
	if(count<2){
			return 1;
		}else{
			return 0;
		}
}
// Function to check if number is prime and palindrome
int isPrimePalindrome(int num) {
/* Your Code Here */
    int isPalindrome(int n) {
    /* Your Code Here */
        int a;
        a=reverseDigits(n);
	    if(a==n){
		    return 1;
	    }else{
		    return 0;
	    }
    }
    if(isPrime(num) && isPalindrome(num)){
    	return 1;
	}else{
		return 0;
	}
}
// Main menu-driven program
int main() {
int choice, num;
do {
printf("\n===== MENU =====\n");
printf("1. Check Armstrong Number\n");
printf("2. Check Adams Number\n");
printf("3. Check Prime Palindrome Number\n");
printf("4. Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);
if (choice == 4) {
printf("Exiting program. Goodbye!\n");
break;
}
printf("Enter a number: ");
scanf("%d", &num);
switch (choice) {
case 1:
if (isArmstrong(num))
printf("%d is an Armstrong number.\n", num);
else
printf("%d is NOT an Armstrong number.\n", num);
break;
case 2:
if (isAdams(num))
printf("%d is an Adams number.\n", num);
else
printf("%d is NOT an Adams number.\n", num);
break;
case 3:
if (isPrimePalindrome(num))
printf("%d is a Prime Palindrome number.\n", num);
else
printf("%d is NOT a Prime Palindrome number.\n", num);
break;
default:
printf("Invalid choice! Please select between 1–4.\n");
}while(choise != 4){
	return 0;
}

