#include<stdio.h>
#include<stdlib.h>
int main()
{
    struct item
    {
        char goods;
        int price;
        int num;
    };
    char choice1 = 'y';
    char choice2 = 'y';
    char goods, goodsi;
    int place, num, add, money, amount, totalamount, placei, numi, pricei, i;
    struct item store[4];

    //摆放货物
    printf("请依次输入商品信息：商品种类 通道（1~5）数量 价格\n");
    while (choice1 == 'y')
    {
        scanf("%c %d %d %d", &goodsi, &placei, &numi, &pricei);
        getchar();
        while (placei > 5)
        {
            printf("通道不存在，请重新输入通道");
            scanf("%d", &placei);
        }
        i = placei - 1;
        store[i].goods = goodsi;
        store[i].num = numi;
        store[i].price = pricei;
        printf("是否继续摆放商品（y/n）：");
        scanf("%c", &choice1);
        getchar();
        while (choice1 != 'y' && choice1 != 'n')
        {
            printf("请重新输入选择（y/n）：");

            scanf("%c", &choice1);
            getchar();

        }
    }

    //购买商品
    printf("请依次输入购买商品的种类 通道（1~5）数量\n");
    totalamount = 0;
    while (choice2 == 'y')
    {
        scanf("%c %d %d", &goods, &place, &num);
        getchar();
       
        int search = 0;
        for (int i = 0; i < 5; i++)
        {
            if (i == place - 1 && goods == store[i].goods)
            {
                search = 1;
                int amount = store[i].price * num;
                while (num > store[i].num)
                {
                    printf("货物数量不足，请重新输入购买数量 ");
                    scanf("%d", &num);
                }
                amount = store[i].price * num;
                totalamount += amount;
                store[i].num -= num;
                break;
            }
        }
       
        if (search == 0)
        {
            printf("未找到该商品或通道不匹配。\n");
            printf("请重新输入购买商品的种类 通道（1~5）数量\n");
        }
        else
        {
            printf("继续购买商品（y），结账（n）：");
            scanf("%c", &choice2);
            getchar();
        }
    }

    //结算过程 
    printf("共计%d元", totalamount); 
    money = 0;
    while (money < totalamount) {
        printf("请投币\n");
        scanf("%d", &add);
        if (add != 1 && add != 2 && add != 5)
        {
            printf("无效的投币金额，请投入入1元、2元或5元\n");
        }
        else
        {
            money += add;
        }
    }
    printf("购买成功，找零%d元\n", money - totalamount);
    system("pause");
    return 0;
}
