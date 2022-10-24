#include <iostream>
#include <time.h>
#include <cstdlib>



short randto()
{
    short min = 1;
    short max = 6;
    return min + rand() % (max-min);
}

void data_out(short dice)
{
    std::cout << "it's dice " << dice << "\n"
}

int main()
{
    srand(time(NULL));
    short dice = randto();
    data_out(dice);
    return 0;
}

