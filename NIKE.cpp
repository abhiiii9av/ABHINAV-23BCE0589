// #include <iostream>
// using namespace std;
// int total = 0;
// string dir;
// string b;
// string ch="Yes";
// class nike{
//     public:
//     void direction(){
//         string table[4][3]=
//             {
//             {"Apparels","\t\t","Left <--"},
//             {"SportsEquipments","\t","Right -->"},
//             {"Shoes","\t\t\t","Forward and Right ↱"},
//             {"Billing","\t\t\t","Forward and Left ↰"},
//             // {"Exit","\t\t\t","Back ↓"}
//             };
//             for(int i=0;i<4;i++)
//             {
//                 for(int j=0;j<3;j++)
//                 {
//                     cout<<table[i][j];
//                 }
//                 cout<<"\t"<<endl;
//             }
//         cout<<"Where do you want to go?";cin>>dir;
        
//     }
// };
// class apparels{
//     public:
//     void sportswear(){
//     ch="Yes";
//     while(ch=="Yes"){
//     string jersey[5][3]=
//             {
//             {"Real Madrid Home Jersey(RMH)","\t\t","Rs. 4000"},
//             {"Tottenham Hotspurs Away Jersey(THA)","\t","Rs. 999"},
//             {"Manchester United Home Jersey(MUH)","\t","Rs. 2000"},
//             {"Chelsea Away Jersey(CA)","\t\t\t","Rs. 2500"},
//             {"Dortmund Third Jersey(DT)","\t\t","Rs. 3500"}
//             };
//     string shorts[3][3]=
//             {
//             {"White Shorts(WS)","\t\t","Rs. 1200"},
//             {"Black Shorts(BS)","\t\t","Rs. 1200"},
//             {"Grey Shorts(GS)","\t\t\t","Rs. 1200"},
//             };
//     string jackets[3][3]=
//             {
//              {"Mercedes Jacket(MJ)","\t\t","Rs. 4000"},
//              {"Ferrari Jacket(FJ)","\t\t","Rs. 6000"},
//              {"BMW Jacket(BJ)","\t\t\t","Rs. 3500"},   
//             };
//             cout<<"-------"<<endl;
//             cout<<"JERSEYS"<<endl;
//             cout<<"-------"<<endl;
//             for(int i=0;i<5;i++)
//             {
//                 for(int j=0;j<3;j++)
//                 {
//                     cout<<jersey[i][j];
//                 }
//                 cout<<"\t"<<endl;
//             }
//             cout<<"------"<<endl;
//             cout<<"SHORTS"<<endl;
//             cout<<"------"<<endl;
//             for(int i=0;i<3;i++)
//             {
//                 for(int j=0;j<3;j++)
//                 {
//                     cout<<shorts[i][j];
//                 }
//                 cout<<"\t"<<endl;
//             }
//             cout<<"-------"<<endl;
//             cout<<"JACKETS"<<endl;
//             cout<<"-------"<<endl;
//             for(int i=0;i<3;i++)
//             {
//                 for(int j=0;j<3;j++)
//                 {
//                     cout<<jackets[i][j];
//                 }
//                 cout<<"\t"<<endl;
//             }
//             cout<<"What would you like to buy:";cin>>b;
//             if(b=="RMH"){
//                 total+=4000;
//             }
//             else if(b=="THA"){
//                 total+=999;
//             }
//             else if(b=="MUH"){
//                 total+=2000;
//             }
//             else if(b=="CA"){
//                 total+=2500;
//             }
//             else if(b=="DT"){
//                 total+=3500;
//             }
//             else if(b=="WS"){
//                 total+=1200;
//             }
//             else if(b=="BS"){
//                 total+=1200;
//             }
//             else if(b=="GS"){
//                 total+=1200;
//             }
//             else if(b=="MJ"){
//                 total+=4000;
//             }
//             else if(b=="FJ"){
//                 total+=6000;
//             }
//             else if(b=="BJ"){
//                 total+=3500;
//             }
//             cout<<"Would you like to shop more:";cin>>ch;
//     }
//     cout<<total<<endl;
    
