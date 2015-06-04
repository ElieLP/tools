int ft_putchar(char c);
void    ft_putint(int i);
int	ft_strlen(char *str){
	int compt;
	compt=0;
		while (*str != '\0') {
			compt++;		
			str++;
		}
	ft_putint(compt);
	return 0;
}
int main(int argc, const char *argv[])
{
	ft_strlen("lolololololol");
	return 0;
}
