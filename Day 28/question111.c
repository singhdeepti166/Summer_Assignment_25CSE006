//QUESTION NO 111
#include <stdio.h>
struct Ticket {
    int ticketNo;
    char passengerName[50];
    char source[30];
    char destination[30];
    float fare;
};
int main() {
    struct Ticket t[5];
    int i;
    printf("Enter details of 5 tickets:\n");
    for(i = 0; i < 5; i++) {
        printf("\nTicket %d\n", i + 1);

        printf("Enter Ticket Number: ");
        scanf("%d", &t[i].ticketNo);

        printf("Enter Passenger Name: ");
        scanf(" %[^\n]", t[i].passengerName);

        printf("Enter Source: ");
        scanf("%s", t[i].source);

        printf("Enter Destination: ");
        scanf("%s", t[i].destination);

        printf("Enter Fare: ");
        scanf("%f", &t[i].fare);
    }
    printf("\n===== Ticket Booking Records =====\n");
    for(i = 0; i < 5; i++) {
        printf("\nTicket %d\n", i + 1);
        printf("Ticket Number  : %d\n", t[i].ticketNo);
        printf("Passenger Name : %s\n", t[i].passengerName);
        printf("Source         : %s\n", t[i].source);
        printf("Destination    : %s\n", t[i].destination);
        printf("Fare           : %.2f\n", t[i].fare);
    }
  return 0;
}

