#include <stdio.h>
// #define pi 3.142
// #define SIZE 100
// typedef int* int_pointer;
int main(void)
{
    // int a = 15;
    // int* b = &a;
    // char c = 'z';
    // char* d = &c;
    // float e = 12.55;
    // float* f = &e;

    // int* p1, p2;
    // // int* p1;
    // // int p2;
    // int_pointer c1, c2;


    // printf("%d\n", a);
    // printf("%p\n", b); 
    // printf("%d\n", *b); 
    
    // printf("%c\n", c); 
    // printf("%p\n", d); 

    // printf("%f\n", e); 
    // printf("%p\n", f);

    int *pc, c10;
    int** test;
    c10 = 5;
    pc = &c10;
    *pc = 10;
    printf("Adress of c10 : %p\n", &c10);
    printf("Value of c10 : %d\n", c10);
    printf("Adress of pc : %p\n", &pc);

    test = &pc;
    printf("Value of test : %p\n", test);
    printf("Pointer to Value of test : %d\n", **test);


    return 0;
}