// Tried to create a evaluation to see if a card number attends to Luhn's algorithm and if it's a Visa, Master or American Express;
// Could not use arrays because the week 1 didn't cover it. Plus, at this point in May 2020 I don't domain the usage of arrays yet.
// it's a cluster phuck because I can't also (tried) use power function properly in C. Kept generating errors.
// I've abandoned that challenge for now. Mayve one day I'll get back to it. 

#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{

long long cardNum;

do
{
    cardNum = get_long_long("Card number:\n");
}
while (cardNum <= 0);

if (340000000000000 <= cardNum < 380000000000000)
{

int o = cardNum % 10;
int n = (cardNum % 100) / 10;
int m = (cardNum % 1000) / 100;
int l = (cardNum % 10000) / 1000;
int k = (cardNum % 100000) / 10000;
int j = (cardNum % 1000000) / 100000;
int i = (cardNum % 10000000) / 1000000;
int h = (cardNum % 100000000) / 10000000;
int g = (cardNum % 1000000000) / 100000000;
int f = (cardNum % 10000000000) / 1000000000;
int e = (cardNum % 100000000000) / 10000000000;
int d = (cardNum % 1000000000000) / 100000000000;
int c = (cardNum % 10000000000000) / 1000000000000;
int b = (cardNum % 100000000000000) / 10000000000000;
int a = (cardNum % 1000000000000000) / 100000000000000;

int checkSum1 = 2 * (n + l + j + h + f + d + b);
int checkSum2 = (o + m + k + i + g + e + c + a);

    if (checkSum1 + checkSum2 % 2 == 0)
    {
        printf("AMEX\n");
    }
}

else if ((5100000000000000 <= cardNum <= 5599999999999999 && cardNum % 10000000000000000 / 100000000000000 == 51) ||
            (5100000000000000 <= cardNum <= 5599999999999999 && cardNum % 10000000000000000 / 100000000000000 == 52) ||
            (5100000000000000 <= cardNum <= 5599999999999999 && cardNum % 10000000000000000 / 100000000000000 == 53) ||
            (5100000000000000 <= cardNum <= 5599999999999999 && cardNum % 10000000000000000 / 100000000000000 == 54) ||
            (5100000000000000 <= cardNum <= 5599999999999999 &&cardNum % 10000000000000000 / 100000000000000 == 55))
{

int p = cardNum % 10;
int o = (cardNum % 100) / 10;
int n = (cardNum % 1000) / 100;
int m = (cardNum % 10000) / 1000;
int l = (cardNum % 100000) / 10000;
int k = (cardNum % 1000000) / 100000;
int j = (cardNum % 10000000) / 1000000;
int i = (cardNum % 100000000) / 10000000;
int h = (cardNum % 1000000000) / 100000000;
int g = (cardNum % 10000000000) / 1000000000;
int f = (cardNum % 100000000000) / 10000000000;
int e = (cardNum % 1000000000000) / 100000000000;
int d = (cardNum % 10000000000000) / 1000000000000;
int c = (cardNum % 100000000000000) / 10000000000000;
int b = (cardNum % 1000000000000000) / 100000000000000;
int a = (cardNum % 10000000000000000) / 1000000000000000;

int checkSum1 = 2 * (b + d + f + h + j + l + n + p);
int checkSum2 = (a + c + e + g + i + k + m + o);

    if (checkSum1 + checkSum2 % 2 == 0)
    {
        printf("MASTERCARD\n");
    }
}

else if ((4000000000000 <= cardNum && cardNum % 10000000000000 / 1000000000000 == 4) ||
        (cardNum <= 4999999999999 && cardNum % 1000000000000000 / 100000000000000 == 4))
{

int m = cardNum % 10;
int l = (cardNum % 100) / 10;
int k = (cardNum % 1000) / 100;
int j = (cardNum % 10000) / 1000;
int i = (cardNum % 100000) / 10000;
int h = (cardNum % 1000000) / 100000;
int g = (cardNum % 10000000) / 1000000;
int f = (cardNum % 100000000) / 10000000;
int e = (cardNum % 1000000000) / 100000000;
int d = (cardNum % 10000000000) / 1000000000;
int c = (cardNum % 100000000000) / 10000000000;
int b = (cardNum % 1000000000000) / 100000000000;
int a = (cardNum % 10000000000000) / 1000000000000;

int checkSum1 = 2 * (b + d + f + h + j + l);
int checkSum2 = (a + c + e + g + i + k + m);

    if (checkSum1 + checkSum2 % 2 == 0)
    {
        printf("VISA\n");
    }
}

else if (4000000000000000 <= cardNum <= 4999999999999999)
{


int p = cardNum % 10;
int o = (cardNum % 100) / 10;
int n = (cardNum % 1000) / 100;
int m = (cardNum % 10000) / 1000;
int l = (cardNum % 100000) / 10000;
int k = (cardNum % 1000000) / 100000;
int j = (cardNum % 10000000) / 1000000;
int i = (cardNum % 100000000) / 10000000;
int h = (cardNum % 1000000000) / 100000000;
int g = (cardNum % 10000000000) / 1000000000;
int f = (cardNum % 100000000000) / 10000000000;
int e = (cardNum % 1000000000000) / 100000000000;
int d = (cardNum % 10000000000000) / 1000000000000;
int c = (cardNum % 100000000000000) / 10000000000000;
int b = (cardNum % 1000000000000000) / 100000000000000;
int a = (cardNum % 10000000000000000) / 1000000000000000;

int checkSum1 = 2 * (b + d + f + h + j + l + n + p);
int checkSum2 = (a + c + e + g + i + k + m + o);

    if (checkSum1 + checkSum2 % 2 == 0)
    {
        printf("VISA\n");
    }
}

else
{
    printf("INVALID\n");
}


} // void brack
