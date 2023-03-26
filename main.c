#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void sayHello(){
    printf("Hello !!!\n");
}

int main(){

    int x = 4; 
    int *pX = &x;
    int y = *pX;

    printf("X value is %d\n",x);
    printf("Pointer pX address is %p\n",&pX);
    printf("Pointer pX pointing to %d\n",pX);
    printf("Address in pX has value equals to %d\n",*pX);

    int *ptr;
    int value = 42;

    ptr = &value;

    printf("The value saved in %p is %d\n", ptr, *ptr);

    printf("ptr address is %p\n", ptr);

    printf("ptr + 2 address is %p\n", ptr+2); // 8 bytes = 2 ints

    sayHello();

    int z = 0xFEEDBEED;
    void *p = &z;
    int *ip = malloc(sizeof(int)); // in C, malloc return a void *
    p = ip;

    *ip = 0x00C0FFEE;

    *(int*)p = 0xDEADBEEF;

    printf("sizeof(void*) is %zu\n",sizeof(p));
    printf("sizeof(int*) is %zu\n",sizeof(ip));

    printf("p --> %p (%x)\n",p,*(int*)p);
    printf("ip --> %p (%x)\n",ip,*ip);

    free(ip);

    return 0;

}