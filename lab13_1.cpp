#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}

void stat(const double A[],int N,double B[])
{
    double M=0,SD=0,GM=1,HM=0,MX=A[0],MN=A[0];
    for(int i=0;i<N;i++)
    {
        M+=A[i];
    }
    B[0]=M/N;
    for(int i=0;i<N;i++)
    {
        SD+=pow((A[i]-B[0]),2);
    }
    B[1]=sqrt(SD/N);
    for(int i=0;i<N;i++)
    {
        GM*=A[i];
    }
    double x=1.0/N;
    B[2]=pow(GM,x);
    for(int i=0;i<N;i++)
    {
        HM+=1/A[i];
    }
    B[3]=N/HM;
    for(int i=0;i<N;i++)
    {
        if(MX<A[i])
        {
            MX=A[i];
        }
    }
    B[4]=MX;
    for(int i=0;i<N;i++)
    {
        if(MN>A[i])
        {
            MN=A[i];
        }
    }
    B[5]=MN;
}