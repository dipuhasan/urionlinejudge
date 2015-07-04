#include<iostream>
#include<algorithm>
#include<cstdio>

using namespace std;
int aa,bb,cc;

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    aa=a; bb=b; cc=c;
    if(a>b)
        swap(a,b);
    if(b>c)
        swap(b, c);
    if(a>b)
        swap(a, b);
    printf("%d\n%d\n%d\n", a, b, c);
    printf("\n");
    printf("%d\n%d\n%d\n", aa, bb, cc);

    return 0;
}
