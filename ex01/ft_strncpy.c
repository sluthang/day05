#include<unistd.h>
#include<string.h>

char *ft_strncpy(char *dest, const char *src, unsigned int n);
void ft_putchar(char c);

int main()
{
    char src[10] = "Sinethemba";
	char dest[10];
	size_t i;
	i = 0;
	ft_strncpy(dest,src,i);
	while(src[i] != '\0')
	{
	   ft_putchar(dest[i]);
	   i++;
	}	
       ft_putchar('\n');

	return 0;
}

char *ft_strncpy(char *dest, const char *src, unsigned int n)
{
    size_t i;
	i = 0;
    while(src[i] != '\0' && i < n)
	{
	     dest[i] = src[i];
		 i++;
		 
	}	
	while(i < n)
	{
	   dest[i] = '\0';
	   i++;
	}	
	return (dest);
}	


void ft_putchar(char c)
{
 write(1,&c,1);
}	
