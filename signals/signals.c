#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <signal.h>

int infinito = 1;

void signalHandler(int signalNumber){
    printf("Signal recieved %d \n", signalNumber);
    infinito = 0;
}

int main(){
    int pid;
    signal(10,signalHandler);
    pid = fork();
    if(pid == 0){
        printf("Soy el hijo\n");
        while(infinito){
            printf("no he salido");
            sleep(1);
        }
        printf("ya sali\n");
    } else {
        sleep(2);
        printf("soy el padre\n");
        kill(pid,10);
        for(;;);
    }
}