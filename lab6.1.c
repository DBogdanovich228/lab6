#include <stdio.h>
#include <locale.h> 
#include <stdlib.h>
#include <math.h>

void main(){
	setlocale(LC_ALL,"RUSSIAN");
	int  n, i, a, b, x;
	float *m,f;
	printf("Введите размер массива n=");
	scanf("%d",&n);
	if(!(m=(float*)malloc(n*sizeof(float))))
{ puts("не достаточно памяти"); 
getch(); 
return;
}
for (i=0;i<n;i++){
printf("Введите элемент массива m[%d]=", i);
scanf("%f",m+i); 
}
for (i=0;i<n;i++) printf("%f",*(m+i));
for(i=1,b=0;i<n;i++){
if(fabs(*(m+b))<fabs(*(m+i))) b=i;	
}
for(i=0;i<n,x!=10;i++){
	if(*(m+i)>0) {   
	for(a=i+1;a<n;a++){
	f=f+*(m+a);
	}
	x=10;
	}
}
printf("\nНомер наибольшего по модулю элемента = %d, \nсумма всех элементов после первого положительного = %f",b,f);
}
