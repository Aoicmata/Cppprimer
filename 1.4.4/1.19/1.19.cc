#include <iostream>

int main()
{
        int sum = 0,val = 0;
        std::cin >> sum >> val;
        if (sum >= val)
        {
                while (sum >= val)
                {
                        std::cout << sum << " ";
                        sum -= 1;
                }
        }
        else
        {       
                while (sum <= val)
                {
                        std::cout << sum << " ";
                        sum += 1;
                }
                
        }

}