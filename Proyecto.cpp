#include<iostream>
#include<math.h>
#include<string>

using namespace std;
 int r, n,  i, fn=1; 

 double factorial(int n, int r){
     double  f=1.0, fr=1.0;
     long totalfinal = 0, total = 0, tf =1;
    for(i=n; i>=1; i--){
        f *=i;
        //cout<<"count "<<f<<endl;     
    }
    cout<<"count "<<f<<endl;
     for(int a=r; a>=1; a--){
        fr *=a;
        //cout<<"count "<<f<<endl;     
        }
        cout<<"count "<<fr<<endl;
        total += fr-f;
        fn= abs(total);
       
    
        cout<<"total  fn"<<fn<<endl;
       

        for(int b=fn; b> fn -3; b--){
            tf *= b;
            
            cout<<"factorial de la resta fr*f:"<<tf<<endl;  
               
        }
        totalfinal =tf/fn;
        cout<<"total final tf/fn "<<totalfinal <<endl;
        return totalfinal;
}

int main(){
    cout<<"ingrese valor de n ";
    cin>>n;
    cout<<"ingrese valor de r ";
    cin>>r;
     cout<<"si llega ";
    double resufactorial = factorial(n, r);
    cout<<"si llega 11"<<endl;
   cout<<""<<resufactorial;


    return 0;
}

