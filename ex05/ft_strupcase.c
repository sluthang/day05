#include<unistd.h>
#include<stdio.h>
#include<string.h>

char *ft_strupcase(char *str);

int main()
{
  char str[10] = "SiNetHemba";
  char *c;
  c = ft_strupcase(str);
  write(1,c,10);
  write(1,"\n",1);
  return 0;

}	

char *ft_strupcase(char *str)
{
  int i;
  i = 0;

   while(str[i] !='\0' )
   {
          if(str[i] >= 'a' && str[i] <= 'z')
		  {
		      str[i] += ('A' - 'a');
		  }
	      i++;   
   }	  
   
   return (str);
}	
