#include <stdio.h>
int main(){
    
    int X,M,Y,T;

    scanf("%d %d %d",&X,&M,&Y);

    T = (X*M)/(X+Y);
    printf("%d",T);

    return 0;

}