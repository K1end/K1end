#include <stdio.h>

void caesar_encrypt (char text[], int klic);

int main () {

  caesar_encrypt (text, klic);

  return 0;
}

void caesar_encrypt (char text[], int klic) {
  char text[50] ="ABCD";
  int klic = 5;
  int i = 0;

  while (text[i] != '\0') {
    if ((text[i] += klic) >= 65 && (text[i] += klic) <= 90) {
      text[i] += (klic);
    } else {
      text[i] += (klic - 25); 
    }
    i++;
  }
  printf("%s", text);
}