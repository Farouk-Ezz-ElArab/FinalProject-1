#include <stdlib.h>
#include <stdio.h>
#include <curses.h>
#include "reservations.h"

int main()
{
    FILE *fptr;
    RoomReservation(fptr, "Reservation.txt", "a", 0 ,"Zeyad Hasan", "535585855", "Testmail@gmail.com", "01094933404");
    printf("hello world : ");
    return 0;
}