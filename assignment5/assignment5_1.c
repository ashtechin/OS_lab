#include <pthread.h>
#include <stdio.h>
int num = 0;
long int fib[500];
void *fun(void *param)
{
    if (num <= 0)
    pthread_exit(0);
    fib[0] = 0;
    if (num > 1)
    {
        fib[1] = 1;
        for (int i = 2; i < num; i++)
        fib[i] = fib[i-1] + fib[i-2];

    }
    pthread_exit(0);

}
int main(int argc, char *argv[])
{
    pthread_t tid;
    pthread_attr_t at;
    pthread_attr_init(&at);
    printf("Enter the number to print n fibonacci numbers: ");
    scanf("%d", &num);
    if (num > 500)
    {
        printf("Printing till n = 500\n");
        num = 500;

    }
    pthread_create(&tid, &at, fun, argv[1]);
    pthread_join(tid, NULL);
    if (num > 0)
    printf("%ld", fib[0]);
    for (int i = 1; i < num; i++)
    printf(" %ld", fib[i]);
    printf("\n");
    return 0;

}
