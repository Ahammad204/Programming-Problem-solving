#include <stdio.h>
int main(){

    int D,Q,R,T;

    scanf("%d %d",&D,&Q);

    R = D / 3;

    T = (D * Q) + R;

    printf("%d",T);

    return 0;
}