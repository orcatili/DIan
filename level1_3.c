#include<stdio.h>
#include<stdlib.h>

int main() {
    int number, place1, place11, price, add, money, quantity, amount;
    char goods1,goods11;
    int continue1 = 1; 

 
     printf("������������Ʒ��Ϣ���������� λ�� ���� �۸�\n");
     scanf(" %c %d %d %d", &goods1, &place1, &number, &price);
     getchar();  
      while (continue1==1) {
        money = 0;
        printf("���������빺����Ʒ������ λ�� ����\n");
        scanf(" %c %d %d", &goods11, &place11, &quantity); 
        while (goods1 != goods11) {
            printf("�޸�����Ʒ��������������Ʒ���� "); 
            scanf("%c", &goods11);       
            getchar();
        }
        while (place1 != place11) {
            printf("λ�ô����������������λ�� ");
            scanf("%d", &place11);
        }
        while (quantity > number) {
            printf("�����������㣬���������빺������ ");
            scanf("%d", &quantity);
        }
        amount = price * quantity;

        while (money < amount) {
            printf("��Ͷ��\n");
            scanf("%d", &add);
            if (add != 1 && add != 2 && add != 5) {
                printf("��Ч��Ͷ�ҽ�������1Ԫ��2Ԫ��5Ԫ\n");
            }else{money += add;}
        }
        printf("����ɹ�������%dԪ\n", money - amount);
        number -= quantity;
        if (number > 0) {
            printf("�Ƿ������������1����������0����\n");
            scanf("%d", &continue1);
        }
        else { continue1 = 0; printf("�������ۿ�\n"); }
    }

    system("pause");
    return 0;
}