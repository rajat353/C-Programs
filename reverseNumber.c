#include<stdio.h>  
 int main()    
{    
int n, reverse=0;
int rem;    
printf("Enter a number: ");    
  scanf("%d", &n);    
  while(n!=0)    
  {    
     rem=n%10;    
     reverse=reverse*10+rem;    
     n/=10;    
  }    
  printf("Reversed Number is: %d",reverse);    
return 0;  
} 
