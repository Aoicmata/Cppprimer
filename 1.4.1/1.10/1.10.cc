#include <iostream>
int main()
{
        int sum = 10,val = 10;
        while (val >= 1)
        {
                std::cout << sum << " ";
                sum -= 1;
                --val;
        }
        std::cout << std::endl;
        return 0;
        
}