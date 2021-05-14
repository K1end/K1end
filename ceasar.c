#include <stdio.h>
int main () {

char text[];
int klic;

  printf("Napiš text: ");
  scanf("%s", text);

  printf("Napiš klič od 1-10: ");
  scanf("%d", &klic);
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

  return 0;
}