#include <iostream>

using namespace std;


class Chef
{
    public:
     void makeChicken(){
        cout<< "Chef makes chicken" <<endl;
     }

    
     void makeSalad(){
        cout<< "Chef makes salad" <<endl;
     }

     void makeSpecialDish(){
        cout<< "Chef makes bbq ribs" <<endl;
     }
};


class ItalianChef : public Chef {
    public:
         void makePasta(){
        cout<< "The Italian Chef makes pasta!" <<endl;
     }
         void makeSpecialDish(){ 
        cout<< "The Italian Chef makes a delicious pizza!" <<endl;
     }

};





int main()
{

    Chef chef;
        chef.makeSpecialDish();

    ItalianChef italianChef;
        italianChef.makeSpecialDish();

    return 0;
}