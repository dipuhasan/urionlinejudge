#include<bits/stdc++.h>
using namespace std;
#define PI 3.141592654
int main()
{
    double a,b, c;
    while(scanf("%lf %lf %lf", &a, &b, &c)==3){
            double angle = ((tan(a*PI/180.0)*b)+c)*5;
            //double tmp = angle * b;
            //double ans = (tmp+c)*5;

            printf("%.2lf\n", angle);

}


    return 0;
}
