#include <stdio.h>//Підключення бібліотек
#include <math.h>
#include <locale.h>


int main() {
  int a, b;
  float db, rz, sum; 
  setlocale (LC_ALL,"ua");
  //Введення чисел
  printf("Задайте два цілих числа:\n");

  printf("\nВведіть перше число: ");
  scanf("%d", &a);

  printf("Введіть друге число: ");
  scanf("%d", &b);

  // Обчислення
  sum = pow(a,2)+pow(b,2);
  db = pow(a+b,2);
  rz = a-b*3;

  //Результати
  printf("\n-----Результати-----\n");
  printf("Число 1 = %d\n", a);
  printf("Число 2 = %d\n\n", b);

  printf("Суму квадратів двох чисел = %.f\n", sum);
  printf("Подвоєний добуток двох чисел = %.f\n", db);
  printf("Різницю 1-го числа та потроєного значення 2-го числа = %.f", rz);
  printf("\n--------------------\n");

  return 0;
}