#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

int g = 0;

void *myThreadFun(void *vargp)
{
    int *myid = (int *)vargp;

    static int s = 0;
    int x =  5;

    ++s; ++g; ++x;

    printf("Thread ID: %d, Static: %d, Global: %d Local: %d\n", *myid, ++s, ++g, ++x);
}

int main()
{
    int i;
    pthread_t tid;

    for (i = 0; i < 3; i++)
        pthread_create(&tid, NULL, myThreadFun, (void *)&tid);

    pthread_exit(NULL);
    return 0;
}
