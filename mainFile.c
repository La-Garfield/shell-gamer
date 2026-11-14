#include <stdio.h>

int main() {
    /*map size
    
    -Giving "height = 20" means robot will have 18 free height spaces
    -Same with width
    -Best to use odd numbers (1,3,5...) so the robot can appear at the center

    */
    int mapAHeight = 7;
    int mapAWidth = 15;
    int mapBHeight = 7;
    int mapBWidth = 15;
    
    //Space between maps
    int spaceMaps = 8;

    /*
    
        robotALoc[2] = {x, y} shows where the robotA will appear
        robotBLoc[2] = {x, y} shows where the robotB will appear
        -x and y start to count from 0 rather than 1 like with mapAHeight and mapAWidth

    */
    int robotALoc[2] = {7, 3};
    int robotBLoc[2] = {7, 3};

    
    for (int i = 0; i < mapAHeight; i++) {
        if (i == 0 || i == mapAHeight - 1) {
            //Robots A walls of the map
            for (int j = 0; j < mapAWidth; j++) {
                printf("#");
            }
            for (int i = 0; i < spaceMaps; i++) {
                printf(" ");
            }
            //Robots B walls of the map
            for (int j = 0; j < mapBWidth; j++) {
                printf("#");
            }
            printf("\n");
        } else {
            //Robots A map
            printf("#");
            for (int j = 1; j < mapAWidth - 1; j++) {
                if (robotALoc[1] == i && robotALoc[0] == j) {
                    printf("A");
                } else {
                    printf(" ");
                }
            }
            printf("#");
            for (int i = 0; i < spaceMaps; i++) {
                printf(" ");
            }
            //Robots B map
            printf("#");
            for (int j = 1; j < mapBWidth - 1; j++) {
                if (robotBLoc[1] == i && robotBLoc[0] == j) {
                    printf("B");
                } else {
                    printf(" ");
                }
            }
            printf("#");

            printf("\n");
        }
    }
}