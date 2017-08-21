#include <stdio.h>

int main(int argc, const char* argv[]) {
  
  // \n \t \\ \0 (конец строки в —)
  printf("test\n");
  
  // %d %s %c %p %f %lf %x %%
  // %.2f и %04d - формат дл€ чисел
  // плейсхолдеры дл€ различных типов данных
  int a = 33;
  printf("test %04d\n", a);
  
  // выведем адрес переменной a
  printf("a value - %d\ta address - %p\n", a, &a);

  // ввод пользовател€
  printf("input new value for a: ");
  scanf("%d", &a);  
  printf("a value - %d\ta address - %p\n", a, &a);
  return 0;
}
