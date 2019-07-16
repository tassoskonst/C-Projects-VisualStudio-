

#include <stdio.h>

int main ()
{
  FILE *file;
  char c;
  int left = 0;
  int right = 0;

  file = fopen("random.txt", "r");
  
  if (file==NULL) 
      perror ("Error reading file");
  else
  {
    do {
      c = getc (file);
      if (c == '(') 
          left++;
      else if (c == ')')
          right++;
       if (left < right){
       printf ("NO");
       break; 
      }
      } while (c != EOF);
    fclose (file);  
        if (right == left)
    printf ("YES");
  }
  return 0;
}