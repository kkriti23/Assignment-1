#include "mylib.h"
#include<math.h>
int reverseDigits(int n) {
	int r=0;
    while (n) { r = r*10 + (n % 10); n /= 10; }
    return r;
}
int isArmstrong(int num) {
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
int isAdams(int num) {
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
int isPrimePalindrome(int num) {
    int isPalindrome(int n) {
        int a;
        a=reverseDigits(n);
	    if(a==n){
		    return 1;
	    }else{
		    return 0;
	    }
    }
    int isPrime(int num) {
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
    if(isPrime(num) && isPalindrome(num)){
    	return 1;
	}else{
		return 0;
	}
}

