#include<iostream>
#include<fstream>

using namespace std;

class shopping{
    private:
        int pcode;
        float pice;
        float dis;
        string pname;
    
    public:
        void menu();
        void administrator();
        void buyer();
        void add();
        void edit();
        void rem();
        void list();
        void receipt();

};
