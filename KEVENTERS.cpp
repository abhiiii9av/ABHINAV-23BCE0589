#include <iostream>
#include <time.h>

using namespace std;

int amount=10000;
string ask3="Yes";
class fooditem
{
    public:
        void menu()
        {
            string table[6][5]=
            {
            {" |Sr.No","\t","|ITEMS","\t\t\t"," |Reg   |Lar"},
            {" |1","\t","|Chocolate Oreo(CO)","\t"," |100   |180"},
            {" |2","\t","|Cold Coffee(CC)","\t"," |200   |300"},
            {" |3","\t","|Mocha Mania(MM)","\t"," |230   |320"},
            {" |4","\t","|Kit-Kat(KK)","\t\t"," |200   |280"},
            {" |5","\t","|Exotic Mango(EM)","\t"," |120   |240"}
            };
            for(int i=0;i<6;i++)
            {
                for(int j=0;j<5;j++)
                {
                    cout<<table[i][j];
                }
                cout<<"\t"<<endl;
            }
        }
};
class talk
{
    public:
        string ask1,a1,a2,ask2;
        int sum=0,n,n1;
        void price(string a1,string a2,int n)
        {
            if(a1=="CO"&&a2=="R")
            {
                sum+=n*100 ;
            }
            else if(a1=="CO"&&a2=="L")
            {
                sum+=n*180;
            }
            else if(a1=="CC"&&a2=="R")
            {
                sum+=n*200;
            }
            else if(a1=="CC"&&a2=="L")
            {
                sum+=n*300;
            }
            else if(a1=="MM"&&a2=="R")
            {
                sum+=n*230;
            }else if(a1=="MM"&&a2=="L")
            {
                sum+=n*320;
            }
            else if(a1=="KK"&&a2=="R")
            {
                sum+=n*200;
            }
            else if(a1=="KK"&&a2=="L")
            {
                sum+=n*280;
            }
            else if(a1=="EM"&&a2=="R")
            {
                sum+=n*120;
            }else if(a1=="EM"&&a2=="L")
            {
                sum+=n*240;
            }
            
        }

        void bill()
        {
            cout<<"Thank you for coming!! \nYour total bill is "<<sum<<endl;
        }
        void sale()
        {
            cout<<"What would you like to have: ";cin>>ask1;
            cout<<"Regular(R) or Large(L): ";cin>>ask2;
            cout<<"How many would you like to have: ";cin>>n;
            price(ask1,ask2,n);
            cout<<"Would you like to order more ";cin>>ask3;
        }
};
int main()
{
    fooditem fd;
    talk t;
    fd.menu();
    cout<<"---------Welcome to KEVENTERS---------"<<endl;
    t.sale();
    while(ask3=="Yes"){
        t.sale();
    }
    t.bill();
    return 0;
}
