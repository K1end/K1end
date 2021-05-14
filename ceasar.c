#include <stdio.h>

void caesar_encrypt (char text[], int a);

int main () {
  char text[50] ="ABCD";
  int a = 1;

  caesar_encrypt (text, a);

  return 0;
}

void caesar_encrypt (char text[], int a) {

  int i = 0;

  while (text[i] != '\0') {
    if ((text[i] += a) >= 65 && (text[i] += a) <= 90) {
      text[i] += (a);
    } else {
      text[i] += (a - 25); 
    }
    i++;
  }
  printf("%s", text);
}