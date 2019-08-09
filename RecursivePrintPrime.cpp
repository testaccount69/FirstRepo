#include <iostream>

void PrimePrint(const int& times);

int main(int argc, char ** argv)
{    
    std::cout << argc << std::endl;
    for (int i = 0; i < argc; i++){ 
        std::cout << argv[i] << std::endl;
    }
    PrimePrint(atoi(argv[1]));
    return 0;   
}

void PrimePrint(const int& times)
{
    for (int i = 0; i <= times; i++)
    {
        for (int num = i; num > 0; num--)
        {
            if (i % num == 0) 
               {
               } 
            else 
               {
                   std::cout << num << std::endl;
               }
        }
    }
}
