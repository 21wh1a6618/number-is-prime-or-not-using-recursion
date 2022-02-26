//c program to check no. is prime or not using recursion//
#include<stdio.h>

int primenumber(int , int);

int main()
{
   int num,check;
   printf("enter the number:");
   scanf("%d",&num);
   check = primenumber (num,num/2);
   if(check == 1)
{
   printf("%d is a prime number \n",num);
}
   else
   {
     printf("%d is not a prime number \n",num);
   }
   return 0;
}
 int primenumber (int num,int i)
 {
    if (i==1)
   
   {
      return 1;
   }
   else 
{
     if(num%i==0)
     {
       return 0;
        }   
      else
      {
       return primenumber(num,i-1);
      }
}
}
