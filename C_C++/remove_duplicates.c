//Removes any duplicate characters in an inputting string.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define max_length 100

int find_duplicates(int idx, char input[]);
void remove_char(char input[], int start);
int remove_duplicates();



int main(){
    printf("Input a string: ");
    char input[max_length];
    scanf("%s", input);
    if (input[0]=='\0'){
        printf("\nYou need at least one character.");
        return 1;
    }
    int x = find_duplicates(0, input);
    return 0;
}

int find_duplicates(int idx, char input[]){

    int length = strlen(input);
    for (int i = idx; i<length; i++){
        char temp = input[i];
        for (int j = i+1; j<length; j++){
            if (temp==input[j]){
                remove_char(input, j);
                j--;
               length--;
            }
        }
        idx = idx+1;
    }
    printf("Output: %s", input);
    return 0;
}

void remove_char(char input[], int start){
    int length = strlen(input);
    for (int i = start; i<length; i++){
        input[i] = input[i+1];
    }
}

