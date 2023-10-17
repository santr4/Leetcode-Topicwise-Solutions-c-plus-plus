#include<stdio.h>

void geeks(){
    int var = 10;
    int* ptr;

    ptr = &var;

    printf("%d\n",ptr);
    printf("%d\n",var);
    printf("%d\n",*ptr);
}
int main(){
    geeks();
    return 0;
}