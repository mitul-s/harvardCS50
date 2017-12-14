#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    string key = argv[1];
    if (argc != 2) {
        printf("You're missing the command-line argument\n");
        return 1;
    } else {
        int z = atoi(key) % 26;
        if(z == 0){
            printf("Please enter a valid key!\n");
            return 1;
        } else {
            printf("plaintext: ");
            string s = get_string();
            if (s != NULL){
                int y = 0;
                printf("ciphertext: ");
                for(int i = 0, x = strlen(s); i < x; i++){
                    if(isupper(s[i])){
                        y = (((int)s[i] - 65 + z) % 26) + 65;
                        printf("%c", (char) y);
                    } else if (islower(s[i])) {
                        y = (((int)s[i] - 97 + z) % 26) + 97;
                        printf("%c", (char) y);
                    } else {
                        printf("%c", (char) y);
                    }
                }
                printf("\n");
                return 0;
            }
        }
    }
}