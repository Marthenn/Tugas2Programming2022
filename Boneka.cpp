#include "Boneka.hpp"

//Default Constructor
Boneka::Boneka(){
    nama = "Default\n";
}

//User Defined Constructor
Boneka::Boneka(string nama){
    this->nama = nama;
}

//Copy Constructor
Boneka::Boneka(const Boneka &boneka){
    this->nama = boneka.nama;
}

//Destructor
Boneka::~Boneka(){
}

string Boneka::getNama(){
    return this->nama;
}