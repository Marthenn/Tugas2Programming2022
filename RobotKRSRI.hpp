#ifndef __ROBOTKRSRI_HPP__
#define __ROBOTKRSRI_HPP__

#include ...

class RobotKRSRI: public Robot {
    // access modifier:
        // lengkapi atribut
        // Boneka* boneka; (hanya jika mengerjakan bonus)

    // access modifier:
        // default constructor: atribut nama dibebaskan, status OFF, jumlah kaki dibebaskan
        RobotKRSRI();

        // user defined constructor: atribut nama, status, dan jumlah_kaki diisi sesuai dengan parameter
        RobotKRSRI(string nama, state status, int jumlah_kaki);

        // copy constructor: copy semua atribut dari robot yang diberikan
        RobotKRSRI(const RobotKRSRI &robot);

        // destructor: jika mengerjakan bonus, delete boneka. jika tidak, biarkan berupa destructor kosong
        ~RobotKRSRI();

        // Mencetak "Api telah dipadamkan" jika status robot ON
        void padamkanApi();

        // Mencetak "Boneka telah diambil" jika status robot ON
        void ambilBoneka();

        // Mencetak "Boneka dengan nama <nama_boneka> telah diambil" jika status robot ON
        // Method ini dibuat hanya jika mengerjakan bonus
        void ambilBoneka(Boneka*);

        // Mencetak "Robot sedang berjalan" jika status robot ON
        void jalan();

};

#endif