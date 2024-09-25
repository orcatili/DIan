#include<stdio.h>
#include"stdlib.h"
int main()
{
	int price, money, add;
	money = price = add = 0;
	printf("请输入商品总价");
    scanf("%d", &price);
	while (money < price) {
		    printf("请投币");
		    scanf("%d", &add);
			if (add != 1 && add != 2 && add != 5) {
				printf("无效的投币金额，请投入1元、2元或5元\n");
			}
		    money += add;
		}
		printf("购买成功，找零%d元",money - price);
		system("pause"); 
		return 0;
	
}