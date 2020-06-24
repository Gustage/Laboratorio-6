#include <iostream>
using namespace std;
int main(){
    int size, n;
    cout<<"Digite el tamano del arreglo";
    cin>>size;
    while (size<1);

    int array [size];
    for (int i = 0; i <size; i++){
        cout<<endl<<"Digite el dato numero "<<i+1<<": ";
        cin>>array[i];
    }
    cout<<endl<<"Ingrese el numero que se contara: ";
    cin>>n;
    int suma=0;
    for (int i = 0; i <size; i++){
        if(array[i]==n){
            suma+=1;
        }
    }
    cout<<endl<<"El numero "<<n<<" esta "<<suma;
    string mostrar=(suma==1)?"vez en el arreglo" : "veces en el arreglo";
    cout<<mostrar<<endl<<endl;
    return 0;
}