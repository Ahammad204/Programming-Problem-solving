#include <stdio.h>
int main (){

    int x,y;
    int R,M;
    
    
    scanf("%d %d",&x,&y);

    R = (x - y)/2;

    M = (R + y);

    printf("%d %d ", M, R);

    return 0;
}