//     }
// };
// class sports_equipment{
//     public:
//     void buyeqp(){
//     ch="Yes";
//     while(ch=="Yes"){
//     string equipment[5][3]=
//             {
//             {"Football(F)","\t\t","Rs. 2000"},
//             {"Bat(B)","\t\t\t","Rs. 7000"},
//             {"Basketball(BB)","\t\t","Rs. 799"},
//             {"L Gaurd(LG)","\t\t","Rs. 2500"},
//             {"Swimsuit(SS)","s\t\t","Rs. 3500"}
//             };
//         for(int i=0;i<5;i++)
//             {
//                 for(int j=0;j<3;j++)
//                 {
//                     cout<<equipment[i][j];
//                 }
//                 cout<<"\t"<<endl;
//             }
//         cout<<"What would you like to buy:";cin>>b;
//         if(b=="F"){
//                 total+=2000;
//             }
//             else if(b=="B"){
//                 total+=7000;
//             }
//             else if(b=="BB"){
//                 total+=799;
//             }
//             else if(b=="LG"){
//                 total+=2500;
//             }
//             else if(b=="SS"){
//                 total+=3500;
//             }
//             cout<<"Would you like to shop more:";cin>>ch;
//     }
//     cout<<"Total:"<<total<<endl;
//     }
// };
// class shoe{
//   public:
//     string s;
//     void shoeselect(){
//         ch="Yes";
//         while(ch=="Yes"){
//         cout<<"Sports or Sneakers:";cin>>s;
//         if(s=="Sports"){
//             string sports[5][3]=
//             {
//             {"Mercurial(M)","\t\t","Rs. 1800"},
//             {"Phantom(Ph)","\t\t","Rs. 3700"},
//             {"Vomero 17(V17)","\t\t","Rs. 2999"},
//             {"Invincible(I)","\t\t","Rs. 2500"},
//             {"Pegasus(Pe)","\t\t","Rs. 3000"},
//             };
//         for(int i=0;i<5;i++)
//             {
//                 for(int j=0;j<3;j++)
//                 {
//                     cout<<sports[i][j];
//                 }
//                 cout<<"\t"<<endl;
//             }
//         cout<<"What would you like to buy:";cin>>b;
//         if(b=="M"){
//                 total+=1800;
//             }
//             else if(b=="Ph"){
//                 total+=3700;
//             }
//             else if(b=="V17"){
//                 total+=2999;
//             }
//             else if(b=="I"){
//                 total+=2500;
//             }
//             else if(b=="Pe"){
//                 total+=3000;
//             }

//         }
//         else{
//             string sneakers[5][3]=
//             {
//             {"Jordans Mars(JM)","\t\t","Rs. 2700"},
//             {"Jordans Retro(JR)","\t\t","Rs. 2600"},
//             {"Jumpan(JP)","\t\t\t","Rs. 999"},
//             {"Jordans Mids(JMI)","\t\t","Rs. 2500"},
//             {"Jordans Air Ship(JAS)","\t\t","Rs. 3500"},
//             };
//         for(int i=0;i<5;i++)
//             {
//                 for(int j=0;j<3;j++)
//                 {
//                     cout<<sneakers[i][j];
//                 }
//                 cout<<"\t"<<endl;
//             }
//         cout<<"What would you like to buy:";cin>>b;
//         if(b=="JM"){
//                 total+=2700;
//             }
//             else if(b=="JR"){
//                 total+=2600;
//             }
//             else if(b=="JP"){
//                 total+=999;
//             }
//             else if(b=="JMI"){
//                 total+=2500;
//             }
//             else if(b=="JAS"){
//                 total+=3500;
//             }
//         }
//         cout<<"Would You Like To Shop More:";cin>>ch;
//         }
//         cout<<"Total:"<<total<<endl;
//     }
// }; 
// int main(){
//     nike obj;string choice="Yes";
//     while(choice=="Yes"){
//     obj.direction();
//     if(dir=="Apparels"){
//         apparels a;
//         a.sportswear();
//     }
//     else if(dir=="SportsEquipments"){
//         sports_equipment a;
//         a.buyeqp();
//     }
//     else if(dir=="Shoes"){ 
//         shoe a;
//         a.shoeselect();
//     }
//     else if(dir=="Billing"){
//         cout<<"Total Amount to be paid:"<<total<<endl;
//         // budget-=total;
//         cout<<"Amount paid.Thank You for visiting."<<endl;
//         choice="No";
//     }
//     // else if(dir=="Exit"){
//     //     cout<<"Thank You For Visiting.Have a Pleasent Day Ahead.";
//     //     choice="No";
//     // }
//     }
// }
