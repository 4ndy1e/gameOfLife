#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_ROWS 5
#define NUM_COLS 5

typedef enum {F=0,T=1} Bool;

int getInitialState(int init_state[]) {
  char input[NUM_COLS * NUM_ROWS];

  printf("Enter the offsets for the live cells (comma-separated): ");
  scanf("%s", input);
  printf("You entered: %s\n", input);

  // convert string value into array of int 
  char* token = strtok(input, ",");
  int i = 0;
  while(token != NULL) {
    init_state[i] = atoi(token);
    i++;
    token = strtok(NULL, ",");
  }
  
  // return number of cells alive
  return i;
}

void setInitialState(char board[][NUM_COLS], int init_state[], int num_alive) {
  
}

int countLiveNeighbors(char board[][NUM_COLS], int r, int c) {
 
}

void NextGeneration(char board1[][NUM_COLS]) {
  
}

void printBoard(char board[][NUM_COLS]) {

}

void PlayGameOfLife() {

}

int main() {
 
}