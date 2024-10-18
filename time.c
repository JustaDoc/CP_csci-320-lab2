#include <sys/time.h>

double elapsed_time(struct timeval* start_time, struct timeval* end_time){
    //TODO: return the difference between end_time and start_time.
    double start = start_time -> tv_usec + (start_time->tv_sec * 1000000.0);

    double fin = end_time -> tv_usec + (end_time->tv_sec * 1000000.0);

    double val = (fin-start)/1000000.0;

    //return 0.0;
    return val;
}