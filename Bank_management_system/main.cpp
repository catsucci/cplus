#include<iostream>
#include<fstream>
#include<cctype>
#include<iomanip>
#include<ctime>
#include<string>
#include<cstdlib>

using namespace std;

class account
{
    int acno;

    char name[50];

    int deposit;
    char type;
public:
    void create_account();
    void show_account() const;
    void modify();
    void dep(int);
    void draw(int);
    void report() const;
    int retacno() const;
    int retdeposit() const;
    char rettype() const;

};

void account::create_account()
{
    cout << "Your Account Number is  = ";

    cin>>acno ;

    cout<<"\n\nEnter The Name of The account Holder : ";

    cin.ignore();

    cin.getline(name,50);

    cout<<"\nEnter Type of The account (C/S) : ";

    cin>>type;

    type=toupper(type);

    cout<<"\nEnter The Initial amount (Deposit To our Attendant) : ";

    cin>>deposit;

    cout<<"\n\n\nAccount Created..";
}

void account::show_account() const
{
    cout<<"\nAccount No. : "<<acno;

    cout<<"\nAccount Holder Name : ";

    cout<<name;

    cout<<"\nType of Account : "<<type;

    cout<<"\nBalance amount : "<<deposit;
}


void account::modify()
{
    cout<<"\nAccount No. : "<<acno;

    cout<<"\nModify Account Holder Name : ";

    cin.ignore();

    cin.getline(name,50);

    cout<<"\nModify Type of Account : ";

    cin>>type;

    type=toupper(type);

    cout<<"\nModify Balance amount : ";

    cin>>deposit;
}


void account::dep(int x)
{
    deposit+=x;
}

void account::draw(int x)
{
    deposit-=x;
}

void account::report() const
{
    cout<<acno<<setw(10)<<" "<<name<<setw(10)<<" "<<type<<setw(6)<<deposit<<endl;
}

int account::retacno() const
{
    return acno;
}

int account::retdeposit() const
{
    return deposit;
}

char account::rettype() const
{
    return type;
}

void write_account();

void display_sp(int);

void modify_account(int);

void delete_account(int);

void deposit_withdraw(int, int);

void markets();

void loan();

void intro();

void ipo();

int main()
{
    char ch;
    int num;
    intro();
    do
    {
        cout<<"\n\n\n\tMAIN MENU";

        cout<<"\n\n\t1. NEW ACCOUNT";

        cout<<"\n\n\t2. DEPOSIT AMOUNT";

        cout<<"\n\n\t3. WITHDRAW AMOUNT";

        cout<<"\n\n\t4. BALANCE ENQUIRY";

        cout<<"\n\n\t5. CLOSE AN ACCOUNT";

        cout<<"\n\n\t6. MODIFY AN ACCOUNT";

        cout<<"\n\n\t7. MARKETS";

        cout<<"\n\n\t8. LOAN Enquiry ";

        cout<<"\n\n\t9. IPO";

        cout<<"\n\n\t0. Exit ";

        cout<<"\n\n\tSelect Your Option (1-9)(0 to exit) ";

        cin>>ch;

        switch(ch)
        {
            case '1':
                write_account();
            break;
            case '2':
                cout<<"\n\n\tEnter The account No. : "; cin>>num;
                deposit_withdraw(num, 1);
            break;
            case '3':
                cout<<"\n\n\tEnter The account No. : ";
                deposit_withdraw(num, 2);
            break;
            case '4':
                cout<<"\n\n\tEnter The account No. : "; cin>>num;
                display_sp(num);
            break;
            case '5':
                cout<<"\n\n\tEnter The account No. : "; cin>>num;
                delete_account(num);
            break;
            case '6':
                cout<<"\n\n\tEnter The account No. : "; cin>>num;
                modify_account(num);
            break;
            case'7':
                markets();
                break;
            case'8':
                loan();
                break;
            case'9':
                ipo();
                break;
            case '0':
                cout<<"\n\n\tThanks for using our bank managemnt system.";
            break;
            default :cout<<"\a";
        }
        cin.ignore();
        cin.get();
    }while(ch!='0');
    return 0;
}

