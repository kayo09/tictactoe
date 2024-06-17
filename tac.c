/*

AUTHOR: KRUTARTH PARMAR
DATE: 2024
ABOUT ME: HTTPS://KAYPARMAR.COM


*/
#include <stdio.h>
#include<start_screen.h>

//since the board is represented using 
//int values, we encode -1,0,1 --> X, ,O respectively  
char gridChar(int i ){
  switch(i){
    case -1:
    return 'X';
    case 0:
    return ' ';
    case 1: 
    return 'O';

  }
}

//a generic function to draw the interface 
void draw(int *arr,int size){
  for(int i = 0 ; i < size ; i+=3){
  printf("%c|%c|%c\n",gridChar(arr[i]),gridChar(arr[i+1]),gridChar(arr[i+2]));
  if(i<size-3){
  printf("-----\n");
}
  }
}


int main(){
  //the board is represented as a one dimensional array
  //of integers. 
  int arr[9]={0,0,0,0,0,0,0,0,0};
  int size= sizeof(arr) /sizeof(arr[0]);

  draw(arr,size);


  return 0;
}