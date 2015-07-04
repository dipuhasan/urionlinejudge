#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10001], N, i, c1, c2;

    while(scanf("%d", &N)==1){
            if(N==0) break;
    c1 = c2 = 0;
        for(i = 0; i<N; i++){
         scanf("%d", &a[i]);
        if(a[i] == 0)
            c1++;
        if(a[i] == 1)
            c2++;
    }
    printf("Mary won %d times and John won %d times\n", c1,c2);

    }


    return 0;
}
