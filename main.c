#include<stdio.h>
float compound(float p, float q, float r, float n);
int main()
{
    float p,q,r,n,c;
    // p = principle,q = how many times in a year you have to pay the interest,r=rate of interest,n= number of years,c=compound interest.
    printf("enter the values for p,q,r,n =\t ");
    scanf("%f%f%f%f",&p,&q,&r,&n);
    c = compound(p,q,r,n);
    printf("compound interest is %f",c);
    return 0;
}
float compound(float p,float q,float r, float n)
{
    float nq,b=1,a,c;
    nq=n*q;
    while(nq != 0)
    {
        b *= (1+r/100);
        nq--;
    }
    a= p*b;
    c=a-p;
    return c;
}