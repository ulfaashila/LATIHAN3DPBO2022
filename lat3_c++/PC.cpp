#include<iostream>
#include<string>
using namespace std;

#include "Processor.cpp"
#include "Disk.cpp"
#include "Ram.cpp"

class PC
{
private:
    // private atribute
    Processor proObj;
    Disk diskObj;
    Ram ramObj;
    int totalPrice;

public:
    // konstruktor
    PC() {}
    PC(Processor proObj, Disk diskObj, Ram ramObj)
    {
        this->proObj = proObj;
        this->diskObj = diskObj;
        this->ramObj = ramObj;
    }

    // menge-set nilai dari atribut 
    void setProObj(Processor proObj)
    {
        this->proObj = proObj;
    }
    void setDiskObj(Disk diskObj)
    {
        this->diskObj = diskObj;
    }
    
    void setRamObj(Ram ramObj)
    {
        this->ramObj = ramObj;
    }

    void setTotalPrice(int pro_Price, int disk_Price, int ram_Price)
    {
        this->totalPrice = pro_Price + disk_Price + ram_Price;
    }

    // mengembalikan nilai dari atribut 
    Processor getProObj()
    {
        return this->proObj;
    }

    Disk getDiskObj()
    {
        return this->diskObj;
    }

    Ram getRamObj()
    {
        return this->ramObj;
    }

    int getTotalPrice()
    {
        return this->totalPrice;
    }
    // menampilkan atribut Pc
    void outputPC()
    {
        this->proObj.outputProcessor();
        this->diskObj.outputDisk();
        this->ramObj.outputRam();

        this->setTotalPrice(this->proObj.getPrice(), this->diskObj.getPrice(), this->ramObj.getPrice());

        cout << "Total Price        : " << this->getTotalPrice() << endl;
    }

    // destructor
    ~PC() {}
};
