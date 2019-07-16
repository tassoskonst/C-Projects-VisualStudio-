#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>


void main()
 {
    int i,j,k=0,count,inc=0,n;
    
   char name[30],open[30],ch1,ch2,o[30];
   char smbl[20]={'=','+','-','*','/','%','^','&','|','[',']',':'};
   
   cprintf("--Syntax Analyser--");
   
   printf("\n");
   printf("\n Enter Syntax");
   printf("\n");
   scanf("%s",name);
   n=strlen(name); //μηκος του πινακα
   for(i=0;i<n;i++)
    {
      ch=tolower(name[i]); //τα κανει ολα μικρα τους χαρκτης
      
      for(j=0;j<9;j++)
      {
        if(ch==smbl[j]) //αν υπαρχει στην συμβολοσειρα καποιο συμβολο
         {
           open[k]=i; //παιρνει το ινδεξ το βαζει στον πινακα
           o[k]=ch; //γεμιζει τον πινακα ο με τα συμβολα αυτα
           k++;
         }
      }
   }
   for(i=0;i<k;i++) //παιρνει ξεχωριστα τα συμβολα
    {
      count=open[i];  //ινδεξ
      ch1=tolower(name[count-1]); //αλλαζει την σειρα των χαρακτηρων 
      ch2=tolower(name[count+1]);
      if(isalpha(ch1) || (ch=='[') || (ch==']') && isalpha(ch2)|| isdigit(ch2))
       ++inc; 
     }
   if(k==inc)
  printf("\n %s is a valid syntax",name);
 else
  printf("\n %s is an invalid syntax",name);
  getch();
}