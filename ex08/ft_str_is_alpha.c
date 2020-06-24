#include<stdio.h>
#include<unistd.h>

int ft_str_is_alpha(char *str);


int main()
{
   char str[33] = "The is a problem with this code";
   int c;
   c  = ft_str_is_alpha(str);
  // write(1,c,33);
   printf("%d\n",c);
   return 0;

}


int ft_str_is_alpha(char *str)
{
   int i ;
   i = 0;
   char c ;
   while(str[i] != '\0')
   {
       c =str[i++];
	   if((c <'a' || c >'z') && (c <'A' || c >'Z'))
	   {
	       return 0;
	   }	
	     
   }	   
   return 1;

}	

