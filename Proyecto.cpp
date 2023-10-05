#include<iostream>
#include<math.h>
#include<string>

using namespace std;
 int r, n,  i, fn=0; 

 double factorial(int n, int r){
     double  f=1.0, fr=1.0;
     long totalfinal = 0, total = 0, tf =0;
     /*factorial n*/
    for(i=n; i>=1; i--){
        f *=i;   
    }
    cout<<"datos de n "<<f<<endl;
        total = n-r;
        /*el abs es para eliminar los signos negativos de la respuesta*/
       fn += abs(total);
       cout<<"total: "<<total;
    
        cout<<"total   de resta   "<<fn<<endl;
          /*factorial n-r*/
        for(int b= total ; b>=1; b--){
            tf*= b;   
            cout<<"coutor r: "<<b;
        }
        cout<<"factorial de la resta n-r:"<<tf<<endl;  
        cout<<"factorial n: "<<f<<endl;
        cout<<"factorial r: "<<tf<<endl;
        totalfinal = f/tf;
        cout<<"total del factorial "<<totalfinal<<endl;
        return totalfinal;
}

int main(){
    cout<<"ingrese valor de n ";
    cin>>n;
    cout<<"ingrese valor de r ";
    cin>>r;
     cout<<"si llega ";
    double resufactorial = factorial(n, r);
   cout<<""<<resufactorial<<endl;


    return 0;
}

