#include <stdio.h>                                                              //подключение библиотек содержащих функции ввода, вывода и математических  функций
#include <math.h>

int main(void){
  long double s=0.0,scor=0.0,cor=0.0,fcor,f;                                    //определение переменных и присваивание им необходимых значений
  short int n1=60,n2=500,n3=1000,i,ii=-1;
  printf("Yaskovich Dmitry (T01-01c). Exercise 5. Variant 7\n\n");              //Информация о программе
  for (i=1; i <= n3 ; i++) {                                                    //цикл, проходящий по всем i в пределах заданных в условии
	f=((2*i-1)/(pow(2,i)));
	fcor=f-cor;                                                                 //суммирование по методу Кохена
	scor=s+fcor;
	cor=(scor-s)-fcor;
	s=scor;
	if ((i==n1) || (i==n2) || (i==n3)) {                                        //условие вывода результатов
	  printf("Number:       %d\n",i);                                           //вывод результатов
	  printf("Sum:          %.30Lf\n\n",s);

	}
	if (((3-s)<0.001)&&(ii<0) ){                                                //проверка достижения необходимого значения
	  ii=i;                                                                     //сохранение наименьшего значения n
	}
  }
  printf("Minimal N:    %d\n\n",ii);                                            //вывод минимального n
  printf("Dimini Inc.\n");                                                      //Авторские права
  printf("For progressive future\n");
  printf("(c)2009-2012\n");
  fflush(stdin);                                                                //ожидание нажатия на клавишу для завершения программы
  getchar();
  return 0;
}
