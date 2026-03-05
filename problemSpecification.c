#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
#include <sys/param.h>
#include <sys/sem.h>
#include <sys/resource.h> //getrlimit
#include <sys/shm.h>
#include <time.h>

int main() {
    printf("1. Maximum number of semaphores per process (static): %d\n", _POSIX_SEM_NSEMS_MAX);
    printf("2. Maximum value of a counting semaphore (static): %d\n", SEM_VALUE_MAX);
    long three = sysconf(SETVAL);
    printf("3. Maximum value of a counting semaphore (empirical): %ld\n", three);
    //long four = sysconf(_SC_SHMMAX) not working;
    //printf("4. Maximum size of a shared memory segment (empirical): %ld\n", four); not working
    long five = sysconf(_SC_PAGE_SIZE);
    printf("5. Page size in bytes (dynamic): %ld\n", five);
    long six = sysconf(_SC_PHYS_PAGES);
    printf("6. Physical pages in a system (dynamic): %ld\n", six);
    long seven = sysconf(_SC_CHILD_MAX);
    printf("7. Maximum number of processes per user (dynamic): %ld\n", seven);
    long eight = pathconf(".", _PC_FILESIZEBITS);    
    printf("8. Maximum filesize in bytes (dynamic): %ld\n", eight);
    long nine = sysconf(_SC_OPEN_MAX);
    printf("9. Maximum number of open files, hard limit (dynamic): %ld\n", nine);
    long ten = sysconf(RLIMIT_NOFILE);
    printf("10. Maximum number of open files, soft limit (dynamic): %ld\n", ten);
    long eleven = sysconf(CLOCK_REALTIME);    
    printf("11. Clock resolution in milliseconds (dynamic): %ld\n", eleven);
    return 0;
}
