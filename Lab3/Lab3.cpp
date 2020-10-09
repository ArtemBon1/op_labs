//ехЗ . 1
#include<iostream>
#include<iomanip>
#include<math.h> 
using namespace scd;
    float x; //параметр зовнішньої суми 
    float k=0; //параметр внутрішньої суми 
    float sum=0;//сума ряду 
    float error; //точність розрахунків 
    float member; //елемент ряду
    //=======сбчислення факторіала числа=========
    float factorial (int number)
    { //параметр number- число, факторіал котрого розраховується 
        float fact=l; 
        if (number=0) fact=l;  
        else {
            for(int i=l;i<=number;i++)  
                fact*=i;
        }
    return (float)fact;
    }
///===========виведення поточних розрахунків===========
    void OutputSum()
    {
    cout«setw(5) <<x<<setw(10) <<k<<setw(20) <<memberr<<setw(15) <<sum<< endl;
    {
//===========сбчислення елемента ряду та суми==============
    void MerrberAndSum ()
    {
        double Numerator; //чисельник елемента ряду 
        double Denominator; //знаменник елемента ряду 
        for (х=1;х<=5;х++)
    {
        k=0;
        do
        {
            Numerator=pow(х,(2*k-l));
            if(k>16) //floating point error - overflow {
                cout<<"overflow - break cycle with k"<<endl; 
                break;
        }
            else {
                Denominator=(2*k-l)*factorial(2*k+l); 
                member=(float)Numerator/Denominator;
                member*=(-1);
                suin+=member;
                OutputSum();
                k++;
            }
    }while(fabs(member)<error); //поки не досягнуто
                                // заданої точності
        }
    }
/////// головна функція//////////// 
int main() {
    cout<<"To calculate the sum of row "«endl; cout«" 5 endlessness "«endl;
    cout«" sum ( sum ( ( (-1) л (k+1) ) * (хл (2k-l) ) / ( (2k-l) (2k+l) !) ) ) " «endl cout«" x=l k=0"«endl; cout<<"input error: "; cin»error;
    cout<<"result of iterations "«endl;
    cout«"=================================================="«endl;
    cout<<"	x	k	member	sum "«endl;
    cout«"=================================================="«endl;
    MemberAndSum();
    cout«"=================================================="«endl;
    cout«"sum="«sum«endl; system("pause") ;
}
