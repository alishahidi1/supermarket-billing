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

void shopping :: menu(){
    int choice;
    string email;
    string password;

    cout<<"\t\t\t\t_________________________________\n";
    cout<<"\t\t\t\t                                 \n";
    cout<<"\t\t\t\t       Supermarket Main Menu     \n";
    cout<<"\t\t\t\t                                 \n";
    cout<<"\t\t\t\t_________________________________\n";
    cout<<"\t\t\t\t                                 \n";

    m:
    cout<<"\t\t\t\t|    1) Administrator   |\n";
    cout<<"\t\t\t\t|    2) Buyer           |\n";
    cout<<"\t\t\t\t|    3) Exit            |\n";
    cout<<"\n\t\t\t Please select: ";
    cin>>choice;

    switch (choice)
    {
    case 1:
        cout<<"\t\t\t Please login:\n";
        cout<<"\t\t\t Enter your email address: ";
        cin>>email;
        cout<<"\t\t\t Password: ";
        cin>>password;

        if (email=="alish@gmail.com" && password=="alish@135"){
            administrator();
        }
        else{
            cout<<"Invalid email or password!";
        }
        break;
    
    case 2:
        buyer();
        break;
    
    case 3:
        exit(0);
    
    default:
        cout<<"\t\t\t Please select from the given options!";
    }
    goto m;
}

void shopping::administrator(){
    int choice;
    m:
    cout<<"\n\n\n\t\t\t Administrator Menu";
    cout<<"\n\t\t\t|_____1) Add the product________|";
    cout<<"\n\t\t\t|                               |";
    cout<<"\n\t\t\t|_____2) Modify the product_____|";
    cout<<"\n\t\t\t|                               |";
    cout<<"\n\t\t\t|_____3) Delete the product_____|";
    cout<<"\n\t\t\t|                               |";
    cout<<"\n\t\t\t|_____4) Back to the main menu__|";

    cout<<"\n\n\t Please enter your choice: ";
    cin>>choice;

    switch(choice){
        case 1:
            add();
            break;
        
        case 2:
            edit();
            break;
        
        case 3:
            rem();
            break;

        case 4:
            menu();
            break;
        
        default:
        cout<<"Invalid choice!";
    }
    goto m;
}