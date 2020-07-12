#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<unistd.h>

const int limit = 2;

typedef struct repo{ //each Thread[i] takes input and stores output in Struct[i]
    long long start;
    long long end;
    long long answer;
}repository;

void *mySum(void *var){
    repository *s = (repository *)var;
    long long sum = 0;
    for(long long i = s->start ; i <= s->end; i++)
        sum += i;
    s->answer = sum;
    pthread_exit(0);
}

int main(){ //takes 22.521s while normal program takes 22.521s
    pthread_t tid[limit];
    long long num = 10000000000;
    long long mid = num/2;
    repository r[limit];
    r[0].start = 1; r[0].end = mid;
    r[1].start = mid+1; r[1].end = num;
    pthread_create(&tid[0], NULL, mySum, &r[0]); //thread's id,attributr,functionName,pass by reference
    pthread_create(&tid[1], NULL, mySum, &r[1]); 

    pthread_join(tid[0], NULL);
    pthread_join(tid[1], NULL);
    printf("Sum = %lld\n", r[0].answer + r[1].answer);
    exit(0);
}
