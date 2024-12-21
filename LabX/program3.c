#include <stdio.h>
#include <unistd.h>
#include <signal.h>

void handler(int sig) {
    printf("Child received signal: %d\n", sig);
}

int main() {
    if (fork() == 0) {
        signal(SIGUSR1, handler);
        pause();
    } else {
        sleep(1);
        kill(getpid() + 1, SIGUSR1);
    }
    return 0;
}
