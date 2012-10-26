#include <stdio.h>
#include <limits.h>
#include <math.h>
#include <float.h>

int main(void){
  long double s=0.0,scor=0.0,cor=0.0,fcor,f,s2=0.0,ss;
  int n1=100,n2=500,n3=1000,i,ii=-1;
  printf("Exercise 5. Variant 7\n\n");
  for (i=1; i <= n3 ; i++) {
	f=((2*i-1)/(pow(2,i)));
	fcor=f-cor;
	scor=s+fcor;
	cor=(scor-s)-fcor;
	s=scor;
	s2=s2+f;
	if ((i==n1) || (i==n2) || (i==n3)) {
	  printf("Number:       %d\n",i);
	  printf("Sum:          %.30Lf\n\n",s);

	}
	if (((3-s2)<0.001)&&(ii<0) ){
	  ii=i;
	}
  }
  printf("Minimal No:   %d\n\n",ii);
  printf("Dimini Inc.\n");
  printf("For progressive future\n");
  printf("(c)2009-2012\n");
  fflush(stdin);
  getchar();
  return 0;
}
