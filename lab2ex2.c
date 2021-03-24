#include <stdio.h>//Підключення бібліотек
#include <math.h>

int main() {
  float a, b, c, y;
  
  //Введення чисел
  printf("Введіть три числа:\n");

  printf("\nВведіть число a: ");
  scanf("%f", &a);

  printf("Введіть число b: ");
  scanf("%f", &b);

  printf("Введіть число c: ");
  scanf("%f", &c);
  
  //Обчислення
  y=((float)(a*b+a*c-b*c)/(float)(2*a-b))+(float)(5/a+b);
  
  //Виведення результатів
  printf("\n******Результати******\n");
  printf("Число a = %.f\n", a);
  printf("Число b = %.f\n", b);
  printf("Число c = %.f\n\n", c);
  printf("Відповідь: ");
  printf("y = %.2f", y);
  printf("\n**********************\n");

  getch();
}