void write_account()
{
    time_t tt;

    struct tm * ti;

    time (&tt);

    ti = localtime(&tt);

    cout << "                                                                                             "
        << asctime(ti);

    account ac;

    ofstream outFile;

    outFile.open("account.dat",ios::binary|ios::app);

    ac.create_account();

    outFile.write(reinterpret_cast<char *> (&ac), sizeof(account));

    outFile.close();
}

void display_sp(int n)
{
    time_t tt;

    struct tm * ti;

    time (&tt);

    ti = localtime(&tt);

    cout << "                                                                                             "
        << asctime(ti);

    account ac;

    bool flag=false;

    ifstream inFile;
    inFile.open("account.dat",ios::binary);

    if(!inFile)

    {
        cout<<"File could not be open !! Press any Key...";
        return;
    }
    cout<<"\nBALANCE DETAILS\n";

    while(inFile.read(reinterpret_cast<char *> (&ac), sizeof(account)))
    {
        if(ac.retacno()==n)
        {
            ac.show_account();
            flag=true;
        }
    }

    inFile.close();
    if(flag==false)
        cout<<"\n\nAccount number does not exist";
}

void modify_account(int n)
{
    time_t tt;

    struct tm * ti;

    time (&tt);

    ti = localtime(&tt);

    cout << "                                                                                             "
        << asctime(ti);

    bool found=false;

    account ac;

    fstream File;

    File.open("account.dat",ios::binary|ios::in|ios::out);

    if(!File)
    {
        cout<<"File could not be open !! Press any Key...";
        return;
    }
    while(!File.eof() && found==false)
    {
        File.read(reinterpret_cast<char *> (&ac), sizeof(account));

        if(ac.retacno()==n)
        {
            ac.show_account();

            cout<<"\n\nEnter The New Details of account"<<endl;

            ac.modify();

            int pos=(-1)*static_cast<int>(sizeof(account));

            File.seekp(pos,ios::cur);

            File.write(reinterpret_cast<char *> (&ac), sizeof(account));

            cout<<"\n\n\t Submit your documents to your nearest branch by ";

            found=true;
        }
    }
    File.close();
    if(found==false)
        cout<<"\n\n Record Not Found ";
}

void delete_account(int n)
{
    time_t tt;

    struct tm * ti;

    time (&tt);

    ti = localtime(&tt);

    cout << "                                                                                             "
        << asctime(ti);

    account ac;

    ifstream inFile;

    ofstream outFile;

    inFile.open("account.dat",ios::binary);

    if(!inFile)

    {
        cout<<"File could not be open !! Press any Key...";
        return;
    }

    outFile.open("Temp.dat",ios::binary);

    inFile.seekg(0,ios::beg);
    while(inFile.read(reinterpret_cast<char *> (&ac), sizeof(account)))
    {
        if(ac.retacno()!=n)
        {
            outFile.write(reinterpret_cast<char *> (&ac), sizeof(account));
        }
    }

    inFile.close();

    outFile.close();

    remove("account.dat");

    rename("Temp.dat","account.dat");

    cout<<"\n\n\t Submit CHEQUE BOOK and all other documents with identity proof";
}

