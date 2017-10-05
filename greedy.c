#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <math.h>

int main(void)
{
float b;
do
    {
    printf("please give balance owing: ");
    b = get_float();
    }
while (b<0);

int v;
int q = 25;
int d = 10;
int n = 5;
int p = 1;
int count=0;

b=b*100;
int c=round(b);
int balance = c;
printf("%i\n", balance);
//printf("%.2f\n", round(c));



while(balance>=q)
    {
    v=balance/q;
    count=count+v;
    balance=balance-(q*v);
    }
while(balance>=d)
    {
    v=balance/d;
    count=count+v;
    balance=balance-(d*v);
    }
while(balance>=n)
    {
    v=balance/n;
    count=count+v;
    balance=balance-(n*v);
    }
while(balance>=p)
    {
    v=balance/p;
    count=count+v;
    balance=balance-(p*v);
    }

printf("the number of coins needed is: %i\n", count);
printf("balance after coins paid: %i\n", balance);






}