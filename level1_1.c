#include<stdio.h>
#include"stdlib.h"
int main(){
    int number, place, price;
	char goods;

	printf("请依次输入商品信息：货物种类 位置 数量 价格");
	scanf("%c %d %d %d", &goods, &place, &number, &price);
	printf("%d:", place);
	for (int i = 0; i < number; i++) {
		printf("%c", goods);
	}
	printf(" %d", price);
	system("pause");
	return 0;
}