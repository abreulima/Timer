/*
A  
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>


void core()
{
    printf("Hello Wordld!\n");
}

int main(int argc, char* argv[]) 
{
    clock_t current_t, delta_t;
    int callsPerSecond;
    double periodPerCall, timeSpent;

    if (argc < 2)
    {
        printf("Please insert the requests per minute value.\n");
        return 0;
    }

    callsPerSecond = atoi(argv[1]);
    periodPerCall = 1.0 / callsPerSecond;

    // 0.1 s per call, callsPerSecond is 10

    for(;;)
    {
        current_t = clock();

        /* */
        core();
        /* */

        delta_t = clock() - current_t;
        timeSpent = (double) delta_t / CLOCKS_PER_SEC;

        if (timeSpent < periodPerCall)
        {
            /* usleep is depecriated! */
            usleep((periodPerCall - timeSpent) * 1000000);
            // printf("Time to sleep : %f\n", periodPerCall - timeSpent);
        }

    }

    return 0;
}
