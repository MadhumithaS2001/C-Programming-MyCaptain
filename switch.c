#include<stdio.h>
int main()
{
    int i;
    scanf("%d",&i);
    switch(i)
    {
        case 1:
          printf("Food Item - Pizza\nPrice - Rs.239");
          break;
        case 2:
          printf("Food Item - Burger\nPrice - Rs.129");
          break;
        case 3:
          printf("Food Item - Pasta\nPrice - Rs.179");
          break;
        case 4:
          printf("Food Item - French Fries\nPrice - Rs.99");
          break;
        case 5:
          printf("Food Item - Sandwitch\nPrice - Rs.149");
          break;
        default:
            break;
   }
   return 0;
}
