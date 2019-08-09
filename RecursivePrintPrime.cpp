#include <iostream>

void PrimePrint(const int& times);

int main(int argc, char ** argv)
{    
    std::cout << argc << std::endl;
    std::cout << argv[1] << std::endl;
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
                   return;
               } 
            else 
               {
                   std::cout << num << std::endl;
               }
        }
    }
}
