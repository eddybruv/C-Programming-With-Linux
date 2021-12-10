/**
  * Activity:
  * Manipulate structures with functions
  */
 

#include <stdio.h>

struct date {
        int year;
        int month;
        int day;
    };

/* function prototypes */
void printDate(struct date);
void readDate(struct date *);
struct date advanceDay(struct date); 

int main(void) {
  struct date today, tomorrow;
  readDate(&today);
  printDate(today);
  tomorrow = advanceDay(today);
  printDate(tomorrow);
  return 0;
}

/* add your function definitions here */
void readDate(struct date * datePtr) {
  scanf("%d", &datePtr->year);
  scanf("%d", &datePtr->month);
  scanf("%d", &datePtr->day);
}

void printDate(struct date dateObj) {
  printf("%02d/%02d/%04d\n", dateObj.month, dateObj.day, dateObj.year);
}

struct date advanceDay(struct date dateObj) {

  if (dateObj.day >= 28) {
    switch (dateObj.month) {
      case 2:
        dateObj.day = (dateObj.day%28)+1;
        break;
      case 1:
      case 3:
      case 5:
      case 7:
      case 8:
      case 10:
      case 12:
        dateObj.day = (dateObj.day%31)+1;
        break;
      default:
        dateObj.day = (dateObj.day%30)+1;
    }
    
    if (dateObj.day == 1) {
      dateObj.month = (dateObj.month%12)+1;
      if(dateObj.month == 1) {
        dateObj.year++; 
      }
    }
    
  } else {
    dateObj.day += 1;
  }
  
  return dateObj;
}