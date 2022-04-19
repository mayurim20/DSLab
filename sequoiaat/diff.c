#include <stdio.h>
struct TIME {
   int seco;
   int minu;
   int hours;
};

void differenceBetweenTimePeriod(struct TIME t1,
                                 struct TIME t2,
                                 struct TIME *diff);

int main() {
   struct TIME startTime, stopTime, diff;

   printf("Enter the start time. \n");
   printf("Enter hours, minutes and seconds: ");
   scanf("%d %d %d", &startTime.hours,
         &startTime.minu,
         &startTime.seco);

   printf("Enter the stop time. \n");
   printf("Enter hours, minutes and seconds: ");
   scanf("%d %d %d", &stopTime.hours,
         &stopTime.minu,
         &stopTime.seco);

   
   differenceBetweenTimePeriod(startTime, stopTime, &diff);
   printf("\nTime Difference: %d:%d:%d - ", startTime.hours,
          startTime.minu,
          startTime.seco);
   printf("%d:%d:%d ", stopTime.hours,
          stopTime.minu,
          stopTime.seco);
   printf("= %d:%d:%d\n", diff.hours,
          diff.minu,
          diff.seco);
   return 0;
}



void differenceBetweenTimePeriod(struct TIME start,
                                 struct TIME stop,
                                 struct TIME *diff) {
   while (stop.seco > start.seco) {
      --start.minu;
      start.seco += 60;
   }
   diff->seco = start.seco - stop.seco;
   while (stop.minu > start.minu) {
      --start.hours;
      start.minu += 60;
   }
   diff->minu = start.minu - stop.minu;
   diff->hours = start.hours - stop.hours;
}
