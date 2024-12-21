#include <stdio.h>
#include <unistd.h>

int main() {
    int fd[2];
    pipe(fd);
    if (fork() == 0) {
        char msg[10];
        read(fd[0], msg, sizeof(msg));
        printf("Child received: %s\n", msg);
    } else {
        write(fd[1], "Hello", 6);
    }
    return 0;
}
