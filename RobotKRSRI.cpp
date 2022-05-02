#include "RobotKRSRI.hpp"
#include "Boneka.hpp"

//Default Constructor
RobotKRSRI::RobotKRSRI(){
    nama = "Default";
    status = OFF;
    jumlah_kaki = 0;
    boneka = NULL;
}

//User Defined Constructor
RobotKRSRI::RobotKRSRI(string nama, state status, int jumlah_kaki){
    this->nama = nama;
    this->status = status;
    this->jumlah_kaki = jumlah_kaki;
    this->boneka = NULL;
}

//Copy Constructor
RobotKRSRI::RobotKRSRI(const RobotKRSRI &robot){
    this->nama = robot.nama;
    this->status = robot.status;
    this->jumlah_kaki = robot.jumlah_kaki;
    this->boneka = robot.boneka;
}

//Destructor
RobotKRSRI::~RobotKRSRI(){
    //Delete Boneka
    this->boneka->~Boneka();
}

void RobotKRSRI::padamkanApi(){
    if (status == ON){ //cek status nyala robot
        cout<<"Api telah dipadamkan\n";
    }
    else{
        cout<<"Robot belum dinyalakan\n";
    }
}

void RobotKRSRI::ambilBoneka(){
    if(status==ON){ //cek status nyala robot
        cout<<"Boneka telah diambil\n";
    }
    else{
        cout<<"Robot belum dinyalakan\n";
    }
}

//Bonus
void RobotKRSRI::ambilBoneka(Boneka* boneka){
    if(status==ON){ //cek status nyala robot
        cout<<"Boneka dengan nama "<<boneka->getNama()<<" telah diambil\n";
    }
    else{
        cout<<"Robot belum dinyalakan\n";
    }
}

void RobotKRSRI::jalan(){
    if(status==ON){ //cek status nyala robot
        cout<<"Robot sedang berjalan\n";
    }
    else{
        cout<<"Robot belum dinyalakan\n";
    }
}