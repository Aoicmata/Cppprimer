#include <iostream>
int main()
{
        int a=0 ,b = 0;
        std::cin >> a >> b;
        for (int val = a;val <= b;++val)
                std::cout << val << ' ';
        std::cout << std::endl;
        return 0;

}