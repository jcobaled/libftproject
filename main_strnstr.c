#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
  setbuf(stdout, NULL);
  printf("%s  -- ft_strnstr\n", ft_strnstr("", "", 100));
  printf("%s  -- strnstr\n", strnstr("", "", 100));
  printf("---------------------------------------------------\n");
  printf("%s  -- ft_strnstr\n", ft_strnstr("", "asdf", 100));
  printf("%s  -- strnstr\n", strnstr("", "asdf", 100));
  printf("---------------------------------------------------\n");
  printf("%s  -- ft_strnstr\n", ft_strnstr("aaaholaaaaahola que", "hola que", 20));
  printf("%s  -- strnstr\n", strnstr("aaaholaaaaahola que", "hola que", 20));
  printf("---------------------------------------------------\n");
  printf("%s  -- ft_strnstr\n", ft_strnstr("aaaholaaaaahola queal;jf", "hola que", 20));
  printf("%s  -- strnstr\n", strnstr("aaaholaaaaahola queal;jf", "hola que", 20));
  printf("---------------------------------------------------\n");
  printf("%s  -- ft_strnstr\n", ft_strnstr("aaaholaaaaahola queal;jf", "hola que", 50));
  printf("%s  -- strnstr\n", strnstr("aaaholaaaaahola queal;jf", "hola que", 50));
  printf("---------------------------------------------------\n");
  printf("%s  -- ft_strnstr\n", ft_strnstr("aaaao", "aaao", 20));
  printf("%s  -- strnstr\n", strnstr("aaaao", "aaao", 20));
  printf("---------------------------------------------------\n");
  printf("%s  -- ft_strnstr\n", ft_strnstr("aaaao", "", 20));
  printf("%s  -- strnstr\n", strnstr("aaaao", "", 20));
  printf("---------------------------------------------------\n");
  printf("%s  -- ft_strnstr\n", ft_strnstr("aaaoo", "aaaoe", 20));
  printf("%s  -- strnstr\n", strnstr("aaaoo", "aaaoe", 20));
  printf("---------------------------------------------------\n");
  printf("%s  -- ft_strnstr\n", ft_strnstr("aaaao", "aaaao", 4));
  printf("%s  -- strnstr\n", strnstr("aaaao", "aaaao", 4));
  printf("---------------------------------------------------\n");
  printf("%s  -- ft_strnstr\n", ft_strnstr("Hola", "Hola", 0));
  printf("%s  -- strnstr\n", strnstr("Hola", "Hola", 0));
  printf("---------------------------------------------------\n");
  return 0;
}
