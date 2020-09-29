#include <stdio.h>
#include <stdlib.h>

int sum(int value){
  int val=value;
  int result=0;
  while(val!=0){
    result+=val;
    val--;
  }

  return result;
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
    getchar();
    getchar();
    scanf("%d", &c);
    printf("Sum result: %d",sum(c));
    return 0;
}
