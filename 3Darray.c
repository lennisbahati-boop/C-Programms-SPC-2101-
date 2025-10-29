/*
Name:Lennis Bahati
Reg no:PA106/G/28806/25
Description :
Date:Week 6:Arrays
*/
/*
#include<stdio.h>
int main() {
    int chain[3][5][10];     //3 branches, 5 floors, 10 rooms 
    int occupied, vacant, floor, room;
    
    printf("Hotel Room Occupancy \n");

    //Input 
    printf("\nEnter room occupancy (1 for occupied and 0 for vacant):\n");
    
    for (floor = 0; floor < 5; floor++) {//iterate the floors
        printf("\n ______Floor %d_____\n", floor + 1);
        for (room = 0; room < 10; room++) {//iterate the rooms
            printf("Room %d: ", room + 1);
            scanf("%d", &occupancy[floor][room]);
        }
    }

    // Display number of occupied and vacant rooms per floor
    printf("\n Occupied and Vacant Rooms\n");
    for (floor = 0; floor < 5; floor++) {
        occupied = 0;
        vacant = 0;

        for (room = 0; room < 10; room++) {
            if (occupancy[floor][room] == 1)
                occupied++;
            else
                vacant++;
        }

        printf("Floor %d - Occupied: %d, Vacant: %d\n",
               floor + 1, occupied, vacant);
    }
 return 0;
    
} */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int chain[3][5][10];  // 3 branches, 5 floors, 10 rooms
    int branch, floor, Total_occupied_rooms,room = 0;

    srand(time(0)); 

    printf(" Multi-Branch Hotelr \n");

    //  random occupancy (1 for occupied, 0 for vacant)
    for (branch = 0; branch < 3; branch++) {
        for (floor = 0; floor < 5; floor++) {
            for (room = 0; room < 10; room++) {
                chain[branch][floor][room] = rand() % 2; // Random 0 or 1
            }
        }
    }

    //  Count total occupied rooms in all branches
    for (branch = 0; branch < 3; branch++) {
        for (floor = 0; floor < 5; floor++) {
            for (room = 0; room < 10; room++) {
                if (chain[branch][floor][room] == 1)
                    Total_occupied_rooms++;
            }
        }
    }

    //  Display total occupied rooms in all branches
    printf("\nTotal number of occupied rooms across all branches is: %d\n", Total_occupied_rooms);

    return 0;
}
