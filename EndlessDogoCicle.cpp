#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <unistd.h>
#include <chrono>
#include <thread>
//#include <termios.h>
//Made by Water :3

using namespace std;

void moverPerro();
void moverPerro2();
void accion();
int i = 0;
bool final = true;

int main(){
    char want;
    //char key;

    cout<<"You want to see a pretty dog? (Y/n) ";
    cin>>want;

    //if con else if, solo para preguntar si pone si o no u otra cosa xd
    if(want == 'Y' || want == 'y'){
        accion();
    }else if(want == 'n' || want == 'N') {
        return 0;
    }else if(want != 'n' || want != 'N' || want != 'y' || want != 'Y'){
        cout<<"Hmmm... please insert yes or no (Y/n) ";
        cin>>want;
        if(want == 'Y' || want == 'y'){
            accion();
        }else if(want == 'n' || want == 'N') {
            return 0;
        }else if(want != 'n' || want != 'N' || want != 'y' || want != 'Y'){
            cout<<"Seriously... insert yes or no (Y/n) ";
            cin>>want;
            if(want == 'Y' || want == 'y'){
                accion();
            }else if(want == 'n' || want == 'N') {
                return 0;
            }else if(want != 'n' || want != 'N' || want != 'y' || want != 'Y'){
                cout<<"Really!! just insert yes or no, nothing complicated ";
                cin>>want;
                if(want == 'Y' || want == 'y'){
                    accion();
                }else if(want == 'n' || want == 'N') {
                    return 0;
                }else if(want != 'n' || want != 'N' || want != 'y' || want != 'Y'){
                    cout<<"Okay fuck off 凸(｀⌒´メ)凸";
                }
            }
        }
    }
}

void accion(){
    while(final == true){
        for(i = 0; i < 2 ; i++){
            moverPerro();
            moverPerro2();
        }
        i = 0;
    }
}

void moverPerro2(){
    system("clear"); //para limpiar la consola y evitar que las cadenas queden pegadas una tras otra
    //Imprimiendo el perro de undertale
    cout<<"░░░░░░░░░░░░░░░░░░░░░░░░░░░░  ░░░░░░░░░░░░░░░░░░░░░░░░░░░░"<<endl;
    cout<<"░░░░░▄▀▄▀▀▀▀▄▀▄░░░░░░░░░░░░░  ░░░░░▄▀▄▀▀▀▀▄▀▄░░░░░░░░░░░░░"<<endl;
    cout<<"░░░░░█░░░░░░░░▀▄░░░░░░░░░░░░  ░░░░░█░░░░░░░░▀▄░░░░░░▄░░░░░"<<endl;
    cout<<"░░░░█░░▀░░▀░░░░░▀▄▄░░░░░░░░░  ░░░░█░░▀░░▀░░░░░▀▄▄░░█░█░░░░"<<endl;
    cout<<"░░░░█░▄░█▀░▄░░░░░░░▀▀▀▀▀▀▀▄░  ░░░░█░▄░█▀░▄░░░░░░░▀▀▀░█░░░░"<<endl;
    cout<<"░░░░█░░▀▀▀▀░░░░░░░░░░░░█▀▀░░  ░░░░█░░▀▀▀▀░░░░░░░░░░░░█░░░░         Water was Here!"<<endl;
    cout<<"░░░░█░░░░░░░░░░░░░░░░░░█░░░░  ░░░░█░░░░░░░░░░░░░░░░░░█░░░░"<<endl;
    cout<<"░░░░█░░░░░░░░░░░░░░░░░░█░░░░  ░░░░█░░░░░░░░░░░░░░░░░░█░░░░"<<endl;
    cout<<"░░░░░█░░▄▄░░▄▄▄▄░░▄▄░░█░░░░░  ░░░░░█░░▄▄░░▄▄▄▄░░▄▄░░█░░░░░"<<endl;
    cout<<"░░░░░█░▄▀▀▄▀░░░▀▄▀░█░▄▀░░░░░  ░░░░░▀▄▀░█░▄▀░░█░▄▀▀▄▀░░░░░░"<<endl;
    cout<<"░░░░░░▀░░░░░░░░░░░░░▀░░░░░░░  ░░░░░░░░░░▀░░░░░▀░░░░░░░░░░░"<<endl;
    cout<<""<<endl;
    cout<<"Press Ctrl + C to Exit"<<endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(150)); //un sleep mucho mejor, asi puedo usar milisegundos
    //sleep(0); Sleep anterior
}

void moverPerro(){
    //Realmente es una copia casi casi del codigo de arriba
    system("clear");
    cout<<"░░░░░░░░░░░░░░░░░░░░░░░░░░░░  ░░░░░░░░░░░░░░░░░░░░░░░░░░░░"<<endl;
    cout<<"░░░░░▄▀▄▀▀▀▀▄▀▄░░░░░░░░░░░░░  ░░░░░▄▀▄▀▀▀▀▄▀▄░░░░░░░░░░░░░"<<endl;
    cout<<"░░░░░█░░░░░░░░▀▄░░░░░░▄░░░░░  ░░░░░█░░░░░░░░▀▄░░░░░░░░░░░░"<<endl;
    cout<<"░░░░█░░▀░░▀░░░░░▀▄▄░░█░█░░░░  ░░░░█░░▀░░▀░░░░░▀▄▄░░░░░░░░░"<<endl;
    cout<<"░░░░█░▄░█▀░▄░░░░░░░▀▀▀░█░░░░  ░░░░█░▄░█▀░▄░░░░░░░▀▀▀▀▀▀▀▄░"<<endl;
    cout<<"░░░░█░░▀▀▀▀░░░░░░░░░░░░█░░░░  ░░░░█░░▀▀▀▀░░░░░░░░░░░░█▀▀░░         Water was Here!"<<endl;
    cout<<"░░░░█░░░░░░░░░░░░░░░░░░█░░░░  ░░░░█░░░░░░░░░░░░░░░░░░█░░░░"<<endl;
    cout<<"░░░░█░░░░░░░░░░░░░░░░░░█░░░░  ░░░░█░░░░░░░░░░░░░░░░░░█░░░░"<<endl;
    cout<<"░░░░░█░░▄▄░░▄▄▄▄░░▄▄░░█░░░░░  ░░░░░█░░▄▄░░▄▄▄▄░░▄▄░░█░░░░░"<<endl;
    cout<<"░░░░░▀▄▀░█░▄▀░░█░▄▀▀▄▀░░░░░░  ░░░░░█░▄▀▀▄▀░░░▀▄▀░█░▄▀░░░░░"<<endl;
    cout<<"░░░░░░░░░░▀░░░░░▀░░░░░░░░░░░  ░░░░░░▀░░░░░░░░░░░░░▀░░░░░░░"<<endl;
    cout<<""<<endl;
    cout<<"Press Ctrl + C to Exit"<<endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(150));
    //sleep(1); Sleep anterior
}
