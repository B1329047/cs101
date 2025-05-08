#include <iostream>
#include <string>
using namespace std;

class Car{
    private:
    int m_maxseating;
    int m_price;
    void m_UpdatePrice(int base = 500000){m_price = m_maxseating*base;}
    public:
    string m_brand;
    string m_model;
    int m_year;
    
    Car(string x, string y, int z, int s){
        m_brand=x,m_model=y,m_year=z,m_maxseating=s,m_UpdatePrice();
    }
    int get_Maxseating(){return m_maxseating;}
    int get_price(){return m_price;}
};

class BMW_Car : public Car{
    private:
    string m_DriveMode;
    
    public:
    BMW_Car(string y, int z, int s) : Car("BMW", y, z, s){
        cout << "constructing BMW_Car\n";
        m_DriveMode ="Rear-wheel";
    }
    
    string get_DriveMode(){
        return m_DriveMode;
    }
};

class AUDI_Car : public Car{
    private:
    string m_DriveMode;
    
    public:
    AUDI_Car(string y, int z, int s) : Car("AUDI", y, z, s){
        cout << "constructing AUDI_Car\n";
        m_DriveMode ="Front-wheel";
    }
    
    string get_DriveMode(){
        return m_DriveMode;
    }
};

class BENZ_Car : public Car{
    private:
    string m_DriveMode;
    
    public:
    BENZ_Car(string y, int z, int s) : Car("BENZ", y, z, s){
        cout << "constructing BENZ_Car\n";
        m_DriveMode ="Front-wheel";
    }
    
    string get_DriveMode(){
        return m_DriveMode;
    }
};

int main()
{
    BMW_Car bmw("X5", 2023, 5);
    cout<< "BMWDriveMode :"<<bmw.get_DriveMode()<<endl;
    AUDI_Car audi("X6", 2024, 5);
    cout<< "AUDIDriveMode :"<<audi.get_DriveMode()<<endl;
    BENZ_Car BENZ("X7", 2025, 5);
    cout<< "BENZDriveMode :"<<BENZ.get_DriveMode()<<endl;
    return 0;
}
