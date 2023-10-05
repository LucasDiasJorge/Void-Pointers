# Void Pointers
 
 https://www.youtube.com/watch?v=Vd-4eGnBAK8&ab_channel=JacobSorber

https://www.youtube.com/watch?v=t7CUti_7d7c&ab_channel=LowLevelLearning

Em C e C++, um ponteiro void é um tipo especial de ponteiro que pode apontar para qualquer tipo de dado, mas não pode ser diretamente desreferenciado. O tipo de dado apontado por um ponteiro void não é conhecido em tempo de compilação, mas deve ser especificado em tempo de execução. Isso torna o ponteiro void útil para passar endereços de memória genéricos para funções que precisam manipular dados de vários tipos.

Um ponteiro void não pode ser diretamente desreferenciado porque o compilador não sabe o tipo de dado que o ponteiro está apontando. Portanto, antes de usar o ponteiro void, você deve converter o ponteiro de volta para o tipo de dado apropriado usando um operador de conversão de tipo.

Por exemplo, para converter um ponteiro void de volta para um ponteiro de int em C:

```c
int *int_ptr;
void *void_ptr;
int value = 42;

void_ptr = &value;
int_ptr = (int*) void_ptr;

printf("The saved value in %p is %d\n", void_ptr, *int_ptr);
```
