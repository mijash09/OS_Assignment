// C program for producer consumer problem

#include <stdio.h>
#include <stdlib.h>

//initialize a mutex to 1
int mutex = 1;

//number full of slots as 0
int full =0;

//number pr empty slots as size of buffer
int empty = 10,x=0;

//functoin to produce an item and add it to the buffer

void(){
    --mutex;  //decrease mutex by 1
    ++full;    //increase number of full slots by 1
    --empty;   //decrease empty slots
    x++;
    printf("\n Producer produces item %d",x);

    ++mutex;
}

//function to consume an item and remove buffer

void consumer(){
    --mutex;
    --full;
    ++empty;
    printf("\n Consumer consumes" "item %d" ,x);
    x--;
    ++mutex;
}

int main(){
    int n,i'
    printf("\n 1. Press 1 for Producer");
    printf("\n 2. Press 2 for Consumer");
    printf("\n 3. Press 3 for Exit");

    printf("\n Enter your choice:");
    scanf("%d",&n);
    //switch cases
    switch(n){
    case 1:
          if((mutex ==1)) && (empty !=0)){
          producer();} 
           }
          else{
          printf("Buffer is full");
          }
          break;
    
    case 2:
          if((mutex == 1) && (full !=0)){
          consumer();}
          else{
          printf("Buffer is empty!");
          }
          break;

    case 3:
          exit(0);
          break;
    }

}
