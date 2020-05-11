/* Calculate the elapsed hours between a start and finishing time
*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    int start_hour, start_min, start_sec,
        finish_hour, finish_min, finish_sec;
    double elapsed_hours;

    printf("Enter start time (hh:mm:ss): ");
    scanf("%d:%d:%d", &start_hour, &start_min, &start_sec);

    printf("Enter finish time (hh:mm:ss): ");
    scanf("%d:%d:%d", &finish_hour, &finish_min, &finish_sec);

    printf("When start time is %02d:%02d:%02d and ", start_hour, start_min, start_sec);
    printf("finish time is %02d:%02d:%02d, ", finish_hour, finish_min, finish_sec);

    /* convert start and finish times to total number of seconds, 
       calculate difference and convert back to hours 
    */
    elapsed_hours = ((finish_hour * 3600 + finish_min * 60 + finish_sec) -
                     (start_hour * 3600 + start_min * 60 + start_sec)) /
                    3600.0;

    printf("elapsed hours is %.2lf\n", elapsed_hours);

    return 0;
}