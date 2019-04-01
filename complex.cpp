#include "header.h"

int sanity_check()
{
    char mass[200];
    int number;
    int n = 0;
    cin >> mass;

    if(mass[0] == 45)
    {
        n = 1;
        while((mass[n] != '\0') && (n != 8))
        {
            if((mass[n] > 57) || (mass[n] < 48) || (n == 7))
                return(1000000);
            else
                n++;
        }
    }
    else
    {
        n = 0;
        while((mass[n] != '\0') && (n != 7))
        {
            if((mass[n] > 57) || (mass[n] < 48) || (n == 6))
                return(1000000);
            else
                n++;
        }
    }

    number = transformation(mass, n);
    return number;
}

int transformation(char a[], int b)
{
    int ch = 0;
    int s = 1;
    for(int i = b - 1; i >= 0; i--)
    {
        switch(a[i])
        {
            case '0':
            ch = ch + 0 * s;
            break;
            case '1':
            ch = ch + 1 * s;
            break;
            case '2':
            ch = ch + 2 * s;
            break;
            case '3':
            ch = ch + 3 * s;
            break;
            case '4':
            ch = ch + 4 * s;
            break;
            case '5':
            ch = ch + 5 * s;
            break;
            case '6':
            ch = ch + 6 * s;
            break;
            case '7':
            ch = ch + 7 * s;
            break;
            case '8':
            ch = ch + 8 * s;
            break;
            case '9':
            ch = ch + 9 * s;
            break;
            case '-':
            ch = ch * (-1);
            break;
        }
        s = s * 10;
    }
    return ch;
}

int sum_x(int x_1, int x_2)
{
    return(x_1 + x_2);
}

int sum_y(int y_1, int y_2)
{
    return(y_1 + y_2);
}

int razn_x(int x_1, int x_2)
{
    return(x_1 - x_2);
}

int razn_y(int y_1, int y_2)
{
    return(y_1 - y_2);
}

int pr_x(int x_1, int y_1, int x_2, int y_2)
{
    return((x_1 * x_2)) - ((y_1 * y_2));
}

int pr_y(int x_1, int y_1, int x_2, int y_2)
{
    return((x_1 * y_2)) + ((y_1 * x_2));
}

int del_x(int x_1, int y_1, int x_2, int y_2)
{
    return(((x_1 * x_2)) + ((y_1 * y_2))/((x_2 * x_2) + (y_2 * y_2)));
}

int del_y(int x_1, int y_1, int x_2, int y_2)
{
    return(((y_1 * x_2)) - ((x_1 * y_2))/((x_2 * x_2) + (y_2 * y_2)));
}
