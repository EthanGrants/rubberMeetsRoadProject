/***************************************************************
 *Class:                     CSCI 112                                                                                        *
 *Instructor:               Ronald Burgher                                                                              *
 *Programmer:          Ethan Grant                                                                                    *
 *Project:                  Where the Rubber Meets the Road Project                                    *
 **********************************************************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    // Declare Variables
    char tireUse[100];
    char tireWidth[100];
    char sideWall[100];
    char tireConstruction[100];
    char rimDiameter[100];
    char loadIndex[100];
    char speedRating[100];
    
    // Aoti conversions
    int numTireWidth = 0;
    int numSideWall = 0;
    int numRimDiameter = 0;
    int numLoadIndex = 0;
    
    // Get user input
    char input [15] = {0};
    printf("Enter input: ");
    fgets(input,15, stdin);
    
    // Split apart and set values
    tireUse [0] = input[0];
    tireWidth [0] = input[1];
    tireWidth [1] = input[2];
    tireWidth[2] = input[3];
    sideWall[0] = input[5];
    sideWall[1] = input[6];
    tireConstruction[0] = input[7];
    rimDiameter[0] = input[8];
    rimDiameter[1] = input[9];
    loadIndex[0] = input[11];
    loadIndex[1] = input[12];
    speedRating[0] = input[13];
    
    if (tireUse[0] != 'P')
    {
        printf("Intended use of the tire is not valid.\n");
        return 0;
    }
    
    numTireWidth = atoi(tireWidth);
    if (numTireWidth < 155 || numTireWidth > 305)
    {
        printf("Tire width in meters is not valid");
        return 0;
    }
    
    numSideWall = atoi(sideWall);
    if (numSideWall < 30 || numSideWall > 70)
    {
        printf("Tire sidewall height ratio to width is not valid");
        return 0;
    }
    
    if (tireConstruction[0] != 'R' && tireConstruction[0] != 'B')
    {
        printf("Tire construction is not valid.\n");
        return 0;
    }
    
    numRimDiameter = atoi(rimDiameter);
    if (numRimDiameter < 14 || numRimDiameter > 22)
    {
        printf("Rim diameter in inches is not valid.\n");
        return 0;
    }
    
    numLoadIndex = atoi(loadIndex);
    if (numLoadIndex < 50 || numLoadIndex > 99)
    {
        printf("Load index is not valid.\n");
        return 0;
    }
    
    if ((speedRating[0] != 'S')&'T'&'U'&'H'&'V')
    {
        printf("Speed Rating is not valid.\n");
    }
    printf("Code is valid");
    return 0;
}

