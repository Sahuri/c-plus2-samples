#include <iostream>
using namespace std;

class Food{
public:
    virtual string eat()
    {
        return "eating food";
    }
};

class Pecel:public Food{
    public:
        string eat()
        {
            return "eating pecel";
        }
};

class Mendoan:public Food{
    public:
        string eat()
        {
            return "eating mendoan";
        }
};

int main(){

    Food* eat1=new Pecel();
    Food* eat2=new Mendoan();
    Food* eat3=new Food();


   cout << eat1->eat() << endl;
   cout << eat2->eat() << endl;
   cout << eat3->eat() << endl;

}

