// ex00
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *dest;
	char *src = "ANTONIO20989324";
	dest = malloc (sizeof(char) * 30);

	ft_strcpy(dest, src);
	printf("src: %s \n", src);
	printf(" %s \n", dest);




}

//ex01

#include <stdio.h>

int	main(void)
{
	char	dest[15];
	char	*src = "ANTON";

	ft_strncpy(dest, src, 8);
	printf("src: %s \n", src);
	printf("dest: %s \n", dest);

	return(0);
}
