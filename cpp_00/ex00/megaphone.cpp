#include <iostream>

int main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for(int i = 2; i <= ac; i++) {
			for(int j = 0; av[i - 1][j] != '\0'; j ++) {
				av[i - 1][j] = toupper(av[i - 1][j]);
			}
			std::cout << av[i - 1];
		}
		std::cout << std::endl;
	}
	return 0;
}