#include <stdio.h>

int main(int argc, const char* argv[]) {
  
  // \n \t \\ \0 (����� ������ � �)
  printf("test\n");
  
  // %d %s %c %p %f %lf %x %%
  // %.2f � %04d - ������ ��� �����
  // ������������ ��� ��������� ����� ������
  int a = 33;
  printf("test %04d\n", a);
  
  // ������� ����� ���������� a
  printf("a value - %d\ta address - %p\n", a, &a);

  // ���� ������������
  printf("input new value for a: ");
  scanf("%d", &a);  
  printf("a value - %d\ta address - %p\n", a, &a);
  return 0;
}
