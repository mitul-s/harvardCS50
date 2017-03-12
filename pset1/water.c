#include <cs50.h>
#include <stdio.h>

int main(void){
    printf("How many minutes did you spend in shower?\n");
    int minutes = get_int();
    int bottles = (192 * minutes) / 16; 
    printf("Minutes: %i\n", minutes);
    printf("Bottles: %i\n", bottles);
}