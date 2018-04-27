#include <iostream>
#include <thread>
//#include <chrono>
#include <unistd.h>

using namespace std;

void prue1()
{
    int segs = 2;
    int n=0;
    cout << "iniciando prue1 cada " << segs << " segundos" << endl;
    while(1)
    {
        n++;
        //std::this_thread::sleep_for(std::chrono::seconds(3));
        sleep(segs);
        cout << "ejecucion prue1 " << n << endl;
    }
    cout << "finalizando prue1" << endl;
}


void prue2()
{
    int segs = 3;
    int n=0;
    cout << "iniciando prue2 cada " << segs << " segundos" << endl;
    while(1)
    {
        n++;
        //std::this_thread::sleep_for(std::chrono::seconds(3));
        sleep(segs);
        cout << "ejecucion prue2 " << n << endl;
    }
    cout << "finalizando prue2" << endl;
}


int main()
{
    int segs = 5;
    int n=0;
    
    cout << "iniciando hilo1" << endl;
    std::thread uno (prue1);
    cout << "iniciando hilo2" << endl;
    std::thread dos (prue2);
    cout << "hilos iniciados" << endl;
    
    
    cout << "iniciando main cada " << segs << " segundos" << endl;
    while(1)
    {
        n++;
        //std::this_thread::sleep_for(std::chrono::seconds(3));
        sleep(segs);
        cout << "ejecucion main " << n << endl;
    }
    cout << "finalizando main" << endl;
    return 0;
}
