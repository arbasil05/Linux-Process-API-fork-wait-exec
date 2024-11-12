#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    int pid;
    pid = fork();
    if (pid == 0) {
        printf("Iam Child my pid is %d\n", getpid());
        printf("My parent pid is %d\n", getppid());
        exit(0);
    } else {
        printf("Iam parent my pid is %d\n", getpid());
        sleep(100);
        exit(0);
    }
}
