#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <sys/wait.h>
#include <unistd.h>
#include <math.h>

//AO COMPILAR INSERIR -lm


int main() {

struct timeval start, end;
float timer_1, sum=0, vec[100], average, somatorio, lambda;
int i=0;

for(i=0;i<10;i++){

gettimeofday(&start, NULL);

system("wget http://35.244.95.95:80/cgi-bin/test.cgi --post-data 'n=3' -q");

gettimeofday(&end, NULL);
  
   //http://35.244.95.95/cgi-bin/test.cgi
 timer_1 = ((end.tv_sec * 1E6 + end.tv_usec ) - (start.tv_sec * 1E6 + start.tv_usec));
 
 	vec[i]=timer_1;
 
 sum+=timer_1;
	
printf("\n");

 printf("Time taken to access CGI with a POST send is : %f seconds\n\n",
    timer_1*1E-6);

}

	average=sum/i;
	
	for(i=0;i<10;i++){
		somatorio=(vec[i]-average)*(vec[i]-average);
	}
	
	lambda=sqrt(somatorio/i);
	
	//for a 95% confidence interval, z alpha/2 is 1.96
	
	printf("\naverage: %f +/- Zalpha: %f", average*1E-6, (1.96*lambda)/sqrt(i)*1E-6);
	

  return 0;
}



