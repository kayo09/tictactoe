//https://mathworld.wolfram.com/MagicSquare.html



#include <stdio.h> 
#include <time.h> 
#include <stdlib.h>
#include <stdbool.h>

//reset board
void reset(char *a, int size) {
  for(int i = 0; i < size; i++) {
    a[i] = '0' + i + 1;
  }
}

//Check if the board is full
bool isBoardFull(char *array, int size) {
  for(int i = 0; i < size; i++) {
    if(array[i] != 'x' && array[i] != 'X' && array[i] != 'o' && array[i] != 'O') {
      return false; 
    }
  }
  return true;
}

//prints the board
void printBoard(char *array, int size) {
  for(int i = 0; i < size; i++) {
    printf("%c ", array[i]);
    if((i + 1) % 3 == 0) {
      printf("\n");
    }
  }
}

//Maximizing player playing as X
//


//theWinnerIs()
void theWinnerIs(char *array, int size){
  int score=0;
  for(int i=0;i<=size;i++){
    if(array[i] != 'x' || array[i] != 'X' || array[i] != 'o' || array[i] != 'O') {
}
      }
    
 
  printf("No one wins!! Draw!"); 
}

int main() {
  char arr[9];
  int size = sizeof(arr) / sizeof(arr[0]);

  reset(arr, size);
  printBoard(arr, size);
  bool truthy = isBoardFull(arr, size);

  printf("Is board full? %s\n", truthy ? "Yes" : "No");

  return 0;
}

