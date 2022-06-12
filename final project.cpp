#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
void logfunc();
void regfunc();
void internalinfo();
void getinternalinfo();
void showinternalinfo();
void externalinfo();
void getexternalinfo();
void showexternalinfo();
void doctorprescribe();
void getdoctorprescribe();
void showdoctorprescribe();
void mainf();

void logfunc()
{
        int count;
        string username,password,a,b;
        system("CLS");
        cout<<"**************************\n";
        cout<<"\t\t\tLogin Page\n";
        cout<<"**************************\n";
        cout<<"\n\tUSERNAME :";
        cin>>username;
        cout<<"\tPASSWORD :";
        cin>>password;
        ifstream login("loginpass.txt");
        while(login>>a>>b)
        {
                if(a==username && b==password)
                {
                    count=1;
                    system("CLS");
                }
        }
        login.close();
        if (count==1)
        {
            Home:
            system("CLS");

            cout<<"****************************\n";
            cout<<"\t\t\t\tHome Page\n";
            cout<<"****************************\n";
            cout<<"\n\n\n\t\t1. Internal Info. "<<endl;
            cout<<"\t\t2. External Info. "<<endl;
            cout<<"\t\t3. Doctor Prescribe. "<<endl;
            cout<<"\t\t4. Exit. "<< endl;
            int a;
            cout<<"\n\n\t\tEnter your option-->";
            cin>>a;

            switch(a)
            {
            case 1:
                internalinfo();
                break;
            case 2:
                externalinfo();
                break;
            case 3:
                doctorprescribe();
                break;
            case 4:
                mainf();
                cout<<"---Thanks for using---"<<endl;
            default:
                system("CLS");
                cout<<"\n\n\n\n\t\t\t\t\aInvalid Input"<<endl;
                break;
            }
        }
    else
    {
        cout<<"\n\n\t\aInvalid password!!!\n\n"<<endl;
        goto Home;
    }
}
void regfunc()
{
        string registrationuser,registrationpass,registrationa,registrationb;
        system("CLS");
        cout<<"************************";
        cout<<"\n\t\t\tRegistration Page"<<endl;
        cout<<"*************************";
        cout<<"\n\n\t\tEnter the username :";
        cin>>registrationuser;
        cout<<"\t\tEnter the password :";
        cin>>registrationpass;
        ofstream registration("loginpass.txt",ios::app);
        registration<<registrationuser<<' '<<registrationpass<<endl;
        system("cls");
        cout<<"\n\n\n\t\tRegistration Successful\n\n\n\n";
}

class Info
{
public:
    int num ,id, age , hight, weight;
    string blood, name,narvous,respiratory,cardio,app,nut,ana,jau,cya,skin;
    float res,pul,blo,jvp;
public:
    void internalinfo();
    void externalinfo();
    void internalgetinfo();
    void externalgetinfo();
    void doctorprescribe();
    void getdoctorprescribe();
    void showdoctorprescribe();
};
Info i;

void internalinfo()
{
    system("cls");
    begin:
    cout<<"****************************\n";
    cout<<"\t\t\t\tInternal Info Page\n";
    cout<<"****************************\n";
    cout<<"\n\n\n\t\t1. Show your Internal Info. "<<endl;
    cout<<"\t\t2. Get your Internal Info. "<<endl;
    cout<<"\t\t3. Exit. "<< endl;
     int b;
    cout<<"\n\n\t\tEnter your option-->";
    cin>>b;
            switch(b)
            {

            case 1:
                showinternalinfo();
                goto begin;
            case 2:
                getinternalinfo();
                goto begin;
            case 3:
                mainf();
                cout<<"---Thanks for using---"<<endl;
                break;
            default:
                system("CLS");
                cout<<"\n\n\n\n\t\t\t\t\aInvalid Input"<<endl;
                break;
            }
}
void externalinfo()
{
    system("cls");
    begin:
    cout<<"****************************\n";
    cout<<"\t\t\t\tExternal Info Page\n";
    cout<<"****************************\n";
    cout<<"\n\n\n\t\t1. Show your external Info. "<<endl;
    cout<<"\t\t2. Get your external Info. "<<endl;
    cout<<"\t\t3. Exit. "<< endl;
     int b;
    cout<<"\n\n\t\tEnter your option-->";
    cin>>b;
            switch(b)
            {

            case 1:
                showexternalinfo();
                goto begin;
            case 2:
                getexternalinfo();
                goto begin;
            case 3:
                mainf();
                cout<<"---Thanks for using---"<<endl;
                break;
            default:
                system("CLS");
                cout<<"\n\n\n\n\t\t\t\t\aInvalid Input"<<endl;
                break;
            }
}


void doctorprescribe()
{
    system("cls");
    begin:
    cout<<"****************************\n";
    cout<<"\t\t\t\tDoctorprescribe Info Page\n";
    cout<<"****************************\n";
    cout<<"\n\n\n\t\t1. Doctor's prescription. "<<endl;
    cout<<"\t\t2. Get Doctor's prescription. "<<endl;
    cout<<"\t\t3. Exit. "<< endl;
     int b;
    cout<<"\n\n\t\tEnter your option-->";
    cin>>b;
            switch(b)
            {

            case 1:
                showdoctorprescribe();
                goto begin;
            case 2:
                getdoctorprescribe();
                goto begin;
            case 3:
                mainf();
                cout<<"---Thanks for using---"<<endl;
                break;
            default:
                system("CLS");
                cout<<"\n\n\n\n\t\t\t\t\aInvalid Input"<<endl;
                break;
            }
}
string medi[40],cmnt;
int md;
void getdoctorprescribe(){

    cout<<"Number of medicine: ";
    cin>>md;
    for(int i = 0; i<md;i++){
        cin>>medi[i];
    }
    cout<<"Enter doctor's comment:"<<endl;
    cin>>ws;
    getline(cin,cmnt);
}


