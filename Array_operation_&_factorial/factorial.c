// Factorial using recursion and for loop

#include<stdio.h>

int fact(int n);
int fact(int n){
     if(n == 0 || n== 1){
        return 1;
    }
    return n*fact(n-1);
}


int itt(int n);
int itt(int n){
    int fact = 1;
    for (int i = n; i >0; i--)
    {
        fact *= i;
    }
    return fact;
}
int main()
{   
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
   

    printf("Factorial of %d is %d using recursion \n",n, fact(n));
    printf("Factorial of %d is %d using for loop",n, itt(n));
    return 0;  
}