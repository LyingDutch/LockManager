#ifndef LOCK_H
#define LOCK_H
#include <string>
#include <chrono>

namespace DoubleD
{
    class Lock
    {
    private:
        std::string m_name, m_user_id;
        double m_lifeTime;
        std::chrono::_V2::system_clock::time_point m_start;

    private:
        std::string m_createID();

    public:
        Lock(std::string _name, double _lifeTime);
        bool m_expired();
        std::string m_getName();
        std::string m_getUser_id();
    };
}

#endif
