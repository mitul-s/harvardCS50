#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void){
    float change;
    do {
        printf("How much change owed? ");
        change = get_float();
    }
    while(change < 0.00);
    
    int newChange = round(change * 100);
    int quarter = 25;
    int dime = 10;
    int nickel = 5;
    int penny = 1;
    int coins = 0;
    
    while(newChange > 0){
        if(quarter <= newChange){
            newChange = newChange - quarter;
            coins++;
        } else if(dime <= newChange){
            newChange = newChange - dime;
            coins++;
        } else if(nickel <= newChange){
            newChange = newChange - nickel;
            coins++;
        } else if(penny <= newChange){
            newChange = newChange - penny;
            coins++;
        }
    }
    printf("%i\n", coins);
}