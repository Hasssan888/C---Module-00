#include <iostream>

int main(int ac, char **av)
{
    std::string *argv;
    int i;
    int j;

    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        argv = new std::string[ac - 1];
        i = 1;
        while (i < ac)
        {
            argv[i - 1] = av[i];
            i++;
        }

        i = 0;
        while (i < ac - 1)
        {
            j = 0;
            while (argv[i][j])
            {
                if (std::islower(argv[i][j]))
                    argv[i][j] = std::toupper(argv[i][j]);
                j++;
            }
            std::cout << argv[i];
            i++;
        }
        std::cout << std::endl;
        delete[] argv;
    }
}