#include<iostream>
#include<string>
using namespace std;

class Ram
{
private:
    string capacity;
    int price;

public:
    // konstruktor
    Ram() {}
    Ram(string capacity, int price)
    {
        this->capacity = capacity;
        this->price = price;
    }

    void setCapacity(string capacity)
    {
        this->capacity = capacity;
    }

    string getCapacity()
    {
        return this->capacity;
    }

    void setPrice(int price)
    {
        this->price = price;
    }

    int getPrice()
    {
        return this->price;
    }

    void outputRam()
    {
        cout << "Ram Capacity       : " << this->getCapacity() << endl;
        cout << "Ram Price          : " << this->getPrice() << endl;
    }

    // destructor
    ~Ram() {}
};
