#include <unistd.h>
int ft_putchar(char c){
	write(1,&c,1);
	return 0;
}
void	ft_putstr(char *str){
	while(*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}
void	ft_putint(int i){
	int tab2[10];
	int cprim;
	int c=0;
	if (i < 0) {
		i=-i;	
	}
	int tab[] = { 1, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000, 1000000000 };
	int *ptr = tab;
	while (*(ptr+c)< i)
	{
		c++;
	}
	cprim=c;
	while (c>=1) {
		tab2[c-1]=(i/tab[c-1])%10;	
		c--;
	}
	while (cprim>=1) {
		ft_putchar((char)tab2[cprim-1]+48);
		cprim--;	
	}
}
void	ft_div_mod(int a, int b, int *div, int *mod){
	*div=a/b;
	*mod=a%b;
}
