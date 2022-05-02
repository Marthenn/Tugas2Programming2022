#include "Robot.hpp"

//Default Constructor Robot
Robot::Robot(){
    nama = "Default";
    status = OFF;
}

//User Defined Constructor Robot
Robot::Robot(string nama, state status){
    this->nama = nama;
    this->status = status;
}

//Copy Constructor dari robot
Robot::Robot(const Robot &robot){
    this->nama = robot.nama;
    this->status = robot.status;
}

//Destructor Kosong
Robot::~Robot(){
}

//Menyalakan Robot
void Robot::nyala(){
    this->status = ON; //ubah status
    cout<<"Robot telah dinyalakan\n"; //nyatakan sudah menyala
}

//Mematikan Robot
void Robot::mati(){
    this->status = OFF; //ubah status
    cout<<"Robot telah dimatikan\n"; //nyatakan sudah mati
}