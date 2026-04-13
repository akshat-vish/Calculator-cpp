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
    cin >> choice;
    if(choice == 5) {
        cout << "EXITED THE CALCULATOR" << endl;
        break;}
    
    cout << "ENTER VALUE OF X : " << endl;
    cin >> x; 

    
    cout << "ENTER VALUE OF Y : " << endl;
    cin >> y;
    
    
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
    y == 0;
    return (double)x/y;
}
double CALCULATOR::calculate(int choice,double x, double y){
       
    switch(choice){
        case 1 : return add(x,y);
        case 2 : return sub(x,y);
        case 3 : return mul(x,y);
        case 4 : return div(x,y);
        default : 
        cout << "INVALID OPERATION" << endl;
        return 0;
        
    }
}