#include<stdio.h>
#include"stdlib.h"
int main(){
    int number, place, price;
	char goods;

	printf("������������Ʒ��Ϣ���������� λ�� ���� �۸�");
	scanf("%c %d %d %d", &goods, &place, &number, &price);
	printf("%d:", place);
	for (int i = 0; i < number; i++) {
		printf("%c", goods);
	}
	printf(" %d", price);
	system("pause");
	return 0;
}