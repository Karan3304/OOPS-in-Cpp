#include <iostream>
using namespace std;

class GPS
{
public:
    void navigate()
    {
        cout << "Showing route to destination..." << endl;
    }
};

class MusicPlayer
{
public:
    void playMusic()
    {
        cout << "Playing music..." << endl;
    }
};

class SmartCar : public GPS, public MusicPlayer
{
public:
    void carInfo()
    {
        cout << "Smart Car is ready!" << endl;
    }
};

int main()
{
    SmartCar car;

    car.carInfo();
    car.navigate();
    car.playMusic();

    return 0;
}