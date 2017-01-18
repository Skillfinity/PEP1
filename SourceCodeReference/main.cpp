#include <iostream>

int main()
{
    std::cout<<"bool:\n\n"<<sizeof(bool)<<"bytes"<<std::endl;
    std::cout<<"char:\n\n"<<sizeof(char)<<"bytes"<<std::endl;
    std::cout<<"wchar_t:\t"<<sizeof(wchar_t)<<"bytes"<<std::endl;
    std::cout<<"char16_t:\t"<<sizeof(char16_t)<<"bytes"<<std::endl;
    std::cout<<"char32_t:\t"<<sizeof(char32_t)<<"bytes"<<std::endl;
    std::cout<<"short:\n\n"<<sizeof(short)<<"bytes"<<std::endl;
    std::cout<<"long:\n\n"<<sizeof(long)<<"bytes"<<std::endl;
    std::cout<<"int:\n\n"<<sizeof(int)<<"bytes"<<std::endl;
    std::cout<<"long long:\n\n"<<sizeof(long long)<<"bytes"<<std::endl;
    std::cout<<"float:\n\n"<<sizeof(float)<<"bytes"<<std::endl;
    std::cout<<"double:\n\n"<<sizeof(double)<<"bytes"<<std::endl;
     std::cout<<"long double:\n\n"<<sizeof(long double)<<"bytes"<<std::endl;
}
