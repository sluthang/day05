#include<unistd.h>
#include<stdio.h>

char *ft_strlowcase(char *str);

int main()
{
  char str[10] = "Sinethemba";
  char *c;
  
  c = ft_strlowcase(str);
  write(1,c,10);
  write(1,"\n",1);

  return 0;
}	


char *ft_strlowcase(char *str)
{
  int i;
  i = 0;

  while(str[i] !='\0')
  {
       if(str[i] >= 'A' && str[i] <= 'Z')
	   {
	        str[i] -= ('A'- 'a'); 
	   }	 
      i++;  
  }	  
  return str;
}	
