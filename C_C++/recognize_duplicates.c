//This program allows the user to input a string, and then recognizes whether there are duplicate characters in the string.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define max_length 100


int search(int idx, char input[]);
int reverse_search(int idx, char input[]);

int main(){
    printf("Input a string: ");
    char input[max_length];
    scanf("%s", input);
    int x = search(0, input);
    return 0;

}


int search(int idx, char input[]){
    int length = strlen(input);
    for (int i = idx; i<length; i++){
        char temp = input[i];
        for (int j = idx+1; j<length; j++){
            if (temp==input[j]){
                printf("The first repeated character is %c.", temp);
                return 1;
            }
        }
        idx = idx+1;
    }
    printf("There are no repeated characters.");
    return 0;
}
