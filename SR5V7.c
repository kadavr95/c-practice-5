#include <stdio.h>                                                              //����������� ��������� ���������� ������� �����, ������ � ��������������  �������
#include <math.h>

int main(void){
  long double s=0.0,scor=0.0,cor=0.0,fcor,f;                                    //����������� ���������� � ������������ �� ����������� ��������
  short int n1=60,n2=500,n3=1000,i,ii=-1;
  printf("Yaskovich Dmitry (T01-01c). Exercise 5. Variant 7\n\n");              //���������� � ���������
  for (i=1; i <= n3 ; i++) {                                                    //����, ���������� �� ���� i � �������� �������� � �������
	f=((2*i-1)/(pow(2,i)));
	fcor=f-cor;                                                                 //������������ �� ������ ������
	scor=s+fcor;
	cor=(scor-s)-fcor;
	s=scor;
	if ((i==n1) || (i==n2) || (i==n3)) {                                        //������� ������ �����������
	  printf("Number:       %d\n",i);                                           //����� �����������
	  printf("Sum:          %.30Lf\n\n",s);

	}
	if (((3-s)<0.001)&&(ii<0) ){                                                //�������� ���������� ������������ ��������
	  ii=i;                                                                     //���������� ����������� �������� n
	}
  }
  printf("Minimal N:    %d\n\n",ii);                                            //����� ������������ n
  printf("Dimini Inc.\n");                                                      //��������� �����
  printf("For progressive future\n");
  printf("(c)2009-2012\n");
  fflush(stdin);                                                                //�������� ������� �� ������� ��� ���������� ���������
  getchar();
  return 0;
}
