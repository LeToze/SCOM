#include <stdio.h>
#include <stdlib.h>

int sum(int value){

  int val_mid=0;
  int first=0, second=1;
  if (value == 0){
    return first;
  }
  else{
    
  for ( int i = 1; i < value; i++)
  {
    val_mid= first + second;
    first=second;
    second=val_mid;
  }
  return second;
  }

  
}


int main () {
    int c;
    char text[1024];
    // puts("Content-type: text/plain");
    // puts("Connection: close");
    // puts("");
    printf("Content-type: text/plain\n");
    printf("Connection: close\n");
    printf("\n");
    //getchar();
    //getchar();
    scanf("%d", &c);
    printf("Hightest Fibonacci term: %d\n",sum(c));
    return 0;
}
