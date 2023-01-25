#include <stdio.h>
#include <conio.h>
#include <math.h>

float F(float X)
{
    return X*sinX + 1;
}

float Integral(float A, float B, int N)
{
    int I;
    float P = A;
    float Sum =F(P);
    float H = (B-P)/N;

    for (int I = 1; I < N; ++I)
    {
        A += H;
        Sum += 2*F(P);
    }
    Sum += F(B);
    return (H/2*Sum);
}

void main()
{
    printf("%f", Integral(1,3,10));
}
