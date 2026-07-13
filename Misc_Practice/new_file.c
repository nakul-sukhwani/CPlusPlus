#include <stdio.h>
int swap_arthimatic(int num1,int num2){
    num1 = num1+num2;
    num2 = num1-num2;
    num1 = num1-num2;
    printf("num1 and num2 after swap : num1 = %d , num2 = %d \n" , num1,num2);
}

// Find sum of first N natural numbers using loop
int sum_natural (int N){ 
    int sum = 0;
    for(int i=0 ; i<=N; i++){
        sum+=i;

    }printf("sum of N numbers = %d\n",sum);
}
// to get factorial of a  number:
int factorial(int N){
    int fact = 1;
    for(int i=1 ; i<=N; i++){
        fact*=i;
    }printf("factorial of number N = %d\n",fact);
}
// to generate fibonacci series 


int fibonacci(int N ) {
    int i, n;
    int t1 = 0, t2 = 1; 
    int nextTerm;
    printf("Enter the number of terms you want in the Fibonacci series: ");
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }
    printf("\nFibonacci Series up to %d terms:\n", n);
    if (n >= 1) {
        printf("%d", t1);
    }
    if (n >= 2) {
        printf(", %d", t2);
    }
    for (i = 3; i <= n; ++i) {
        nextTerm = t1 + t2;
        printf(", %d", nextTerm);
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\n");
    return 0;
}

    
int main(){
    printf("hello world\n");
    int a = 10 , b = 20, c = 40;
    int sum = a+b;
    printf("the sum of %d and %d is :%d\n ", a,b,sum);
    int diff = b-a;
    printf("the difference of %d and %d is : %d\n", b,a,diff);
    int multiply = a*b;
    printf("the product of %d and %d is : %d\n",a,b,multiply);
    int divide = b/a;
    printf("the division of %d and %d is : %d\n", b,a,divide);
    int rem = b%a;  
    printf("the remainder of %d and %d is : %d\n", b,a,rem);
    int num1 = 20 , num2 = 30;
    printf("before swap (numbers) num1 and num2 =  %d %d\n", num1 ,num2);
    int temp = num1;
    num1 = num2;
    num2 = temp;
    printf("after swap (numbers) num1 and num2 = %d %d\n", num1,num2);
    int x=20;
    int y=50;
    swap_arthimatic(x,y);
    if(a>b){
        printf("num1 %d is greater than num2 %d\n", a,b);

    }else{
        printf("num2 i.e %d is greater than num1 i.e %d\n", b,a);
    }

    if(a>b && a>c){
        printf("num1  is greatest, num1 = %d\n", a);
    }
    else if (b>c){
        printf("num2  is greatest, num2 = %d\n", b);

    }
    else{
        printf("num3  is greatest, num3 = %d\n", c);
    }

    //  Check whether a number is even or odd
   
    int number;
    printf("Enter a number : ");
    scanf("%d",&number);
    if(number%2==0){
        printf("EVEN\n");

    }
    else{
        printf("ODD\n");
    }
    if(number>0){
        printf("+ve\n");
    }
    else{printf("-ve\n");
    }
    int k;
    printf("enter A Number : ");
    scanf("%d",&k);
    if(k%5==0 && k%11==0){
        printf("Divisible by Both\n");
    }else{
        printf("not divisible\n");
    }

    sum_natural(10);
    factorial(5);
    fibonacci(10);
// to check an armstrong number : 
    int num, originalNum, remainder, result = 0;
    printf("Enter a three-digit integer (e.g., 153): ");
    scanf("%d", &num);
    originalNum = num;  
    while (num != 0) {
        remainder = num % 10; 
        result += remainder * remainder * remainder;
        num /= 10; 
    }
    if (result == originalNum) {
        printf("%d is an ARMSTRONG number.\n", originalNum);
    } else {
        printf("%d is NOT an Armstrong number.\n", originalNum);
    }
    return 0;
}
