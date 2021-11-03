#include "libasm.h"

int 	main()
{
	char	str[30];
	char	*s1;
	char	*s2;
	char	*s3;
	char	*s4;
	char	*s5;
	char	*s6;
	int 	fd1 = open("text.txt", O_RDONLY);
	int 	fd2 = open("text.txt", O_RDONLY);
	char 	b1[1000];
	char 	b2[1000];
	char 	b3[1000];
	char 	b4[1000];
	char 	b5[1000];
	char 	b6[1000];
	char 	b7[1000];
	char 	b8[1000];
	char 	b9[1000];
	char 	b10[1000];
	int 	count = 0;


	s1 = ft_strdup("Hello!");
	s2 = strdup("Hello!");
	s3 = ft_strdup("This is such a long line! Aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa");
	s4 = strdup("This is such a long line! Aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa");
	s5 = ft_strdup("");
	s6 = strdup("");

	printf("//////////////_FT_STRLEN//////////////\n");
	printf("ft_strlen - %lu\n", ft_strlen(""));
	printf("strlen - %lu\n", strlen(""));
	printf("ft_strlen - %lu\n", ft_strlen("Hello!"));
	printf("strlen - %lu\n", strlen("Hello!"));
	printf("ft_strlen - %lu\n", ft_strlen("How much chars you able to count ?"));
	printf("strlen - %lu\n", strlen("How much chars you able to count ?"));
	printf("//////////////////////////////////////\n");

	printf("//////////////_FT_STRCPY//////////////\n");
	printf("ft_strcpy - %s\n", ft_strcpy(str, ""));
	printf("strcpy - %s\n", strcpy(str, ""));
	printf("ft_strcpy - %s\n", ft_strcpy(str, "Hello!"));
	printf("strcpy - %s\n", strcpy(str, "Hello!"));
	printf("ft_strcpy - %s\n", ft_strcpy(str, "123456 789 0 -#$@^!&*"));
	printf("strcpy - %s\n", strcpy(str, "123456 789 0 -#$@^!&*"));
	printf("//////////////////////////////////////\n");

	printf("//////////////_FT_STRCPM//////////////\n");
	printf("ft_strcmp - %i\n", ft_strcmp("", ""));
	printf("strcmp - %i\n", strcmp("", ""));
	printf("ft_strcmp - %i\n", ft_strcmp("", "123456"));
	printf("strcmp - %i\n", strcmp("", "123456"));
	printf("ft_strcmp - %i\n", ft_strcmp("123451", ""));
	printf("strcmp - %i\n", strcmp("123451", ""));
	printf("ft_strcmp - %i\n", ft_strcmp("123451", "12345a"));
	printf("ft_strcmp - %i\n", ft_strcmp("123451", "12345a"));
	printf("ft_strcmp - %i\n", ft_strcmp("12345a", "123451"));
	printf("ft_strcmp - %i\n", ft_strcmp("12345a", "123456"));
	printf("//////////////////////////////////////\n");

	printf("//////////////_FT_STRDUP//////////////\n");
	printf("ft_strdup - %s\n", s1);
	printf("strdup - %s\n", s2);
	printf("ft_strdup - %s\n", s3);
	printf("strdup - %s\n", s4);
	printf("ft_strdup - %s\n", s5);
	printf("strdup - %s\n", s6);
	printf("//////////////////////////////////////\n");

	printf("//////////////_WRITE_//////////////\n");
	printf("ft_write: len = %zd\n", ft_write(1, "Hello!\n", 7));
	printf("write: len = %zd\n", write(1, "Hello!\n", 7));
	printf("ft_write: len = %zd\n", ft_write(1, "How much chars you able to count ?\n", 35));
	printf("write: len = %zd\n", write(1, "How much chars you able to count ?\n", 35));
	printf("ft_write: len = %zd\n", ft_write(1, "Hello!\n", 0));
	printf("write: len = %zd\n", write(1, "Hello!\n", 0));
	errno = 0;
	printf("ft_write: len = %zd\n", ft_write(-1, "Hello!\n", 6));
	printf("error code - %d\n", errno);
	errno = 0;
	printf("write: len = %zd\n", write(-1, "Hello!\n", 6));
	printf("error code - %d\n", errno);
	printf("//////////////////////////////////////\n");

	printf("//////////////_READ_//////////////\n");
	printf("ft_read: count = %i\n", count = ft_read(fd1, b1, 5));
	b1[count] = '\0';
	printf("ft_read: buf - %s\n", b1);
	printf("read: count = %i\n", count = read(fd2, b2, 5));
	b2[count] = '\0';
	printf("read: buf - %s\n", b2);
	printf("ft_read: count = %i\n", count = ft_read(fd1, b3, 500));
	b3[count] = '\0';
	printf("ft_read: buf - %s\n", b3);
	printf("read: count = %i\n", count = read(fd2, b4, 500));
	b4[count] = '\0';
	printf("read: buf - %s\n", b4);
	printf("ft_read: count = %i\n", count = ft_read(fd1, b5, 20));
	b5[count] = '\0';
	printf("ft_read: buf - %s\n", b5);
	printf("read: count = %i\n", count = read(fd2, b6, 20));
	b6[count] = '\0';
	printf("read: buf - %s\n", b6);
	printf("ft_read: count = %i\n", count = ft_read(fd1, b7, 0));
	b7[count] = '\0';
	printf("ft_read: buf - %s\n", b7);
	printf("read: count = %i\n", count = read(fd2, b8, 0));
	b8[count] = '\0';
	printf("read: buf - %s\n", b8);
	errno = 0;
	printf("ft_read: count = %i\n", count = ft_read(-1, b9, 5));
	b9[0] = '\0';
	printf("ft_read: buf - %s\n", b9);
	printf("error code - %i\n", errno);
	errno = 0;
	printf("read: count = %i\n", count = read(-1, b10, 5));
	b10[0] = '\0';
	printf("read: buf - %s\n", b10);
	printf("error code - %i\n", errno);
	printf("//////////////////////////////////////\n");

	return (0);
}