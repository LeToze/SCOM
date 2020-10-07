//more info vir aqui
//https://pubs.opengroup.org/onlinepubs/007908775/xsh/systime.h.html
//https://linuxhint.com/gettimeofday_c_language/

/*#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>

int main(){
    struct timeval stop, start;
    int time1=0;
gettimeofday(&start,NULL);
   printf("%ld\n", start.tv_sec);
}*/

#include <time.h>
#include <sys/time.h>
#include <stdio.h>

int main() {
  struct timeval tv;
  time_t t;
  struct tm *info;
  char buffer[64];
 
  gettimeofday(&tv, NULL);
  t = tv.tv_sec;

  info = localtime(&t);
  printf("%s",asctime (info));
  strftime (buffer, sizeof buffer, "Today is %A, %B %d.\n", info);
  printf("%s",buffer);
  strftime (buffer, sizeof buffer, "The time is %I:%M %p.\n", info);
  printf("%s",buffer);

  return 0;
}