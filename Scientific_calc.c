#include<stdio.h>
#include<math.h>   
    void add();    
    void sub();
    void mul();
    void div();
    void rem();
    void sqr();
    void cube();
    void power();
    void squrt();
    void cubrt();
    void angle();
    void Percentage();      
    void fact();
    void palindrome();
    void amstrong();
    void fib();
    void gcd();
    void lcm();
    void prime();
    void factors();
    void son();
    void ascii();
    void main()
    {
        int n;
        printf("\n\t\t\t\t\t\t\t\t\tSCIENTIFIC CALCULATOR");
        printf("\n========================================================================================================================================================================");
        printf("\n1.Addition\t2.Subraction\t3.Multiplication\t4.division\t5.Remainder\t6.Square\t7.Cube\t8.Power\n9.Square_root\t10.Cube_root\t11.angle\t12.Percentage\t13.fibonacci_Series\t14.Factorial\t15.Palindrome\n16.Amstrong_Nnumber\t17.Prime\t18.LCM\t19.GCD\t20.Factors\t21.Sum_of_n\t22.Ascii");
        printf("\nEnter the Operation:");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            add();
            break;
        case 2:
            sub();
            break;
        case 3:
            mul();
            break;
        case 4:
            div();
            break;
        case 5:
            rem();
            break;
        case 6:
            sqr();
            break;
        case 7:
            cube();
            break;
        case 8:
            power();
            break;
        case 9:
            squrt();
            break;
        case 10:
            cubrt();
            break;
        case 11:
            angle();
            break;
        case 12:
            Percentage();
        case 13:
            fib();
            break;
        case 14:
            fact();
            break;
        case 15:
            palindrome();
            break;
        case 16:
            amstrong();
            break;
        case 17:
            prime();
            break;
        case 18:
            lcm();
            break;
        case 19:
            gcd();
            break;
        case 20:
            factors();
            break;
        case 21:
            son();
            break;
        case 22:
            ascii();
            break;
        }
}
void add()
{
    float a,b,c;
    printf("\nEnter num1 :");
    scanf("%f",&a);
    printf("\nEnter num2 :");
    scanf("%f",&b);
    c=a+b;
    printf("\n%f",c);
    main();
    }
void sub()
{
    float a,b,c;
    printf("\nEnter num1 :");
    scanf("%f",&a);
    printf("\nEnter num2 :");
    scanf("%f",&b);
    c=a-b;
    printf("\n%f",c);
    main();
    }
void mul()
{
    float a,b,c;
    printf("\nEnter num1 :");
    scanf("%f",&a);
    printf("\nEnter num2 :");
    scanf("%f",&b);
    c=a*b;
    printf("\n%f",c);
    main();
    }
void div()
{
    float a,b,c;
    printf("\nEnter dividend :");
    scanf("%f",&a);
    printf("\nEnter divisor :");
    scanf("%f",&b);
    c=a/b;
    printf("\n%f",c);
    main();
    }
