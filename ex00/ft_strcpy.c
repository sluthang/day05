#include<unistd.h>
#include<string.h>

char *ft_strcpy(char *dest, char *src);
void ft_putchar(char c);


int main()
{
   char src[10] ="Sinethemba"; 
   char dest[10];
   ft_strcpy(dest,src);
   int i;
   i = 0;
     while(dest[i] !='\0')
	 {
	   ft_putchar(dest[i]);
	   i++;
	 }	 
     ft_putchar('\n');
	 return 0;

}


char *ft_strcpy(char *dest, char *src)
{

 int i;
 i = 0;
     while (src[i] != '\0')
	 {
	     dest[i] = src[i];
		 i++;
	 }
     dest[i] = '\0';	 
	 return(dest);
}	

void ft_putchar(char c)
{
  write(1,&c,1);
 
}	
