#include<stdio.h>
#include<stdlib.h>

int main() {
    int number, place1, place11, price, add, money, quantity, amount;
    char goods1,goods11;
    int continue1 = 1; 

 
     printf("请依次输入商品信息：商品种类 通道 数量 价格\n");
     scanf(" %c %d %d %d", &goods1, &place1, &number, &price);
     getchar();  
      while (continue1==1) {
        money = 0;
        printf("请依次输入购买商品的种类 通道 数量\n");
        scanf(" %c %d %d", &goods11, &place11, &quantity); 
        while (goods1 != goods11) {
            printf("无该种商品，请重新输入商品种类 "); 
            scanf("%c", &goods11);       
            getchar();
        }
        while (place1 != place11) {
            printf("通道错误，请重新输入商品通道 ");
            scanf("%d", &place11);
        }
        while (quantity > number) {
            printf("商品数量不足，请重新输入购买数量 ");
            scanf("%d", &quantity);
        }
        amount = price * quantity;

        while (money < amount) {
            printf("请投币\n");
            scanf("%d", &add);
            if (add != 1 && add != 2 && add != 5) {
                printf("无效的投币金额，请输入1元、2元或5元\n");
            }else{money += add;}
        }
        printf("购买成功，找零%d元\n", money - amount);
        number -= quantity;
        if (number > 0) {
            printf("是否继续购买？输入1继续，输入0结束\n");
            scanf("%d", &continue1);
        }
        else { continue1 = 0; printf("商品已售空\n"); }
    }

    system("pause");
    return 0;
}
