#include <iostream>

class Zombie{
    private:
        std::string name;
    public:
        Zombie(std::string name);
        void    announce(void);
        ~Zombie(void);
};
