//
/*
Name:Lennis Bahati
Reg no:PA106/G/28806/25
Description :
Date:Week 6:Arrays
*/
/*

	int occupancy[5][10]={
	{1,2,3,4,5,6,7,8,9,10},	
	{1,2,3,4,5,6,7,8,9,10},
	{1,2,3,4,5,6,7,8,9,10},
	{1,2,3,4,5,6,7,8,9,10},
	{1,2,3,4,5,6,7,8,9,10}
	};
}*/
#include <stdio.h>

int main() {
    int occupancy[5][10];     // 5 floors, 10 rooms 
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
    
}
