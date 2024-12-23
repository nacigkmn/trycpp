#include <iostream>

using namespace std;

int getMax(int num1, int num2, int num3)
{
    int maxNumb;

    if(num1 >= num2 && num1 >= num3) {
        maxNumb=num1;
    }
    else if(num2 >= num1 && num2 >= num3){
        maxNumb=num2;
    }
    else{
        maxNumb=num3;
    }

    return maxNumb;
}


int main()
{
    int x,y,z;

    cout << "Enter three numbers = ";
    cin >> x >> y >> x;



    int maxNumb= getMax(x,y,z);
    cout<<"Max number ="<<maxNumb;

    return 0;

}