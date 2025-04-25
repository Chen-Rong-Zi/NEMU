#include <unistd.h>
#include <stdio.h>
#include <sys/time.h>
#include <NDL.h>
int main() {
    // struct timeval timeval;
    // struct timezone timezone;
    printf("here\n");
    // int res = gettimeofday(&timeval, &timezone);
    printf("before NDL init\n");
    NDL_Init(0);
    uint32_t usec = 0; // timestamp
    uint32_t stop = 0;
    printf("before timer test\n");
    while(1) {
        printf("loop\n");
        while ( usec - stop < 500 ) {
            usec = NDL_GetTicks();
            // printf("user = %d\n", usec);
        }
        stop = usec;
        printf("%d\n", stop);
    }
    return 0;
}
