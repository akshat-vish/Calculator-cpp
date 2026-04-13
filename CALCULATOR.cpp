#include <iostream>
#include <cmath>
using namespace std;

class CALCULATOR {
    public:
    double add(double x, double y );
    double sub(double x, double y );
    double mul(double x, double y );
    double div(double x, double y );
    int type(int mode);
    double calculate(int choice, double x , double y);
    

};

class Scientific_calculator : public CALCULATOR{
    public:
            double power(double x,double y){
                return pow(x,y);
            }
            double sqroot(double x) {
                return sqrt(x);
            }
            double sine(double x) {
                return sin(x);
            }
            double cosine(double x) {
                return cos(x);
            }
            double tangent(double x) {
                return tan(x);
            }
};



int main(){
    double x = 0;
    double y = 0;
    int mode;
    int choice;
    double result;
    CALCULATOR obj1;
    Scientific_calculator obj2;

    do {
    cout << "****************************" << endl;
    cout << "---WELCOME TO CALCULATOR----" << endl;

    cout << "SELECT MODE : " << endl;
    cout << "1. Normal" << endl;
    cout << "2.Scientific" << endl;
    cin >> mode;

    obj1.type(mode);
    if (mode == 1)
    {
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
    
    
    result = obj1.calculate(choice , x ,y);
    cout <<"OUTPUT : " << result << endl;
      }
    
    else if(mode == 2){
        cout << "Scientific mode.......soon" << endl;
    }
    
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
int CALCULATOR::type(int mode){
    switch(mode){
case 1:
    cout << "Normal MODE" << endl;
    break;

case 2:
    cout << "Scientific MODE" << endl;
    break;

default:
    cout << "Invalid option" << endl;
    break;
}
    return 0;
}
