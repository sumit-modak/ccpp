#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>
#include<stdio.h>

int main() {
    pid_t pid = fork();
    printf("PID: %d\n", pid);

    if(pid > 0) {
        printf("parent process\n");
    } else if(pid == 0) {
        printf("child process\n");
    } else {
        fprintf(stderr, "fork failed");
        exit(1);
    }

    return 0;
}
