#include <iostream>
#include <time.h>
#include <cstdlib>

void eagle_or_tail(bool eagle_or_tail)
{
    if (eagle_or_tail == false)
    {
        std::cout << "its eagle!\n\n";
    }
    else
    {
        std::cout << "its tail!\n\n";
    }
}

bool get_bool()
{
    short max = 1;
    short min = 0;
    short num = min + rand() % (max-min);
    if(num == 1){return false;}  else if(num == 0) {return true;}
}

int main()
{
    srand(time(NULL));
    bool eagle_or_tail_ = get_bool();
    eagle_or_tail(eagle_or_tail_);
}
