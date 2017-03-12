#include <cs50.h>
#include <stdio.h>

void printSpace(int n);
void printHash(int n);
void say(string s, int n);

int main(void){
    int height;
    do {
        printf("What's the height? ");
        height = get_int();
    }
    while(height < 0 || height > 23);
    int x = height - 1;
    int y = height % 3;
    for(int i = 0; i < height; i++){
        if(height == 1){
            printf("#");
        };
        printSpace(x);
        x--;
        printHash(y);
        y = y + 1;
        printf("\n");
    }
}

void printSpace(int n){
    say(" ", n);
}

void printHash(int n){
    say("#", n);
}
void say(string s, int n){
    for(int i = 0; i < n; i++){
        printf("%s", s);    
    }
}