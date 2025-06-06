#ifndef IOFMTGUARD_HPP
#define IOFMTGUARD_HPP
#include <ios>
namespace erofick
{
//класс для сохранения и восстановления состояния потока
class iofmtguard
{
public:
    explicit iofmtguard(std::basic_ios<char>& s);
    ~iofmtguard();
private:
    std::basic_ios<char>& s_;
    std::streamsize precision_;
    std::basic_ios<char>::fmtflags flags_;
};
}

#endif
