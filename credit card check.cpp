#include<stdio.h>
#include<math.h>
int main(void)
{
    long long int number, n, r = 100, y = 0, x, q, z = 10, g = 1, t = 0, m, s = 10, b, d, e, l;
    int count = 0, start;
    do
    {
        printf("the card number is \n");
        scanf("%lld",&number);
    }
    while (number < 0);
    n = number;
    m = n;
    l = n;
    while (l > r / 10)
    {
        x = l % r;
        x = x / z;
        x = x * 2;
        if (x % 10 >= 0)
        {
            d = x / 10;
            e = x % 10;
            x = d + e;
        }
        z = z * 100;
        r = r * 100;
        y = y + x;
    }
    while (m > s / 10)
    { 
        q = m % s;
        q = q / g;
        s = s * 100;
        g = g * 100;
        t = t + q;
    }
    b = y + t;
    do
    {
        count ++;
        number = number / 10;
    }
    while (number > 0);
    if (count == 15)
    {
        if (n / 10000000000000 == 34 || n / 10000000000000 == 37)
        {
            if (b % 10  == 0)
            {
                printf("AMEX\n");
            }
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else if (count == 16 || count == 13)
    {
        if (n / 1000000000000 == 4 || n / 1000000000000000 == 4)
        {
            if (b % 10  == 0)
            {
                printf("VISA\n");
            }
            else
            {
                printf("INVALID\n");
            }
        }
        else if (n / 100000000000000 == 51 || n / 100000000000000 == 52 || n / 100000000000000 == 53 
                 || n / 100000000000000 == 54 || n / 100000000000000 == 55)
        {
            if (b % 10  == 0)
            {
                printf("MASTERCARD\n");
            }       
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else 
    {
        printf("INVALID\n");
    }

}

