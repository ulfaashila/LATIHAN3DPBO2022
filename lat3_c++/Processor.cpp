#include<iostream>
#include<string>
using namespace std;

class Processor
{
private:
    string name;
    int price;
    
public:
    //constructor
    Processor(){}
    Processor(string name, int price){
        this->name = name;
        this->price = price;
    }

    //setter & getter 
    void setName(string name)
    {
        this->name = name;
    }

    string getName()
    {
        return this->name;
    }

    void setPrice(int price)
    {
        this->price = price;
    }

    int getPrice()
    {
        return this->price;
    }

    void outputProcessor()
    {
        cout << "Processor name     : " << this->getName() << endl;
        cout << "Processor Price    : " << this->getPrice() << endl;
    }

    // destructor
    ~Processor() {}
};   