void showdoctorprescribe()
{
    for(int i = 0; i<md;i++){
        cout<<"\t"<<medi[i]<<endl;
    }
    cout<<"\t"<<cmnt<<endl;
}



void getinternalinfo()
{
    system("CLS");
    cout<<"************************";
    cout<<"\n\t\t\t Get internal Info"<<endl;
    cout<<"*************************\n\n";
    cout<<"\tYour Name: ";
    cin>>ws;
    getline(cin,i.name);
    cout<<"\tNervous System  \n\t\t>1.Hypertension \n\t\t>2. stroke \n\t\t>3.Meningitis: ";
    cin>>ws;
    getline(cin,i.narvous);
    cout<<"\tHight: ";
    cin>>i.hight;
    cout<<"\tWeight: ";
    cin>>i.weight;
    cout<<"\tRespiratory System >\n\t\t1.Bronchial Asthma \n\t\t>2. Pulmonary Tuberculosis \n\t\t>3.Pleural Effusion \n\t\t>4. Lung Abscess \n\t\t>5.Bronchial Carcinoma:  ";
    cin>>ws;
    getline(cin,i.respiratory);
    cout<<"\tCardiovascular System >\n\t\t1.Myocardial Infarction \n\t\t>2.Heart Failure \n\t\t>3.Left Bentricular Hypertrophy:  ";

    cin>>ws;
    getline(cin,i.cardio);
    cout<<"\tBlood: ";
    cin>>i.blood;
}
void showinternalinfo()
{
    system("CLS");
    cout<<"************************";
    cout<<"\n\t\t\tInternal Info"<<endl;
    cout<<"*************************\n\n";
    cout<<"\tName: "<<i.name<<endl;
    cout<<"\tNervous System: "<<i.narvous<<endl;
    cout<<"\tRespiratory System: "<<i.respiratory<<endl;
    cout<<"\tCardiovascular System: "<<i.cardio<<endl;
    cout<<"\tHight: "<<i.hight<<endl;
    cout<<"\tWeight: "<<i.weight<<endl;
    cout<<"\tBlood Group: "<<i.blood<<endl;
}

void getexternalinfo()
{
     system("CLS");
    cout<<"************************";
    cout<<"\n\t\t\t Get external Info"<<endl;
    cout<<"*************************\n\n";
    cout<<"\tYour Name: ";
    cin>>ws;
    getline(cin,i.name);
    cout<<"\tAppearansce: ";
    cin>>ws;
    getline(cin,i.app);
    cout<<"\tHight: ";
    cin>>i.hight;
    cout<<"\tWeight: ";
    cin>>i.weight;
    cout<<"\tNutritional Status: ";
    cin>>ws;
    getline(cin,i.nut);
    cout<<"\tAnaemia: ";
    cin>>ws;
    getline(cin,i.ana);
    cout<<"\tJaundice: ";
    cin>>ws;
    getline(cin,i.jau);
    cout<<"\tCyanosis: ";
    cin>>ws;
    getline(cin,i.cya);
    cout<<"\tRespiratory rate: ";
    cin>>i.res;
    cout<<"\tPulse: ";
    cin>>i.pul;
    cout<<"\tBlood pressure: ";
    cin>>i.blo;
    cout<<"\tSkin condition: ";
    cin>>i.skin;
    cout<<"\tBlood: ";
    cin>>i.blood;
}
void showexternalinfo()
{
    system("CLS");
    cout<<"************************";
    cout<<"\n\t\t\t external Info"<<endl;
    cout<<"*************************\n\n";
    cout<<"\tName: "<<i.name<<endl;
    cout<<"\tAppearance: "<<i.app<<endl;
    cout<<"\tNutritional status: "<<i.nut<<endl;
    cout<<"\tAnaemia: "<<i.ana<<endl;
    cout<<"\tJaundice: "<<i.jau<<endl;
    cout<<"\tCyanosis: "<<i.cya<<endl;
    cout<<"\tRespiratory Rate: "<<i.res<<endl;
    cout<<"\tPulse: "<<i.pul<<endl;
    cout<<"\tBlood pressure: "<<i.blo<<endl;
    cout<<"\tSkin condition: "<<i.skin<<endl;
    cout<<"\tHight: "<<i.hight<<endl;
    cout<<"\tWeight: "<<i.weight<<endl;
    cout<<"\tBlood Group: "<<i.blood<<endl;
}
void mainf(){
page1:
    cout<<"****************************\n";
    cout<<"\t\t\tWelcome Health Management System Page"<<endl;
    cout<<"****************************";
    cout<<"\n\n\n\t\t1. Login. "<<endl;
    cout<<"\t\t2. Registration. "<<endl;
    cout<<"\t\t3. Exit. "<<endl;
    int a;
    cout<<"\n\n\t\tEnter your option--> ";
    cin>>a;
    switch(a)
    {
    case 1:
        logfunc();
        break;
    case 2:
        regfunc();
        goto page1;
    case 3:
        system("CLS");
        goto page1;
        cout<<"\n\n\t\t.............Thank You............."<<endl<<endl;
        break;
    default:
        system("CLS");
        cout<<"\n\n\t\tWe should choice correct option\n"<<endl;
        goto page1;
    }
}
int main ()
{
   mainf();
   return 0;
}
