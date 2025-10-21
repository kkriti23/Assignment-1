#include <stdio.h>
#include "mylib.h"
#include "mylib.c"
#include "arraylib.h"
#include "arraylib.c"
int main(void) 
{	
int num ;
printf("Enter a number :");
scanf("%d",&num);
printf("isAdams(%d) = %s\n", num, isAdams(num) ? "Yes" : "No");
printf("isArmstrong(%d) = %s\n", num, isArmstrong(num) ? "Yes" : "No");
printf("isPrimePalindrome(%d) = %s\n\n\n\n", num, isPrimePalindrome(num) ? "Yes" : "No");


int a[100],n,i,value;
printf("Enter size of array :");
scanf("%d",&n);
printf("Enter value to array :");
for (i = 0; i < n; i++)
    scanf("%d",&a[i]);
displayArray(a, n);
for (i = 0; i < n; i++)
    printf("%d ", a[i]);
    printf("\n");
printf("Value to search :");
scanf("%d",&value);
int result = linearSearch(a, n, value);
    if(result == -1)
        printf("Element not found.\n");
    else
        printf("Element found at index: %d\n", result);
printf("Max at index %d\n", findMaxIndex(a,n));
printf("Min at index %d\n", findMinIndex(a,n));
printf("Average : %.2f\n", findAverage(a,n));
reverseArray(a,n);
printf("Reverse Array :");
for (i = 0; i < n; i++)
    printf("%d ", a[i]);
    printf("\n");
sortArray(a,n);
printf("Array in ascending order :");
for (i = 0; i < n; i++)
    printf("%d ", a[i]);
    printf("\n");

return 0;
}
