#include<stdio.h>
void main(){
    int x=5;

    printf("%d\n",x);
    printf("%p\n",&x);

    int *ptr=&x;
    printf("%p\n",ptr);
    printf("%p",&ptr);
}
