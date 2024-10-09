#include "my_util.h"
#include <cstdio>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//function definition
void rand_array(int n, int x[], int min, int max)
{
    for(int i = 0;i<n;i++)
    {
        x[i]=min+rand()% (max-min+1);
    }
}

void rand_array_float(float n, float x[], float min, float max)
{
    for(int i = 0;i<n;i++)
    {
        x[i]=min + rand() % (max - min + 1);
    }
}

void print_array(int n, int x[], char label[])
{
    printf("\n %s", label[]);

    for(int i=0;i<n;i++)
    {
        printf("%d ", x[i]);
    }
}

int get_sum(int n, int x[])
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum = sum + x[i];
    }
    return(sum);
}

float get_ave(int n, int x[])
{
    int sum;
    int ave;

    sum=get_sum(n, x);
    ave = (float) sum / n;

    return(ave);
}

//sequence

int delete(int n, int x[], int y[], int k)
{
    for(int i=0; i<n; i++)
    {
        if (i<k) y[i] = x[i];
        else y[i] = x[i+1];

    }
}
int insert(int n, int x[], int y[], int k, int p)
{
    int ny = n+1;
    for(int i=0; i<ny; i++)
    {
        if (i<k) y[i] = x[i];
        else if (i == k) y[i] = p;
        else y[i] = x[i-1];

    }
    return(ny);
}
double calculate_discriminant(int a, int b, int c)
{
    return (b * b) - (4 * a * c);
}

#ifndef MY_UTIL_C
#define MY_UTIL_C

#endif // MY_UTIL_C
