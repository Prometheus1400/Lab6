#include <iostream>
#include "Header.hpp"
using namespace std;

int main(){
    DartBoard MyBoard;

    cout << "This program simulates throwing darts at a dartboard and calculating pi from the ratio of darts that hit the target.\n" << endl;
    cout << "Enter how many darts to throw: ";
    long long int to_throw;
    cin >> to_throw;
    cout << "\n";

    MyBoard.Throw(to_throw);
    cout << MyBoard.get_thrown() << " darts were thrown"<< endl;
    cout << MyBoard.get_hit() <<" darts hit the target" << endl;
    cout << "The estimate for pi is: " << MyBoard.Get_Pi() << endl;
}