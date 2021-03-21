/*Q3. Take a number as input and show the reverse of that number as
output and summation of digits.
CODE:*/
#include<stdio.h>
#include<math.h>
int main() {
 int n, rem, N=0, Sum=0;
 printf("Enter the number: ");
 scanf("%d", &n);
 for(; ; ){
 rem = n%10;
 n=n/10;
 N = N*10+rem;
 Sum = Sum+rem;
 if(n==0)
 break;
 }
 printf("\nThe reverse number is: %d", N);
 printf("\nSummation of digits: %d", Sum);
}
