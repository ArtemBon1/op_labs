#include<iostream>
#include<math.h>

using namespace std;

int zad1() {
    
    float x,y,res;
    bool tf;
    string stop;
    
    tf = true;
    
    while (tf) {
        
        cout << "Enter x and y:" << endl;
        cout << "X = ";
        cin >> x;
        cout << "Y = ";
        cin >> y;
        
        if ((x > 0) && (y > 0) && (x!=y)) {
            res = (x+y) / (x-y);
        }
        else if (x>y) {
            res = pow(x-y,2) * pow(x+y,2);
        }
        
        cout << endl << "Answer = " << res << endl;
        
        cout << "Type any key to restart or 'stop' to finish..." << endl;
    
    cin >> stop;
    if ((stop == "stop") || (stop =="STOP")) {
        tf = false;
    }
    cout << endl;
	system("pause");
	system("cls");
	
    }
    
    return 0;
    
}

int zad2() {
    
    float a, b, c, d;
    string stop;
    bool tf;
    
    tf = true;
    
    while (tf) {
        
    cout << "Enter parameters of first rectangle: " << endl;
    
    cout << "Side А = ";
    cin >> a;
    cout << "Side B = ";
    cin >> b;
    
    cout  << "Second rectangle: " << endl << "Side C = ";
    cin >> c;
    cout << "Side D = ";
    cin >> d;
    
    if ((a == 0) || (b == 0) || (c == 0) || (d == 0)) {
        cout << "Please, enter correct parameters";
    }
    
    else if (((c >= a) && (c >= b)) && ((d >= a) || (d >= b))) {
        cout << "Yes";
    }    
    else {
        cout << "No";
    }
    
    cout << endl << "Type any key to restart or 'stop' to finish..." << endl;
    
    cin >> stop;
    if ((stop == "stop") || (stop =="STOP")) {
        tf = false;
    }
    cout << endl;
	system("pause");
	system("cls");
    }
    return 0;
}

int main()
{
    //setlocate(LC_ALL, "ru");
    bool tf;
    string stop;
    int switcher;
    
    tf = true;

    cout << "Баліцький Артем ІПЗ-13" << endl;

    while (tf) {
        
    cout << "Choose the number of task (1/2):";
    cin >> switcher;

    switch (switcher) {
        case 1: zad1();
        break;
        case 2: zad2();
        break;
        default:
        cout << "Enter correct number (1 or 2)";
    }
    cin >> stop;
    if ((stop == "stop")||(stop == "STOP")) {
        tf = false;
    }
    }

    return 0;
}
