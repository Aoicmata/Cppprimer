#include <iostream>
int main()
{
        int sum = 0,val = 0;
        std::cin >> sum >> val;
        while (sum >= val)
        {
                std::cout << sum << " ";
                sum -= 1;
        }
        while (sum <= val)
        {
                std::cout << sum << " ";
                sum += 1;
        }
        std::cout << std::endl;
        return 0;
        
}