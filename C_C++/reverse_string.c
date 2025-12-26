//Reverses the inputted string.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define max_length 100

int reverse_search(int idx, char input[]);

int main(){
    printf("Input a string: ");
    char input[max_length];
    scanf("%s", input);
    int x = reverse_search(0, input);
    return 0;
}

int reverse_search(int idx, char input[]){
    int length = strlen(input);
    char* ptr = malloc(sizeof(char)*(length+1));
    int copy_idx = 0;
    printf("\nReversed: ");
    for (int i = length-1; i>=0; i--){
        ptr[idx] = input[i];
        printf("%c", ptr[idx]);
        idx++;
    }
    return 0;
}
