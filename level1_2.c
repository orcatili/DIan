#include<stdio.h>
#include"stdlib.h"
int main()
{
	int price, money, add;
	money = price = add = 0;
	printf("��������Ʒ�ܼ�");
    scanf("%d", &price);
	while (money < price) {
		    printf("��Ͷ��");
		    scanf("%d", &add);
			if (add != 1 && add != 2 && add != 5) {
				printf("��Ч��Ͷ�ҽ���Ͷ��1Ԫ��2Ԫ��5Ԫ\n");
			}
		    money += add;
		}
		printf("����ɹ�������%dԪ",money - price);
		system("pause"); 
		return 0;
	
}