void rem()
{
    float a,b,c;
    printf("\nEnter dividend :");
    scanf("%f",&a);
    printf("\nEnter divisior :");
    scanf("%f",&b);
    c=fmod(a,b);
    printf("\n%f",c);
    main();
} 
    void sqr() 
{
    float a;
    printf("\nEnter num :");
    scanf("%f",&a);
    printf("\n%f",a*a);
    main();
} 
    void cube()
{
    float a;
    printf("\nEnter num :");
    scanf("%f",&a);
    printf("\n%f",a*a*a);
    main();
}  
    void power() 
{
    float a,b;
    printf("\nEnter base :");
    scanf("%f",&a);
    printf("\nEnter power :");
    scanf("%f",&b);
    printf("\n%f",pow(a,b));
    main();
} 
    void squrt()
{
    float a;
    printf("\nEnter num :");
    scanf("%f",&a);
    printf("\n%f",sqrt(a));
    main();
}  
    void cubrt()  
{
    float a;
    printf("\nEnter num :");
    scanf("%f",&a);
    printf("\n%f",cbrt(a));
    main();
}
    void angle()  
{
    int a;
    float b;
    printf("\n1.sin\t2.cos\t3.tan\t4.cosec\t5.sec\t6.cot");
    printf("\nselect function :");
    scanf("%d",&a);
    printf("\nEnter degree :");
    scanf("%f",&b);
    switch(a)
    {
        case 1:
        printf("\n%f",sin(b));
        break;
        case 2:
        printf("\n%f",cos(b));
        break;
        case 3:
        printf("\n%f",tan(b));
        break;
        case 4:
        printf("\n%f",1/sin(b));
        break;
        case 5:
        printf("\n%f",1/cos(b));
        break;
        case 6:
        printf("\n%f",1/tan(b));
        break;
    }
    main();
}
    void Percentage()
{
        float a,b,c;
        printf("\nEnter num :");
        scanf("%f",&a);
        printf("\nEnter Percentage :");
        scanf("%f",&b);
        c=(a*b)/100;
        printf("\n%f",c);
        main();
}        
    void fact()
{ 
    int a,i,fact=1;
    printf("\nEnter num :");
    scanf("%d",&a);
    if (a==0||a==1)
    printf("1");
    else if(a<0)
    printf("\nDomain Error");
    else
    {
    for(i=1;i<=a;i++)
    {
        fact=fact*i;
    }
    printf("\n%d",fact);
    main();
    }
}
    void palindrome() 
{
 int n,rem,num,temp=0;
 printf("\nEnter num :");
 scanf("%d",&n);
 num=n;
 while(n!=0)
 {
    rem=n%10;
    temp=(temp*10)+rem;
    n=n/10;
 }
 if(num==temp)
 printf("\nPalindrome");
 else
 printf("\nNot Palindrome");
 main();
} 
    void amstrong()  
{
int n,rem,temp=0,num;
printf("\nEnter num :");
scanf("%d",&n);
num=n;
while(n!=0)
{
    rem=n%10;
    temp=temp+(rem*rem*rem);
    n=n/10;
}
if(temp==num)
printf("\nArmstrong");
else
printf("\nNot Armstrong");
main();
}
    void fib()  
{
int n1=0,n2=1,n3,n,i;
printf("\nEnter num :");
scanf("%d",&n);
printf("%d\t %d",n1,n2);
for(i=2;i<n;i++)
{
    n3=n1+n2;
    printf("\t%d",n3);
    n1=n2;
    n2=n3;
}
main();
}
    void prime()  
{
    int a,i,prime=0;
    printf("\nEnter num :");
    scanf("%d",&a);
    for(i=2;i<a;i++)
    {
        if(a%i==0)
        {
            prime=1;
            break;
        }
    }
    if(prime==1)
    {
        printf("\nNot Prime");
    }
    else
    {
        printf("\nPrime");
    }
    main();

}
    void lcm()  
{
int a,b,i,gcd;
printf("\nEnter num1 :");
scanf("%d",&a);
printf("\nEnter num2 :");
scanf("%d",&b);
for(i=1;i<=a&&i<=b;i++)
{
    if(a%i==0&&b%i==0)
    gcd=i;
}
printf("\n%d",(a*b)/gcd);
main();
}
    void gcd()
{
int a,b,i,gcd;
printf("\nEnter num1 :");
scanf("%d",&a);
printf("\nEnter num2 :");
scanf("%d",&b);
for(i=1;i<=a&&i<=b;i++)
{
    if(a%i==0&&b%i==0)
    gcd=i;
}
printf("\n%d",gcd);
main();
}  
    void factors()
{
int a,i;
printf("\nEnter num :");
scanf("%d",&a);
for(i=1;i<=a;i++)
{
    if(a%i==0)
    {
        printf("%d,",i);
    }
}
main();
}  
    void son()  
{
int a,i,sum=0;
printf("\nEnter num :");
scanf("%d",&a);
for(i=0;i<=a;i++)
{
sum=sum+i;
}
printf("\n%d",sum);
main();
}
void ascii()
{
    char a;
    printf("\nEnter Char :");
    scanf("\n%c",&a);
    printf("\n%d",a);
    main();
}