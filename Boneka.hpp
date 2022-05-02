#ifndef __BONEKA_HPP__
#define __BONEKA_HPP__

// DIBUAT HANYA JIKA MENGERJAKAN BONUS
#include <iostream>
using namespace std;

class Boneka {
    // access modifier:
        // lengkapi atribut
    private:
        string nama;
    
    // access modifier:
    public:
        // default constructor: atribut nama dibebaskan
        Boneka();

        // user defined constructor: atribut nama diisi sesuai dengan parameter
        Boneka(string nama);

        // copy constructor: copy semua atribut dari boneka yang diberikan
        Boneka(const Boneka &boneka);

        // destructor: buat destructor kosong
        ~Boneka();

        // mengembalikan nama boneka
        string getNama();
};

#endif