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

#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <sys/wait.h>
#include <unistd.h>
#include "math.h"
int main() {

struct timeval start, end;
float timer_1;

gettimeofday(&start, NULL);

system("wget http://35.244.95.95:80/cgi-bin/test.cgi --post-data 'n=3' -q");

gettimeofday(&end, NULL);
  
   //http://35.244.95.95/cgi-bin/test.cgi
 timer_1 = ((end.tv_sec * 1E6 + end.tv_usec ) - (start.tv_sec * 1E6 + start.tv_usec));

printf("\n");
printf("Nice cock Bruno\n\n");
 printf("Time taken to access CGI with a POST send is : %f seconds\n\n",
    timer_1*1E-6);

printf("Really, Very Nice cock, Very neat\n\n");
  return 0;
}

