#include <stdio.h>//Підключення бібліотек
#include <math.h>

int main() {  
 int i, y, z;

  
  //Введення чисел
  printf("Введіть три числа:\n");

  printf("\nВведіть перше число i: ");
  scanf("%d", &i);

  printf("Введіть друге число y: ");
  scanf("%d", &y);

  printf("Введіть третеэ число z: ");
  scanf("%d", &z);


  //Обчислення
  float x=(sqrt(pow(i,2)*y-14*z));
	
  //Результати
  printf("\n*****Результати*****\n");
  printf("Число a = %d\n", i);
  printf("Число y = %d\n", y);
  printf("Число z = %d\n\n", z);
  printf("Відповідь:");
  printf("x = %.2f", x);
  printf("\n********************\n");

  getch();
}