#include <iostream>

using namespace std;

int getMax(int num1, int num2)
{
    int max_numb;

    if(num1>num2) {
        max_numb=num1;
    }
    else{
        max_numb=num2;
    }

    return max_numb;
}


int main()
{

    int max_numb= getMax(3,7);
    cout<< "Max number ="<<max_numb;

    return 0;

}