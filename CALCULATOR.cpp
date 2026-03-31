#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class CALCULATOR {
    public:
    double add(double x, double y );
    double sub(double x, double y );
    double mul(double x, double y );
    double div(double x, double y );
    double calculate(int choice, double x , double y);
    

};


int main(){
    double x = 0;
    double y = 0;
    int choice;
    double result;
    CALCULATOR obj;

    do {
    cout << "****************************" << endl;
    cout << "---WELCOME TO CALCULATOR----" << endl;

    cout << "SELECT 1 - ADD" << endl;
    cout << "SELECT 2 - SUB" << endl;
    cout << "SELECT 3 - MULTIPLY" << endl;
    cout << "SELECT 4 - DIVIDE" << endl;
    cout << "SELECT 5 - EXIT" << endl;
    cout << "ENTER YOUR OPERATION : " << endl;
    
    string input;
    getline(cin, input);
    if(input.length() != 1 ||
        input[0] < '1' ||
        input[0] > '5')
    {
        cout << "INVALID !" << endl;
        continue;
    }
    choice = input[0] - '0';

    if(choice == 5) {
        cout << "EXITED THE CALCULATOR" << endl;
        break;}
    

    cout << "ENTER VALUE OF X : " << endl;
    cin >> x;

    if(cin.fail()){ 
        cout << "INVALID" << endl;
        cin.clear();
        cin.ignore(1000, '\n');
        break;
    }

    cout << "ENTER VALUE OF Y : " << endl;
    cin >> y;

    if(cin.fail()){ 
        cout << "INVALID" << endl;
        cin.clear();
        cin.ignore(1000, '\n');
        break;
    }
    
    result = obj.calculate(choice , x ,y);
    cout <<"OUTPUT : " << result << endl;

      }
    while(choice != 5);

    cout << "****************************" << endl;
    return 0;
}

double CALCULATOR::add(double x, double y){
   return x + y ;
}
double CALCULATOR::sub(double x, double y){
    return x-y;
}
double CALCULATOR::mul(double x, double y){
    return x * y;
}
double CALCULATOR::div(double x, double y){
    return (double)x/y;
}
double CALCULATOR::calculate(int choice,double x, double y){
       
    switch(choice){
        case 1 : return add(x,y);
        break;
        case 2 : return sub(x,y);
        break;
        case 3 : return mul(x,y);
        break;
        case 4 : return div(x,y);
        break;
        default : 
        cout << "INVALID OPERATION" << endl;
        return 0;
        
    }
}