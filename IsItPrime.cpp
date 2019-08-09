#include <iostream>

bool IsItPrime(int);

int main(int argc, char ** argv)
{  
    std::cout << *((*argv)+1) << std::endl;
    return 1;
    if (argc != 2)
    {
        std::cout << "Invalid number of arguments" << std::endl;
    }
    else
    {
        IsItPrime(atoi(argv[1]));
    }
}

bool IsItPrime(int prime)
{
    for (int i = prime - 1; i >= 2; i--)
    {   
        if (prime % i == 0)
        {
            return false;
        } 
        return true;
    }
    return true;
}


