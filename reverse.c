#include <stdio.h>

/*
 * Напишите функцию reverse(s), которая располагает символьную строку s в обратном порядке.
 * С ее помощью напишите программу, которая обратит каждую строку из файла ввода.
 */

void reverse(int *s, int i);
int main ()
{
  int s, i;
  int array[1000];

  printf("Enter string: \n");

  // Ввод символьной строки и запись ее в массив
  i = 0;
  while((s = getchar()) != EOF && s != '\n')
    {
      array[i] = s;
      i++;
    }
  reverse(array, i);
  printf("\n");
  return 0;
}

// функция переворота строки задом наперед
void reverse(int *s, int i)
{
  int j;
  for(j = i-1; j >= 0; j--) { printf("%c", s[j]); }
}