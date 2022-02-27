#include<iostream>
#include<string>
using namespace std;

class Disk
{
private:
    string type;
    string capacity;
    int price;

public:
    // konstruktor
    Disk() {}
    Disk(string type, string capacity, int price){
        this->type = type;
        this->capacity = capacity;
        this->price = price;
    }

    void setType(string type)
    {
        this->type = type;
    }

    string getType()
    {
        return this->type;
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

    void outputDisk()
    {
        cout << "Disk Type          : " << this->getType() << endl;
        cout << "Disk Capacity      : " << this->getCapacity() << endl;
        cout << "Disk Price         : " << this->getPrice() << endl;
    }

    // destructor
    ~Disk() {}
};
