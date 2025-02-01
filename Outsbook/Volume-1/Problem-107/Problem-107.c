 #include<stdio.h>
 int main(){
    int X,D1,D2,T,A;

    scanf("%d %d %d", &X,&D1,&D2);

    T = (X*D1)/D2;
    A = T - X;
    printf("%d",A);

    return 0;
 }