#include<stdio.h>
#include<unistd.h>
#include<string.h>

char *ft_strncmp(char *dest, char *src, unsigned int n);

int main()
{
   char test1[256] = "asdfghghghgh";
   char *test2 = strncpy(test1,"uio",5);
   write(1,test2,1);
   write(1,"\n",1);
}	

char *ft_strncmp(char *dest, char *src, unsigned int n)
{
   unsigned int i;
   i = 0;

   while(src[i] != '\0' && i < n )
   {
      dest[i] = src[i];
	  i++;   
   }	  
  if(i < n && src[i] == '\0')
  {
      while(dest[i] != '\0')
	  {
	      dest[i] = '\0';
		  ++i;
	  }	  
  
  }	  
  return (dest);
}	
