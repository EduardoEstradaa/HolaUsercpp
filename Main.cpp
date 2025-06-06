#include <iostream>

using namespace std;

int main(){
    string user;
    
    cout<<"Ingrese su nombre "<<endl;

    cin>>user;

    if (user != "" || user != " "){
        cout<<"Hola buendo dias"<<user<<endl;
    }else{
        cout <<"sea serio no ingreso nada"<<endl;
    }

}
