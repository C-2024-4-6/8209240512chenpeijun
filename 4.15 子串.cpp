#include <iostream>
#include <cstring>
using namespace std;
class car
{
private:
    int power;
    int seat;
public:
    car(int pow, int sea)
    {
        power = pow;
        seat = sea;
    }
    void show()
        cout << "car power:" << power << ",car seat:" < seat;
};
class wagon
{
private:
    int power;
    int load;
public:
    car(int pow, int loa)
    {
        power = pow;
        load = loa;
    }
    void show()
        cout << "wagon power:" << power << ",wagon load:" < load;
};
class statewagon :public car, public wagon
{
    statewagon(int pow,int sea,int loa)::car(pow,sea),wagon(loa)
}

int main() {
    statewagon sta1(10,11,12);
    sta1::show()
}