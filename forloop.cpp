#include <iostream>

using namespace std;

int main()
{

    string phrase ="OslometMetroploitanUniversity";
    int numberOfLetters=0;

 for(int i=0; i<phrase.length(); i++){

    cout << phrase[i] << endl;
    numberOfLetters+=1;
 }
  cout << "Number of Letters =" <<numberOfLetters;

    return 0;
}