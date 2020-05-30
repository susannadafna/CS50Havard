#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void) {

float moneyInDollars = get_float("Enter a sum of dollars:\n");

    do {
        printf("Sum of dollars:\n")
    } while ()


int moneyInCents = round(moneyInDollars * 100);
int coinQuant = 0;
int r = 0;
int tempNum;
int q = 25
int d = 10
int p = 5
int c = 1


if (moneyInCents >= q) {
    r = moneyInCents % q;
    tempNum = moneyInCents - r;
    coinQuant = coinQuant + (tempNum / q)
    moneyInCents = r
    }


if (moneyInCents >= d) {
    r = moneyInCents % d;
    tempNum = moneyInCents - r;
    coinQuant = coinQuant + (tempNum / d)
    moneyInCents = r
    }

if (moneyInCents >= p) {
    r = moneyInCents % p;
    tempNum = moneyInCents - r;
    coinQuant = coinQuant + (tempNum / p)
    moneyInCents = r
    }

if (moneyInCents >= c) {
    r = moneyInCents % c;
    tempNum = moneyInCents - r;
    coinQuant = coinQuant + (tempNum / c)
    moneyInCents = r
    }

    return coinQuant;

    printf("The total of coins you'll receive is: ", coinQuant)

    }

