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
  int currentIndex = 0;
  int init_index = 0;

  // Initialize the board to all dead cells
  for (int r = 0; r < NUM_ROWS; r++) {
    for (int c = 0; c < NUM_COLS; c++) {
      board[r][c] = 'o';  // Dead cell
    }
  }

  // set inital state alive cells
  for(int r = 0; r < NUM_ROWS; r++) {
    for(int c = 0; c < NUM_COLS; c++) {
      if(init_index < num_alive && init_state[init_index] == currentIndex) {
        board[r][c] = '*';
        init_index++;
      }
      currentIndex++;
    }
  }
}

int countLiveNeighbors(char board[][NUM_COLS], int r, int c) {
 int count = 0;

  for(int rowRange = -1; rowRange <= 1; rowRange++) {
    for(int colRange = -1; colRange <= 1; colRange++) {
      int row = r + rowRange;
      int col = c + colRange;

      // skip center and out of bound cells 
      if ((row == r && col == c) || row < 0 || row >= NUM_ROWS || col < 0 || col >= NUM_COLS) {
        continue;
      }

      if(board[row][col] == '*') {
        count++;
      }
    }
  }
  return count;
}

void NextGeneration(char board1[][NUM_COLS]) {
  
}

void printBoard(char board[][NUM_COLS]) {

}

void PlayGameOfLife() {

}

int main() {
 
}