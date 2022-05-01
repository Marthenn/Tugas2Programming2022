#ifndef __ROBOT_HPP__
#define __ROBOT_HPP__

#include ...

class Robot {
    // access modifier:
        // lengkapi atribut
    
    // access modifier:
        // default constructor: atribut nama dibebaskan, status OFF
        Robot();

        // user defined constructor: atribut nama, status diisi sesuai dengan parameter
        Robot(string nama, state status);

        // copy constructor: copy semua atribut dari robot yang diberikan
        Robot(const Robot &robot);

        // destructor: buat destructor kosong
        ~Robot();

        // Mencetak "Robot telah dinyalakan"
        void nyala();

        // Mencetak "Robot telah dimatikan"
        void mati();

        // Implementasi dibuat di kelas turunan
        virtual void jalan() = 0;
};

#endif