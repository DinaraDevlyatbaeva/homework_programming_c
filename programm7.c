#include <stdio.h>

/* программа определения положительных произвольных вещественных чисел 
в массиве и нахождения их среднего арифметического*/

int main(void){
	int i, y, k, b, a[y];
	float sa;
	k=0;
	b=0;
	i=0;
	printf("Размер массива:\n");
	scanf("%d", &y);
	printf("Элементы массива:\n");
	while(i<y){
		if(a[i]>0){
			b+=a[i];
			k++;
		}
		printf("%d  ", a[i]);
		i++;
	}
	sa=b/k;
	printf("\nКолличество положительных чисел в масcиве:\n%d\n", k);
	printf("Среднее арифметическое положительных чисел массива:\n%.2f\n", sa);
	return 0;
}
