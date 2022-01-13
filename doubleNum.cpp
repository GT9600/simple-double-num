#include <iostream>
using namespace std;


void doubleNum(double array[], const int size);

//taking the number at i and doubling it, then display
void doubleNum(double array[], const int size){
    for (int i = 0; i < size; i++){
        cout << (array[i] * 2) <<endl;
    }


}

int main(){
//setting size of array, and receiving input
    const int SIZE = 5;
    double numsToDouble[SIZE];
    int i = 0;
    cout << "Enter 5 numbers to be doubled" << endl;
    for (int i = 0; i < SIZE; i++){
        cin >> numsToDouble[i];
        cin.get();
    }

    doubleNum(numsToDouble, SIZE);

    return 0;
}

