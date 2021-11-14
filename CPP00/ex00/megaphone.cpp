#include <iostream>

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else if (argc > 1) {
		for (int j = 1; j < argc; j++)	{
			int i = 0;
			while (argv[j][i])	{
				if (argv[j][i] > 96 && argv[j][i] < 123)
					argv[j][i] -= 32;
				i++;	}
			std::cout << argv[j];	}
		std::cout << std::endl;	}}