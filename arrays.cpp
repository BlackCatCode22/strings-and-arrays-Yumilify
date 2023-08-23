#include <iostream> 
#include <cmath>

using namespace std; 

int main() 
{
    //Creating an int array 

    int myNumbers[12];
    myNumbers[0] = 11;
    myNumbers[1] = 23;
    myNumbers[2] = 112;
    myNumbers[3] = 234;
    myNumbers[10] = 1103;


    cout << myNumbers[1] << endl;
    cout << myNumbers[2] << endl;
    cout << myNumbers[3] << endl;


    //for loop 
    for (int i = 0; i < 12; i++) {
        cout << "\n\n " << i << "  " << myNumbers[i]; 
    }
    cout << endl << endl; 

    int numberGrid[4] [2] = {
                                {1, 2} ,
                                {3, 4} ,
                                {5, 6} ,
                                {7, 8} ,
    };
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 2; j++) {
                cout << numberGrid[i][j] << "   ";
        }
    cout << "\n\n\n";
    }
    cout << "\n\n\n";



    return 0; 
}