#include <stdio.h>
 
int main()
{
    int a = 10;
    void* ptr = &a;
    printf("%d\n", *(int*)ptr);
    char b = 'b';
    ptr = &b;
    printf("%c\n",*(char*)ptr);
    return 0;
}