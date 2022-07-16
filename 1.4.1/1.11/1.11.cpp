#include <iostream>
int main()
{
        int sum = 0,val = 0;
        std::cin >> sum >> val;
        while (sum >= val)//  前数大于后数
        {
                std::cout << sum << " ";
                sum -= 1;//递减
        }
        while (sum <= val)//  前数小于后数
        {
                std::cout << sum << " ";
                sum += 1;//递加
        }
        std::cout << std::endl;
        return 0;
        
}