#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
#include <sys/param.h>
#include <sys/sem.h>
#include <sys/resource.h> //getrlimit

// use the online man pages to find these (I copied the discription in the lab and searched the man pages)
int main() {
    printf("Maximum number of semaphores per process (static): %d\n", _POSIX_SEM_NSEMS_MAX);
    printf("Maximum value of a counting semaphore (static): %d\n", _POSIX_SEM_VALUE_MAX);
    // I can't find the empircal ones
    printf("Maximum value of a counting semaphore (empirical): %d\n", semncnt);
    printf("Maximum size of a shared memory segment (empirical): %d\n", shmget);
    int page = sysconf(PAGESIZE);
    printf("Page size in bytes (dynamic): %d\n", page);
    long six = sysconf(_SC_PHYS_PAGES);
    printf("Physical pages in a system (dynamic): %ld\n", six);
    long seven = sysconf(_SC_CHILD_MAX);
    printf("Maximum number of processes per user (dynamic): %ld\n", seven);
    int filesize = sysconf(FILESIZEBITS)
    printf("Maximum filesize in bytes (dynamic): %d\n", filesize);
    int open = sysconf(SC_OPEN_MAX);
    printf("Maximum number of open files, hard limit (dynamic): %d\n", open);
    printf("Maximum number of open files, soft limit (dynamic): \n");
    int clock = clock_getres(clockid);
    printf("Clock resolution in milliseconds (dynamic): %d\n", clock);
    return 0;
}
