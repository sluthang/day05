#include<stdio.h>
#include<unistd.h>

char *ft_strcapitalize(char *str);

int main()
{ 
   char str[23] = "thE bOotcAmp is GrEate";	
   char *c;
   c = ft_strcapitalize(str);
   write(1,c,23);
   write(1,"\n",1); 
   return 0;
  
}	
	

char *ft_strcapitalize(char *str)
{
   int i;
   i = 0;
   while(str[i] !='\0')
   {
       if(i == 0 || str[i-1] == ' ')
	   {
	      if(str[i] >= 'a' && str[i] <='z')
		  {
		     str[i] +=('A'- 'a'); 
		  }
	   }
       else
       {
	       if(str[i] >= 'A' && str[i] <='Z')
		   {
		      str[i] -= ('A' - 'a');
		   }	   
	   }		  
       i++;
   }
   return str;   
}	