void deposit_withdraw(int n, int option)
{
    time_t tt;

    struct tm * ti;

    time (&tt);

    ti = localtime(&tt);

    cout << "                                                                                             "
        << asctime(ti);

    int amt;

    bool found=false;

    account ac;

    fstream File;

    File.open("account.dat", ios::binary|ios::in|ios::out);

    if(!File)
    {
        cout<<"File could not be open !! Press any Key...";
        return;
    }
    while(!File.eof() && found==false)
    {
        File.read(reinterpret_cast<char *> (&ac), sizeof(account));

        if(ac.retacno()==n)
        {
            ac.show_account();
            if(option==1)
            {
                cout<<"\n\n\tTO DEPOSIT AMOUNT ";

                cout<<"\n\nEnter The amount to be deposited";

                cin>>amt;

                ac.dep(amt);
            }

            if(option==2)

            {
                cout<<"\n\n\tTO WITHDRAW AMOUNT ";

                cout<<"\n\nEnter The amount to be withdraw";

                cin>>amt;

                int bal=ac.retdeposit()-amt;


                if((bal<500 && ac.rettype()=='S') || (bal<1000 && ac.rettype()=='C'))

                    cout<<"Insufficience balance";

                    else
                ac.draw(amt);
            }

            int pos=(-1)*static_cast<int>(sizeof(ac));

            File.seekp(pos,ios::cur);

            File.write(reinterpret_cast<char *> (&ac), sizeof(account));

            cout<<"\n\n\t Record Updated";

            found=true;
        }
    }

    File.close();

    if(found==false)
        cout<<"\n\n Record Not Found ";
}

void markets()
{
    int quantity;

    float upperrange;

    float lowerrange;

    string exchange;

    string name;

    float execprice;

    int jack;

    float chintz;

    int demat;

    time_t tt;

    struct tm * ti;

    time (&tt);

    ti = localtime(&tt);

    cout << "                                                                                             "
        << asctime(ti);

    cout<<"Enter Your Demat account number ";

    cin>>demat;

    cout<<"Enter exchange name \n";

    cin>>exchange;

    cout<<"Enter name of the company \n";

    cin>>name;

    cout<<"Kindly provide the range of +5 or -5\n";

    cout<<"Enter upper range \n";

    cin>>upperrange;

    cout<<"Enter lower range \n";

    cin>>lowerrange;

    cout<<"Quantity of Shares \n";

    cin>>jack;

    execprice=upperrange+lowerrange;

    execprice=execprice/2;

    cout<<"################################# \n";

    cout<<" \n Order Summary \n";

    cout<<" \n Name of exchange:  "<<exchange;

    cout<<" \n Name: "<<name;

    cout<<" \n order execution price:"<<execprice;

    chintz=jack*execprice;

    cout<<" \nTotal Investment  "<<chintz;

    cout<<" \n################################# \n";
}

void ipo()
{
    time_t tt;

    struct tm * ti;

    time (&tt);

    ti = localtime(&tt);

    cout << "                                                                                             "
        << asctime(ti);

    int price;
    int qty;
    string name;
    int total;

    cout<<"\n Enter IPO company: \n";
    cin>>name;
    cout<<"Enter ISSUE price(LOT SIZE = 40): \n";
    cin>>price;
    cout<<"Enter Quantity : \n ";
    cin>>qty;

    total = price*qty;

    cout<<"\n####################################################\n";
    cout<<"\n Order Summary \n";
    cout<<"\n Issue Name : "<<name;
    cout<<"\n Issue price : "<<price;
    cout<<"\n Quantity : "<<qty;
    cout<<"\n Bill Amount : "<<total;
    cout<<"\n####################################################\n";
}

void loan()
{
    time_t tt;

    struct tm * ti;

    time (&tt);

    ti = localtime(&tt);

    cout << "                                                                                             "
        << asctime(ti);

    float time;

    float rate;

    float principal;

    float emi;

    cout<<"Enter Principal Amount : \n ";

    cin>>principal;

    cout<<"Enter rate of Interest: \n ";

    cin>>rate;

    cout<<"Enter number of months : \n ";

    cin>>time;

    emi=rate/time*principal;

    cout<<"Your Monthly EMI is "<<emi;
}

void intro()
{
    time_t tt;

    struct tm * ti;

    time (&tt);

    ti = localtime(&tt);

    cout << "                                                                                             "
        << asctime(ti);

    cout<<"\n\n\t BANK MANAGEMENT SOFTWARE";

    cin.get();
}

