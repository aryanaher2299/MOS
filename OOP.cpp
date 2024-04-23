#include<iostream>
#include<string>
#include<stdlib.h>
#include<fstream>
#include<windows.h>
#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<time.h>
#include<iomanip>
using namespace std;
int wholecheck=0;
int counter1=0,counter, pcnt=0;
fstream fin,fout,fturndoc,ftemp,fadmin,fcross,fsum;
class problems;
class Login;

class diabetes
{
        int id;
     	char name[200];
    	int age;
    	float height;
    	float weight;
	    char sex;
     	long long int phn;
     	public:
		friend class doctor;
		friend class problems;
		friend class Login;
		friend class adminstration;
		friend class patient;
		void twist();
		void welcome();
		void enterdata();
		void doctorlist();
		void test();
		void search();
		void deldata();
		void prereport();
		void admin();
		void setlock();
		int report();
		int display(int,int);
		void update();
		void adminre();

}mainobj;

class Login
{
	public:
		friend class doctors;
		friend class problems;
		friend class diabetes;
		void password();
}passo;

class doctor
{
	public:
		friend class diabetes;
		int id;
		int idofdoc;
		struct date
		{
			int d,m,y;
		}st;
}docp;

class problems
{
	public:
	friend class diabetes;
    int id,vision,thirst,hunger,furine;
    char bg[2];
	int headche,fatigue;
	char fam,weight;
	char food;
	float sugarlevel;
	float blpressurenum,blpressuredem;
	float bloodcount;
	float glucoselevel;
	float glucose1;
}objp;


class adminstration
{
	    private:
		int id;                    //patientid
		int stid;                  //staffid
        char name[30];             //staffname
        char dname[30];            //doctorname   1st thought of in doctorlist but failed
        int  did;                  //doctor id
        long long int phna;
        char userid[30];           //staff user id
        char password[30];         //password staff
        public:
        int medid;                 //medicine id
        char medicines[300];       //medicine name
        float medprice;              //price
        char re[200];
        friend class problems;
		friend class diabetes;
		friend class doctor;
		friend class paitent;                       
        void adminsi();
        void count();

}admino;

class quick
{
char name[300];
int gid;
int age;
char blood[3];
float sugar;
float weight;
float bodytemp;
	int mchoice;
	void buy();
	public:
		friend class diabetes;
		friend class patient;
		quick()
		{   system("cls");
			char ch;
	cout<<"\t\t\t\t\t Welcome to diabetes management system\n\n\n";
    cout<<"\t\t\t\t\t     OOPS course project SY3\n\n";
    cout<<"\n\n Enter the name : ";
	fflush(stdin);
	gets(name);
	srand((time(NULL)));
	gid=rand()%1161400+200000;
	cout<<"\n\n ID Generated : ";
	cout<<gid;
	cout<<"\n\n Enter Age : ";
	cin>>age;
	cout<<"\n\n Do you Symptoms like becoming//having :\n\n 1>  THIRSTY 2>  Weight Loss 3>  Fatigness 4>  Vision Problem  5>   Frequent Urine 6>   Increased Hunger ??\n\n";
	cout<<" Enter Y for Yes : ";
	cin>>ch;
	if(ch=='y'||ch=='Y')
	cout<<"\n\n You may have the chances of diabetes, as Because these are the key symptoms of it!!";
	else
	cout<<"\n\n You may not have the diabetes  but it is still not sure!!";
	cout<<"\n\n Let the nurse take your blood sample  ";
    Sleep(2);
	cout<<"\n\n Please Wait Taking Blood Sample  ";
	Sleep(2);
	cout<<"\n\n Analyzing Blood Samples  ";
	Sleep(2);
	cout<<"\n\n Thanks for being paitent ";
	Sleep(2);
	cout<<"\n\n TEST INITIALIZED : ";
	cout<<"\n\n Enter the weight : ";
	cin>>weight;
	cout<<"\n\n Enter the glucometer readings : ";
	cin>>sugar;
	cout<<"\n\n Enter the body temperature : ";
	cin>>bodytemp;
	cout<<"\n\n Enter Blood group : ";
	cin>>blood;
    system("cls");
 	cout<<"\t\t\t\t\t Welcome to diabetes management system\n\n\n";
    cout<<"\t\t\t\t\t     OOPS course project SY3\n\n";
	cout<<"\t\t\t\t\t\t\t\t\t\tREPORT";
	cout<<"\n\n Name : "<<name;
	cout<<"\n\n Age : "<<age;
	cout<<"\n\n Weight : "<<weight;
	cout<<"\n\n Body Temp : "<<bodytemp;
	cout<<"\n\n Blood group : "<<blood;
    cout<<"\n\n";
	
float bloodcount;
srand(time(NULL));
bloodcount=rand()%4000+10000;
if(bloodcount<4500)
{
	cout<<"\n\n Blood Count : Low -> "<<bloodcount;
}
else if(bloodcount>=4500 && bloodcount<10000)
{
	cout<<"\n\n Blood Count : High -> "<<bloodcount;
}
float ha;
 srand(time(NULL));
 ha=rand()%10+9;
 if(ha>=12 && ha<16)
 cout<<"\n\n Haemogloblin level -> Normal : "<<ha<<" grams per deciliter";
  if(ha<12)
 cout<<"\n\n Haemogloblin level -> LOW : "<<ha<<" grams per deciliter";
  if(ha>16)
 cout<<"\n\n Haemogloblin level ->  : "<<ha<<" grams per deciliter";


float cholestrol;
srand(time(NULL));
cholestrol=rand()%25+100;
if(cholestrol<=100)
cout<<"\n\n Cholesrtrol -> IDEAL ->  "<<cholestrol<<" mg/dl";
else if(cholestrol>100 && cholestrol<=129)
cout<<"\n\n Cholestrol -> Close to Ideal -> "<<cholestrol<<" mg/dl";
else if(cholestrol>=130 && cholestrol<=159)
cout<<"\n\n Cholesrtrol -> Borderline ->  "<<cholestrol<<" mg/dl";
else if(cholestrol>=160 && cholestrol<=189)
cout<<"\n\n Cholesrtrol ->  High ->  "<<cholestrol<<" mg/dl";
else if(cholestrol>=190 && cholestrol<=240)
cout<<"\n\n Cholesrtrol ->  Highly Dangerous ->  "<<cholestrol<<" mg/dl";

if(sugar>=5.00 && sugar<=7.5)
cout<<"\n\n Normal Sugar Level : ->No signs of Diabetes till now ";
else if(sugar>7.5 && sugar<8.5)
cout<<"\n\n High Sugar Level : Diabetes Level 1 :->May led to heart stroke ";
else if(sugar>=8.5)
cout<<"\n\n High Sugar Level : Diabetes Level 2 :->Can led to heart attack ";
else
cout<<"\n\n Low Sugar Level : ";
cout<<"\n\n This is on the basis of a simple test only please take appointment from doctor for much more and clear understanding and for complete treatment\n\n";
cout<<"\n\n Generating Medicine Suggestions ";
	Sleep(5);
if(sugar>7.5 && sugar<8.5)
{	system("pause");
    system("cls");
 	cout<<"\t\t\t\t\t Welcome to diabetes management system\n\n\n";
    cout<<"\t\t\t\t\t     OOPS course project SY3\n\n";
	cout<<"\t\t\t\t\t\t\t\t\t\tMedicines";
	cout<<"\n\n 1. NovoLog \n\n 2. Novolin \n\n 3. Humulin \n\n 4. Humalog \n\n 5. Apidra \n\n";
	srand(time(NULL));
	mchoice=rand()%4+1;
	cout<<"\n\n YOU CAN TAKE ANY OF THESE BUT ITS BETTER IF YOU TAKE OPTION : "<<mchoice;
	cout<<"\n\n Suggested Medicine : ";
	if(mchoice==1)
	cout<<"Novolog";
	else if(mchoice==2)
	cout<<"Novolin";
	else if(mchoice==3)
	cout<<"Humulin";
	else if(mchoice==4)
	cout<<"Humalog";
	else if(mchoice==5)
	cout<<"Apidra";
	cout<<"\n\n Take 2 tablets Per day after meal";
	cout<<" \n\n Before Buying We would like you to take full test ";
	cout<<" If you want to buy you can buy Press Y ";
	cout<<" Your Choice : ";
	char ch2;
	cin>>ch2;
	if(ch2=='Y'||ch=='y')
	buy();
	else
	mainobj.twist();
}
else if(sugar>=8.5)
{	system("pause");
	system("cls");
 	cout<<"\t\t\t\t\t Welcome to diabetes management system\n\n\n";
    cout<<"\t\t\t\t\t     OOPS course project SY3\n\n";
	cout<<"\t\t\t\t\t\t\t\t\t\tMedicines";
	cout<<"\n\n 1. Precose \n\n 2. Miglitol \n\n 3. Kazano \n\n 4. Glucovance \n\n 5. Actoplus \n\n";
	srand(time(NULL));
	mchoice=rand()%4+1;
	cout<<"\n\n YOU CAN TAKE ANY OF THESE BUT ITS BETTER IF YOU TAKE OPTION : "<<mchoice;
	cout<<"\n\n Suggested Medicine : ";
	if(mchoice==1)
	cout<<"Precose";
	else if(mchoice==2)
	cout<<"Miglitol";
	else if(mchoice==3)
	cout<<"Kazano";
	else if(mchoice==4)
	cout<<"Glucovance";
	else if(mchoice==5)
	cout<<"Actoplus";
	cout<<"\n\n Take 2 tablets Per day after meal";
	cout<<" \n\n Before Buying We would like you to take full test ";
	cout<<" If you want to buy you can buy Press Y ";
	cout<<" Your Choice : ";
	char ch2;
	cin>>ch2;
	if(ch2=='Y'||ch=='y')
	buy();
	else
	mainobj.twist();
}
else
{
	cout<<" No Medicine Required But keep Good Health and Diet";
}
	}
};

class diet
{
	public:
	diet()
	{
    system("cls");
    cout<<"\n\t\t\t\t Welcome to diabetes management system ";
	cout<<"\n\t\t\t\t OOPs SY 3 \n\n\n";

	char name[300],ch;
	cout<<"\n\n Enter Your Name Please : ";
	fflush(stdin);
	gets(name);
	cout<<"\n\n Enter weather you have diabetes or not(Y/N) ? ";
	cout<<"\n\n Your Choice : ";
	cin>>ch;
	if(ch=='Y'||ch=='y')
	{
	cout<<" Special Diet is to be followed !!";

	cout<<"\n\n Healthy fats from nuts, olive oil, fish oils\n\n flax seeds, or avocados Fruits and vegetables�ideally fresh\n\n the more colorful the better\n\n whole fruit rather than juices High-fiber cereals and breads made from whole grains or legumes Fish and shellfish\n\n organic chicken or turkey\n\n High-quality protein such as eggs, beans, low-fat dairy, and unsweetened yogurt";
	cout<<"\n\n";
	cout<<" Brown or wild rice, riced cauliflower\n\n Sweet potatoes, yams, cauliflower mash \n\n Whole-wheat pasta, spaghetti squash \n\n High-fiber, low-sugar cereal \n\n Steel-cut or rolled oats";
	cout<<"\n\n";
     }
     else
     {
     	cout<<"\n\n You can continue your normal diet : ";
	 }
	 cout<<"\n";
     system("pause");
	 mainobj.twist();
	}
};

void Login::password()
{
	system("cls");
		int i;
		char alogin[8],apassword[10];
		char login[]="OOP";
		char pass[]="OOPS";

		system("cls");
		cout<<"\t\t\t\t\t\t\t\t WELCOME TO SY 3 course project\n";
		cout<<"\t\t\t\t\t\t\t\t   ....Diabetes management system....\n\n";
		wholecheck=1;

		cout<<"\n\n Enter Login_id: ";
		char a;
		cin>>alogin;

		if(strcmp(alogin,login)==0)
		{
			cout<<"\n\n Enter Password: ";

			for(i=0;i<sizeof(pass)-1;i++)
		{
			a=getch();
			putchar('*');
			apassword[i]=a;
		}
		apassword[i]='\0';
		if(strcmp(apassword,pass)==0)
			{
				cout<<"\n\n\n Login Successfull\n\n ";
				wholecheck=1;
			}
			else
			{
				wholecheck=2;
			cout<<"\n\n Incorrect password";
			}
		}
		else
		{
			cout<<"\n\n Invalid Login_id\\Username\n\n";
		}
	}
void diabetes::twist()
{
	system("cls");
	int ch;
    cout<<"\t\t\t\t\t Welcome to diabetes management system\n\n\n";
    cout<<"\t\t\t\t\t     OOPS course project SY3\n\n";
    cout<<"\tChoose the operation \n\n 1-> PATIENT \n\n 2-> ADMIN \n\n 3-> Quick Checkup\n\n 4-> Diet Planner \n\n 5-> Log Out\n\n 6-> Exit";
    cout<<"\n\n Your Choice-> ";
    cin>>ch;
    switch(ch)
    {
    	case 1:
    	welcome();
    	break;

    	case 2:
    	setlock();
     	if(counter1!=0)
    	admin();
    	else
    	cout<<"\n\n\n Access Denied!! Terminating ";
    	Sleep(3);
    	twist();
    	break;
		case 3:
		quick();
		break;
		case 4:
		diet();
		break;
		case 6:
		cout<<"\n Logging Out.....\n\n";
		Sleep(2);
		passo.password();
		break;
		case 7:
		cout<<"\n\n Exiting...\n\n";
		Sleep(2);
		exit(0);
		break;
		default:
		cout<<" You have entered wrong key \n\n";
		break;
	}
}
void diabetes:: welcome()
{
	system("cls");

	cout<<"\n";
	int ch;
	char check;
	A:
	cout<<"\n Welcome to diabetes management system ";
	cout<<"\n OOPs SY 3 \n\n\n";
	cout<<"\n\n\n  CHOOSE THE OPTIONS FROM MENU\n\n 1: ENTER DATA\n\n 2: GET\\TAKE APPOINTMENT\n\n 3: LIST OF PAITENTS\n\n 4: TEST\n\n 5: Pre-Report\n\n 6: FINAL REPORT\n\n 7:EXIT\n\n";
    cout<<"\n YOUR CHOICE : ";
	cin>>ch;
    switch(ch)
    {
    	    case 1:
    		enterdata();
    		cout<<"\n Do You Want To Continue(y/n)\n";
    		cout<<" YOUR CHOICE: ";
    		cin>>check;
    		if(check=='y'||check=='Y')
    		{
    		system("cls");
    		goto A;
			}
			else
			{
			cout<<"\n\n\t\t\tThank You! Visit us Again\n";
			break;
		    }
		    case 2:
    		doctorlist();
    		cout<<"\n Do You Want To Continue(y/n)\n";
    		cout<<" YOUR CHOICE: ";
    		cin>>check;
    		if(check=='y'||check=='Y')
    		{
    		system("cls");
    		goto A;
			}
			else
			{
			cout<<"\n\n\t\t\tThank You! Visit us Again\n";
			break;
		    }
		    case 3:
    		display(10,20);
    		cout<<"\n Do You Want To Continue(y/n)\n";
    		cout<<" YOUR CHOICE: ";
    		cin>>check;
    		if(check=='y'||check=='Y')
    		{
    		system("cls");
    		goto A;
			}
			else
			{
			cout<<"\n\n\t\t\tThank You! Visit us Again\n";
			break;
		    }
		    case 4:
    		test();
    		cout<<"\n Do You Want To Continue(y/n)\n";
    		cout<<" YOUR CHOICE: ";
    		cin>>check;
    		if(check=='y'||check=='Y')
    		{
			system("cls");
    		goto A;
			}
			else
			{
			cout<<"\n\n\t\t\tThank You! Visit us Again\n";
			break;
		    }
		    case 5:
		    prereport();
    		cout<<"\n Do You Want To Continue(y/n)\n";
    		cout<<" YOUR CHOICE: ";
    		cin>>check;
    		if(check=='y'||check=='Y')
    		{
    		system("cls");
    		goto A;
			}
			else
			{
			cout<<"\n\n\t\t\tThank You! Visit us Again\n";
			break;
		    }
		    case 6:
		    report();
			cout<<"\n Do You Want To Continue(y/n)\n";
    		cout<<" YOUR CHOICE: ";
    		cin>>check;
    		if(check=='y'||check=='Y')
    		{
    		system("cls");
    		goto A;
			}
			else
			{
			cout<<"\n\n\t\t\tThank You! Visit us Again\n";
			break;
		    }
		    case 7:
		    cout<<" Exiting.... \n\n ";
			Sleep(2);
			twist();
			exit(0);
	}
}
main()
	{

		system("cls");
		passo.password();
			if(wholecheck==1)
			{
			mainobj.twist();
			}

	}

void diabetes::enterdata()
{
	int i,num=0;
	fout.open("DIABETESDATA.txt",ios::app|ios::out);
	system("cls");
	cout<<"\t\t\t\t\tWelcome!\n";
	cout<<"\n\t\t\tPLEASE FILL ALL THE REQUIRED DATA\n";
	cout<<"\n\n ";
	cout<<" Enter The no. of paitents : ";
	cin>>num;
	cout<<"\n\n ";
	for(i=0;i<num;i++)
	{
	system("cls");
 	cout<<"\n Welcome to diabetes management system ";
	cout<<"\n OOPs SY 3 \n\n\n";
    cout<<" PLEASE ASK THE IDno. AND ENTER IT : ";
    cin>>id;
    cout<<"\n\n";
	cout<<" 1 : ENTER NAME : ";
	scanf("%s",name);
	fflush(stdin);
	cout<<"\n\n 2 : AGE : ";
	cin>>age;
	cout<<"\n\n 3 : SEX(M/F) : ";
	cin>>sex;
	cout<<"\n\n 4 : Height : ";
	cin>>height;
	cout<<"\n\n 5 : Weight : ";
	cin>>weight;
	cout<<"\n\n 6 : Phone number : ";
	cin>>phn;
	fout.write((char*)&mainobj,sizeof(mainobj));
    }
	fout.close();
}
int diabetes::display(int a,int b)
{
    int p=0;
	fin.open("DIABETESDATA.txt",ios::in|ios::out);
	system("cls");
	cout<<"\t\t\t\tHere's the Data of all paitents\n\n\n";


	cout<<"|\t ID\t   |             NAME                 |  AGE    |   SEX   |   HEIGHT    |   WEIGHT      |\n";
	while(fin.read((char*)&mainobj,sizeof(mainobj)))
	{
	    p++;
	cout<<"|"<<setw(9)<<id<<setw(10)<<"|"<<setw(15)<<name<<setw(20)<<"|"<<setw(5)<<age<<setw(5)<<"|"<<setw(5)<<sex<<setw(5)<<"|"<<setw(7)<<height<<setw(7)<<"|"<<setw(7)<<weight<<setw(7)<<"\t|\n\n";
    }

	fin.close();
	pcnt=p;
}
void diabetes::search()
{
	system("cls");
	fin.open("DIABETESDATA.txt",ios::in|ios::out);
	int tempid,k=0;
	char check;
	cout<<"\t\t\t\tDiabetes Health Care\t\n";
	cout<<"\n Enter the id no. of patient : ";
	cin>>tempid;
while(fin.read((char*)&mainobj,sizeof(mainobj)))
{
if(tempid==mainobj.id)
{
	k++;
	break;
}
}
if(mainobj.id==tempid)
{
			cout<<"|\t ID\t   |             NAME                 |  AGE    |   SEX   |   HEIGHT    |   WEIGHT      |\n";
	cout<<"|"<<setw(9)<<id<<setw(10)<<"|"<<setw(15)<<name<<setw(20)<<"|"<<setw(5)<<age<<setw(5)<<"|"<<setw(5)<<sex<<setw(5)<<"|"<<setw(7)<<height<<setw(7)<<"|"<<setw(7)<<weight<<setw(7)<<"\t|\n\n";
cout<<"\n ";
}
else
{
	cout<<" YOU HAVE ENTERED THE INVALID ID PLEASE TRY AGAIN \n";
}
fin.close();
}
void diabetes::test()
{
	system("cls");
	int dd,mm,yyyy;
	cout<<"\n Welcome to diabetes management system ";
	cout<<"\n OOPs SY 3 \n\n\n";
	fin.open("DIABETESDATA.txt",ios::in|ios::out);
	fout.open("problems.txt",ios::app);
	fturndoc.open("Doctors1.txt",ios::in);
	int tempid,k=0,count=0;
	char check;
	cout<<"\t\t\t\tDiabetes Health Care\t\n";
	cout<<"\n\n Enter the id no. of patient : ";
	cin>>tempid;
while(fin.read((char*)&mainobj,sizeof(mainobj)))
{
if(tempid==mainobj.id)
{
	k++;
	break;
}
}
if(mainobj.id==tempid)
{
	cout<<"\n\n Enter today's date(dd/mm/yyyy) : ";
	cin>>dd>>mm>>yyyy;
	while(fturndoc.read((char*)&docp,sizeof(docp)))
	{
		if(dd==docp.st.d && docp.st.m==mm && docp.st.y==yyyy && tempid==docp.id)
		 {
		 	count=1;
		 	break;
		 }
		 else
		 count=0;
    }
	if(dd==docp.st.d && docp.st.m==mm && docp.st.y==yyyy && tempid==docp.id)
	{
	objp.id=tempid;
	cout<<"\n\n Please Answer The following Questions\n\n\n";
	cout<<" Patient name: ";
	cout<<mainobj.name;
	cout<<"\n\n\n";
	cout<<" 1:Are you getting thirsty frequently.Enter the data accordingly(3-highly yes||2-medium yes||1-low yes||0-no)? -> ";
	cin>>objp.thirst;
	cout<<"\n\n\n";
	cout<<" 2:Are you getting hungry fast.Enter the data accordingly(3-highly yes||2-medium yes||1-low yes||0-no)? -> ";
	cin>>objp.hunger;
    cout<<"\n\n\n";
	cout<<" 3:Are you getting urine frequently.Enter the data accordingly(3-highly yes||2-medium yes||1-low yes||0-no)? -> ";
	cin>>objp.furine;
	cout<<"\n\n\n";
	cout<<" 4:Do you get headches?Enter the level(3-high||2-medium||1-low||0-no)? -> ";
	cin>>objp.headche;
	cout<<"\n\n\n";
	cout<<" 5:Do you feel fatiguness?Enter the level(3-high||2-medium||1-low||0-no)? -> ";
	cin>>objp.fatigue;
	cout<<"\n\n\n";
	cout<<" 6:How is your vision?Enter the level(3-highly Blurred||2-Partially Blurred||1-Sometimes Blurred||0-no)? -> ";
	cin>>objp.vision;
	cout<<"\n\n 7.Was there anyy weight loss in your body in few days(y/n)?->";
	cin>>objp.weight;
	cout<<"\n\n\n";
	cout<<" 8.Has any body in your family had diabetes before?(y/n)?->";
	cin>>objp.fam;
	cout<<"\n\n";
	Sleep(2);
	system("cls");
	cout<<"\n\n\n\t\t\t Thanks! Please Take the Test from doctor ";
	cout<<"\n\n Taking Blood Sample : ";
	cout<<"\n ";
	Sleep(2);
	cout<<"\n\n Wait for some time \n ";
	Sleep(2);
	cout<<"\n\n TESTING BLOOD \n ";
	Sleep(2);
	cout<<"\n\n Please be patient and steady!! \n ";
	Sleep(2);
	cout<<"\n\n Blood Test Complete\n ";
	Sleep(2);
	cout<<"\n\n";
	cout<<" Had a Meal or not(y/n) for past three hours? : ";
	cin>>objp.food;
	cout<<"\n\n Enter Readings of Glucometer : ";
	cin>>objp.sugarlevel;
	cout<<"\n\n\n";
	cout<<" Enter the blood pressure(num) : ";
	cin>>objp.blpressurenum;
	cout<<" Enter the blood pressure(den) : ";
	cin>>objp.blpressuredem;
	cout<<"\n\n\n";
	cout<<"\n\n Enter the glucoselevel(sugar)(mg/dl)[This is Fasting Plasma Test(FPG)] -> : ";
	cin>>objp.glucoselevel;
	cout<<"\n\n Enter the glucoselevel(sugar1)(mg/dl)[This is Oral Glucose Tolerance Test(OGTT)] -> : ";
	cin>>objp.glucose1;
	Sleep(2);
	cout<<"\n\n Test complete you may take the report at evening from reception.";
	cout<<"\n\n\n";
    fout.write((char*)&objp,sizeof(objp));
    }
    else
    {
    	cout<<"\n\n There's no appointment Booked for such person";
	}
}
else
{
	cout<<"\n\n Invalid id Please Check and try again ";
}
fout.close();
fin.close();
fturndoc.close();
}
int diabetes::report()
{
	float checkdb1=0,checkdb2=0,checkdb3=0;
	system("cls");
	cout<<"\n Welcome to diabetes management system ";
	cout<<"\n OOPs SY 3 \n\n\n";
	fin.open("DIABETESDATA.txt",ios::in);
	fout.open("problems.txt",ios::in);
	int tempid,k=0;
	char check;
	cout<<"\t\t\t\tDiabetes Health Care\t\n";
	cout<<"\n Enter the id no. of patient : ";
	cin>>tempid;
    while(fin.read((char*)&mainobj,sizeof(mainobj)))
    {
	if(tempid==mainobj.id)
	{
	while(fout.read((char*)&objp,sizeof(objp)))
	{
    if(objp.id==tempid)
    {
	k++;
	break;
    }
    }
    break;
    }
}
if(mainobj.id==tempid )
{
		cout<<"|\t ID\t   |             NAME                 |  AGE    |   SEX   |   HEIGHT    |   WEIGHT      |\n";
	cout<<"|"<<setw(9)<<id<<setw(10)<<"|"<<setw(15)<<name<<setw(20)<<"|"<<setw(5)<<age<<setw(5)<<"|"<<setw(5)<<sex<<setw(5)<<"|"<<setw(7)<<height<<setw(7)<<"|"<<setw(7)<<weight<<setw(7)<<"\t|\n\n";
cout<<"\n\n";
cout<<" 1.Thirst Level : ";
if(objp.thirst==0)
cout<<" NO PROBLEM";
else if(objp.thirst==1)
cout<<" LOW";
else if(objp.thirst==2)
cout<<" MEDIUM";
else if(objp.thirst==3)
cout<<" HIGH";
cout<<"\n\n";



cout<<" 2.Hunger Level: ";
if(objp.hunger==0)
cout<<" NO PROBLEM";
else if(objp.hunger==1)
cout<<" LOW";
else if(objp.hunger==2)
cout<<" MEDIUM";
else if(objp.hunger==3)
cout<<" HIGH";
cout<<"\n\n";



cout<<" 3.Headche Level: ";
if(objp.headche==0)
cout<<" NO PROBLEM";
else if(objp.headche==1)
cout<<" LOW";
else if(objp.headche==2)
cout<<" MEDIUM";
else if(objp.headche==3)
cout<<" HIGH";
cout<<"\n\n";



cout<<" 4.Fatigue Level: ";
if(objp.fatigue==0)
cout<<" NO PROBLEM";
else if(objp.fatigue==1)
cout<<" LOW";
else if(objp.fatigue==2)
cout<<" MEDIUM";
else if(objp.fatigue==3)
cout<<" HIGH";
cout<<"\n\n";



cout<<" 5.Urine Frequency: ";
if(objp.furine==0)
cout<<" NO PROBLEM";
else if(objp.furine==1)
cout<<" LOW";
else if(objp.furine==2)
cout<<" MEDIUM";
else if(objp.furine==3)
cout<<" HIGH";
cout<<"\n\n";



cout<<" 6.Vision: ";
if(objp.furine==0)
cout<<" NO PROBLEM";
else if(objp.furine==1)
cout<<" LOW PROBLEM";
else if(objp.furine==2)
cout<<" MEDIUM PROBLEM";
else if(objp.furine==3)
cout<<" HIGH PROBLEM";
cout<<"\n\n";



cout<<" 7.BloodPressure :";
if(objp.blpressurenum>140)
{
	if(objp.blpressuredem>80)
    {
	cout<<"High Blood Pressure\n";
    }
	else
	cout<<"High Blood Pressure(cond(II))\n";
}
else if(objp.blpressurenum<=140 && objp.blpressurenum>=120)
{
	if(objp.blpressuredem>=80 && objp.blpressuredem<=100)
	cout<<" Normal Blood Pressure";
	else
	cout<<" Normal Blood Pressure(II)";
}
else
{
	cout<<" Low Blood Pressure ";
}
cout<<"\n\n\t\t\t\t\t\t\t\t Blood Report";
cout<<"\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n";
int blood;
srand(time(NULL));
blood=(rand()%8)+1;
if(blood==1)
{
	cout<<" Blood Group : "<<" A+ ";
}
else if(blood==2)
{
	cout<<" Blood Group : "<<" A-";
}
else if(blood==3)
{
	cout<<" Blood Group : "<<" B+";
}
else if(blood==4)
{
	cout<<" Blood Group : "<<" B-";
}
else if(blood==5)
{
	cout<<" Blood Group : "<<" O+";
}
else if(blood==6)
{
	cout<<" Blood Group : "<<" O-";
}
else if(blood==7)
{
	cout<<" Blood Group : "<<" AB+";
}
else if(blood==8)
{
	cout<<" Blood Group : "<<" AB-";
}
else
{
    cout<<" Blood Group : "<<" O+";
}
float bloodcount;
srand(time(NULL));
bloodcount=rand()%4000+10000;
if(bloodcount<4500)
{
	cout<<"\n Blood Count : Low -> "<<bloodcount;
}
else if(bloodcount>=4500 && bloodcount<10000)
{
	cout<<"\n Blood Count : High -> "<<bloodcount;
}
float ha;
 srand(time(NULL));
 ha=rand()%10+9;
 if(ha>=12 && ha<16)
 cout<<"\n\n Hameogloblin level -> Normal : "<<ha<<" grams per deciliter";
  if(ha<12)
 cout<<"\n\n Hameogloblin level -> LOW : "<<ha<<" grams per deciliter";
  if(ha>16)
 cout<<"\n\n Hameogloblin level ->  : "<<ha<<" grams per deciliter";


float cholestrol;
srand(time(NULL));
cholestrol=rand()%90+200;
if(cholestrol<=100)
cout<<"\n\n Cholesrtrol -> IDEAL ->  "<<cholestrol<<" mg/dl";
else if(cholestrol>100 && cholestrol<=129)
cout<<"\n\n Cholestrol -> Close to Ideal -> "<<cholestrol<<" mg/dl";
else if(cholestrol>=130 && cholestrol<=159)
cout<<"\n\n Cholesrtrol -> Borderline ->  "<<cholestrol<<" mg/dl";
else if(cholestrol>=160 && cholestrol<=189)
cout<<"\n\n Cholesrtrol ->  High ->  "<<cholestrol<<" mg/dl";
else if(cholestrol>=190 && cholestrol<=240)
cout<<"\n\n Cholesrtrol ->  Highly Dangerous ->  "<<cholestrol<<" mg/dl";

cout<<"\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n";
cout<<"\n\n 8.Fasting Plasma Glucose Test(FPG) : ";
if(objp.glucoselevel<100.00)
{
	cout<<" Glucose Level : Normal -> "<<objp.glucoselevel<<" mg/dl";
    checkdb1++;
}
else if(objp.glucoselevel>=100.00 && objp.glucoselevel<=125.00)
{
	cout<<" Glucose Level : Pre-Diabetes-> "<<objp.glucoselevel<<" mg/dl";
    checkdb2++;
}
else if(objp.glucoselevel>=126.00)
{
	cout<<" Glucose Level : High -> Diabetes II "<<objp.glucoselevel<<" mg/dl";
     checkdb2++;
     checkdb3++;
}
cout<<"\n\n 9.Oral Glucose Tolerance Test(OGTT) :- ";
if(objp.glucose1<140.00)
{
	cout<<" Glucose Level : Normal -> "<<objp.glucose1<<" mg/dl";
	checkdb1++;
}
else if(objp.glucose1>=140.00 && objp.glucose1<=199.00)
{
	cout<<" Glucose Level : Higher than Normal (PRE-Diabetes)-> "<<objp.glucose1<<" mg/dl";
    checkdb2++;
}
else if(objp.glucose1>=200.00)
{
	cout<<" Glucose Level : High -> Diabetes II"<<objp.glucose1<<" mg/dl";
    checkdb2++;
    checkdb3++;
}


cout<<"\n\n 10.Sugar Level (Glucometer): ";
if(objp.food=='y'|| objp.food=='Y')
{
if(objp.sugarlevel>=9.0)
{
cout<<" High Sugar Level-II\n";
checkdb2++;
checkdb3++;
}
else if(objp.sugarlevel<9.0 && objp.sugarlevel>7.5)
{
cout<<" High Sugar Level\n";
checkdb2++;
}
else if(objp.sugarlevel>4.0 && objp.sugarlevel<7.4)
{
cout<<" Normal Sugar Level\n";
checkdb1++;
}
else
cout<<" Low Sugar Level\n";
}
else if( objp.food=='n'|| objp.food=='N')
{
if(objp.sugarlevel>7.0)
{
cout<<" High Sugar Level\n";
checkdb2++;
}
else if(objp.sugarlevel>4.0 && objp.sugarlevel<5.9 )
{
cout<<" Normal Sugar Level\n\n";
checkdb1++;
}
else
{
cout<<" Low Sugar Level\n\n";
}
cout<<"\n\n During Taking test we have found that you hadn't ate something from last 2 - 3 hrs so here's a tip \n\n";
cout<<" Health Tip 1 :";
cout<<" You should eat something in every 2 hours it is important for body\n\n";
Sleep(1);
}
cout<<"\n +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";
if(checkdb1==3 && checkdb2<=1 && checkdb3==0)
{
	cout<<"\n\n\t\t\t\t\t\t\t\t Consult Doctor: For further Detailed Explanation!.";
	cout<<"\n\n\t\t\t\t\t\t\t\t Diabetes Test : Negative \n";
}
if(checkdb2==2 && checkdb3<=1)
{
	cout<<"\n\n\t\t\t\t\t\t\t\t Consult Doctor: For further Detailed Explanation!.";
	cout<<"\n\n\t\t\t\t\t\t\t\t Diabetes Test : Positive \n\t\t\t\t\t\t\t\t Diabetes Type : Pre Diabetes(I) \n";
}
if(checkdb2<2 && checkdb3>1)
{
	cout<<"\n\n\t\t\t\t\t\t\t\t Consult Doctor: For further Detailed Explanation!.";
	cout<<"\n\n\t\t\t\t\t\t\t\t Diabetes Test : Positive \n\t\t\t\t\t\t\t\t Diabetes Type : Pre Diabetes(II)\n";
}
if(checkdb3==2 || checkdb3==3)
{
	cout<<"\n\n\t\t\t\t\t\t\t\t Consult Doctor: For further Detailed Explanation!.";
	cout<<"\n\n\t\t\t\t\t\t\t\t Diabetes Test : Positive \n\t\t\t\t\t\t\t\t Diabetes Type : Level(II)\n";
}
if(checkdb3==2 && checkdb2==2)
{
    cout<<"\n\n\t\t\t\t\t\t\t\t Consult Doctor: For further Detailed Explanation!.";
	cout<<"\n\n\t\t\t\t\t\t\t\t Diabetes Test : Positive \n\t\t\t\t\t\t\t\t Diabetes Type : Level(I)\n";
}
else if(checkdb2==1 && checkdb1==1 && checkdb2==1)
{
	cout<<"\n\n\t\t\t\t\t\t\t Meet Doctor Again due to some complications in test";
}
else
{
	cout<<"\n\n\t\t\t\t\t\t\t Consult Doctor for More Help";
}
cout<<"\n +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";
cout<<"\n\n\n\t\t\t\t\t\t\t\t Final Result :- ";
if(objp.glucose1<140.00)
{
	cout<<"Normal";
}
else if(objp.glucose1>=140.00 && objp.glucose1<=199.00)
{
	cout<<"PRE-Diabetes";
}
else if(objp.glucose1>=200.00)
{
	cout<<"Diabetes II";
}
}
else
{
	cout<<"\n\n Test Report has not been made\n\n";
}
fout.close();
fin.close();
}

void diabetes::doctorlist()
{
	system("cls");
	cout<<"\n Welcome to diabetes management system ";
	cout<<"\n OOPs SY 3 \n\n\n";
	int date,month,year;
	cout<<"\t\t\tDiabetes Health Care!\n\n\n";
	fin.open("DIABETESDATA.txt",ios::in);
	fout.open("Temp.txt",ios::in);
	fturndoc.open("Doctors1.txt",ios::app|ios::in|ios::out);

	while(fturndoc.read((char*)&docp,sizeof(docp)))
	{
		fout.write((char*)&docp,sizeof(docp));
	}
	fout.close();
	fturndoc.close();
	fout.open("Temp.txt",ios::in);
	fturndoc.open("Doctors1.txt",ios::app|ios::in|ios::out);
	int choice;
	int tempid;
	cout<<"\n\n Enter the paitent id : ";
	cin>>tempid;
	while(fin.read((char*)&mainobj,sizeof(mainobj)))
    {
    if(tempid==mainobj.id)
    {
    break;
	}
    }
    if(tempid==mainobj.id)
    {
    	cout<<"\n\n Paitent Name : "<<mainobj.name;
    	cout<<"\n\n";
    	B:
    		int tt=0;
    		if(tt=1)
    		{
    	     system("cls");
    	    }
    	cout<<"\n\n\t\t\t\t\t\t\t\tDoctor's List\n\n";
    	cout<<"-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n";
	cout<<"\tId\t|\t\tDoctor Name\t\t|   \t\tTimings\t\t\t |\tDays\t|\t\tFees\t\t|\n\n";
	cout<<"\t1\t|\t\tDr.D.K.Thakur\t\t|\t\t10:00am-12:00pm\t\t|\t Mon \t|\t\tRs 1000\t\t|\n\n";
	cout<<"\t2\t|\t\tDr.N.S.Grover\t\t|\t\t05:00pm-07:00pm\t\t|\t Tue \t|\t\tRs 1500\t\t|\n\n";
	cout<<"\t3\t|\t\tDr.D.S.Chawla\t\t|\t\t11:00am-01:00pm\t\t|\t Wed \t|\t\tRs 1500\t\t|\n\n";
	cout<<"\t4\t|\t\tDr.Jordan    \t\t|\t\t11:00am-02:00pm\t\t|\t Thurs\t|\t\tRs 2000\t\t|\n\n";
	cout<<"\t5\t|\t\tDr.JazzyB    \t\t|\t\t05:00pm-08:00pm\t\t|\t Fri \t|\t\tRs 3000\t\t|\n\n";
	cout<<" Enter your Choice of Doctor to Book your Appointment\n\n";
	cout<<"\n Your Choice : ";
	cin>>choice;
	docp.id=tempid;
	docp.idofdoc=choice;
	cout<<"\n\n Enter Date to Fix appointment(dd/mm/yyyy)\n\n";
	cout<<" Your input : ";
	cin>>date;
	cin>>month;
	cin>>year;
	cout<<"\n\n Wait! Checking For Appointments ";
	cout<<"\n\n ";
	fout.read((char*)&docp,sizeof(docp));
	{
	if(docp.st.d==date && docp.st.m==month &&  docp.st.y==year)
	{
		char check;
		cout<<"\n\n Sorry for inconvenience The date you selected is not available for appointment ";
		cout<<"\n\n Press Y to try again \n ";
		cout<<"Your Choice: ";cin>>check;
		if(check=='y'||check=='Y')
		{
			tt=1;
			goto B;
		}
	}
	else
	{
	    docp.st.d=date;
		docp.st.m=month;
		docp.st.y=year;
		cout<<"\n ";
		Sleep(3);
		cout<<"\n\n Thanks! Appointment Fixed on "<<date<<"/"<<month<<"/"<<year;
		fturndoc.write((char*)&docp,sizeof(docp));
	}
    }
    }
    else
    cout<<"\n\n Appointment Not Fixed";
    cout<<"\n\n";
    fout.close();
    fturndoc.close();
    fin.close();
    //remove("Temp.txt");
}

void diabetes::prereport()
{
	int tempid,c=0;
	system("cls");
	cout<<"\n Welcome to diabetes management system ";
	cout<<"\n OOPs SY 3 \n\n\n";
	fin.open("DIABETESDATA.txt",ios::in);
	fturndoc.open("Doctors1.txt",ios::in);
	cout<<" Enter The Id of paitent: ";
	cin>>tempid;
    while(fin.read((char*)&mainobj,sizeof(mainobj)))
    {
    	if(tempid==mainobj.id)
    	{
         break;
	    }
    }
      while(fturndoc.read((char*)&docp,sizeof(docp)))
	     {
         if(docp.id==tempid)
         break;
         }
    if(tempid==mainobj.id && tempid==docp.id)
    {
    cout<<"\n\n NAME: "<<mainobj.name;
	cout<<"\n\n Age: "<<mainobj.age;
	cout<<"\n\n Sex: "<<mainobj.sex;
	cout<<"\n\n Appointment date: "<<docp.st.d<<"/"<<docp.st.m<<"/"<<docp.st.y<<"\n";
	cout<<"\n\n Mobile number: "<<mainobj.phn;
	cout<<" \n\n Doctor Name: ";
	if(docp.idofdoc==1)
	{
		cout<<"Dr.D.K.Thakur";
	}
	if(docp.idofdoc==2)
	{
		cout<<"Dr.N.S.Grover";
	}
	if(docp.idofdoc==3)
	{
		cout<<"Dr.D.S.Chawla";
	}
	if(docp.idofdoc==4)
	{
		cout<<"Dr.Jordan";
	}
	if(docp.idofdoc==5)
	{
		cout<<"Dr.JazzyB";
	}
    cout<<"\n\n\n";
    }
    else
    cout<<"\n\n Invalid Id or Appointment has Not been Taken\n\n";
    fin.close();
    fturndoc.close();
}
void diabetes::deldata()
{
	    int tempid,k=0;
	    system("cls");
	      	fin.open("DIABETESDATA.txt",ios::in);
	   	fout.open("Temp.txt",ios::out);
	   	fturndoc.open("Doctor1.txt",ios::in);
	   	ftemp.open("Tempdoc.txt",ios::out);
	       cout<<"\t\t\t\t\t Welcome to diabetes management system\n\n\n";
    cout<<"\t\t\t\t\t     OOPS course project SY3\n\n";
    cout<<"\t\t\t\tHere's the Data of all paitents\n\n\n";

	cout<<"|\t ID\t   |             NAME                 |  AGE    |   SEX   |   HEIGHT    |   WEIGHT      |\n";
	while(fin.read((char*)&mainobj,sizeof(mainobj)))
	{
	cout<<"|"<<setw(9)<<id<<setw(10)<<"|"<<setw(15)<<name<<setw(20)<<"|"<<setw(5)<<age<<setw(5)<<"|"<<setw(5)<<sex<<setw(5)<<"|"<<setw(7)<<height<<setw(7)<<"|"<<setw(7)<<weight<<setw(7)<<"\t|\n\n";
    }
    fin.close();
    	fin.open("DIABETESDATA.txt",ios::in);
	   	cout<<"\n Enter the id no. of patient : ";
	   	cin>>tempid;

	   	while(fin.read((char*)&mainobj,sizeof(mainobj)))
	   	{
	   	if(tempid==mainobj.id)
	   	{
	   	k++;
		}
		else
		{
			fout.write((char*)&mainobj,sizeof(mainobj));
		}
		}
		fin.close();
		fout.close();
		fin.open("DIABETESDATA.txt",ios::out);
	   	fout.open("Temp.txt",ios::in);
	   	while(fout.read((char*)&mainobj,sizeof(mainobj)))
	   	{
		fin.write((char*)&mainobj,sizeof(mainobj));
		}
		cout<<"\n\n Deleted Record";
		cout<<"\n\n";
		fin.close();
		fout.close();
		cout<<"\n\n UPDATED RECORDS";
		cout<<"\n\n";
		fin.open("DIABETESDATA.txt",ios::in);
		cout<<"|\t ID\t   |             NAME                 |  AGE    |   SEX   |   HEIGHT    |   WEIGHT      |\n";
	    while(fin.read((char*)&mainobj,sizeof(mainobj)))
     	{
	     cout<<"|"<<setw(9)<<id<<setw(10)<<"|"<<setw(15)<<name<<setw(20)<<"|"<<setw(5)<<age<<setw(5)<<"|"<<setw(5)<<sex<<setw(5)<<"|"<<setw(7)<<height<<setw(7)<<"|"<<setw(7)<<weight<<setw(7)<<"\t|\n\n";
        }
    fin.close();
	remove("tempdoc.txt");
}

void diabetes::admin()
{
	system("cls");
    cout<<"\t\t\t\t\t Welcome to diabetes management system\n\n\n";
    cout<<"\t\t\t\t\t     OOPS course project SY3\n\n";
	int ch;
	char check;
	BD:
	cout<<"\t\t\tCHOOSE THE OPTIONS FROM MENU\n\n 1: List All data(Patients)\n\n 2: Search for Patient\n\n 3: Delete Record(Patients) \n\n 4: Update Records(Patients)\n\n 5: Count Patients\n\n 6: Admin Records\n\n 7: Admin Signup\n\n 8: Logout";
    cout<<"\n\n YOUR CHOICE FROM LIST : ";
	cin>>ch;
	switch(ch)
	{
		    case 1:
    		display(10,20);
    		cout<<"\n Do You Want To Continue(y/n)\n";
    		cout<<" YOUR CHOICE: ";
    		cin>>check;
    		if(check=='y'||check=='Y')
    		{
    		system("cls");
    		goto BD;
			}
			else
			{
			cout<<"\n\n\t\t\tThank You! Visit us Again\n";
			break;
		    }
			case 2:
    		search();
    		cout<<"\n Do You Want To Continue(y/n)\n";
    		cout<<" YOUR CHOICE: ";
    		cin>>check;
    		if(check=='y'||check=='Y')
    		{
    		system("cls");
    		goto BD;
			}
			else
			{
			cout<<"\n\n\t\t\tThank You! Visit us Again\n";
			break;
		    }
		    case 3:
		    deldata();
		    cout<<"\n Do You Want To Continue(y/n)\n";
    		cout<<" YOUR CHOICE: ";
    		cin>>check;
    		if(check=='y'||check=='Y')
    		{
    		system("cls");
    		goto BD;
			}
			else
			{
			cout<<"\n\n\t\t\tThank You! Visit us Again\n";
			break;
		    }
		    case 4:
		    update();
		    cout<<"\n Do You Want To Continue(y/n)\n";
    		cout<<" YOUR CHOICE: ";
    		cin>>check;
    		if(check=='y'||check=='Y')
    		{
    		system("cls");
    		goto BD;
			}
			else
			{
			cout<<"\n\n\t\t\tThank You! Visit us Again\n";
			break;
		    }
		    case 5:
	        admino.count();
			cout<<"\n Do You Want To Continue(y/n)\n";
    		cout<<" YOUR CHOICE: ";
    		cin>>check;
    		if(check=='y'||check=='Y')
    		{
    		system("cls");
    		goto BD;
			}
			else
			{
			cout<<"\n\n\t\t\tThank You! Visit us Again\n";
			break;
		    }
			case 6:
		    mainobj.adminre();
			cout<<"\n Do You Want To Continue(y/n)\n";
    		cout<<" YOUR CHOICE: ";
    		cin>>check;
    		if(check=='y'||check=='Y')
    		{
    		system("cls");
    		goto BD;
			}
			else
			{
			cout<<"\n\n\t\t\tThank You! Visit us Again\n";
			break;
		    }
		    case 7:
		    admino.adminsi();
		    cout<<"\n Do You Want To Continue(y/n)\n";
    		cout<<" YOUR CHOICE: ";
    		cin>>check;
    		if(check=='y'||check=='Y')
    		{
    		system("cls");
    		goto BD;
			}
			else
			{
			cout<<"\n\n\t\t\tThank You! Visit us Again\n";
			break;
		    }
			case 8:
			cout<<"\n\n Loging out......... \n\n";
			Sleep(2);
			cout<<"\n\n Logged Out Successfully.....\n";

			mainobj.twist();
			default:
			cout<<"\n\n Terminated due to wrong key press\n";
	}
}

void adminstration::adminsi()
{
	int c=0;
	system("cls");
	fadmin.open("admin.txt",ios::app|ios::in|ios::out);
    cout<<"\t\t\t\t\t Welcome to diabetes management system\n\n\n";
    cout<<"\t\t\t\t\t     OOPS course project SY3\n\n";
	cout<<" Enter Name : ";
	cin>>admino.name;
	cout<<"\n\n Enter the userid : ";
	cin>>admino.userid;
	cout<<"\n\n Enter the password : ";
	cin>>admino.password;
	cout<<"\n\n Enter the phone no.: ";
	cin>>admino.phna;
	cout<<"\n\n Enter The ID GENERATED : ";
	cin>>admino.stid;
	Sleep(1);
	cout<<"\n\n Logging in in 3 seconds \n\n";
	Sleep(1);
	cout<<"\n\n Logging in in 2 seconds \n\n";
	Sleep(1);
	cout<<"\n\n Logging in in 1 seconds \n\n";
	Sleep(1);
	fadmin.write((char*)&admino,sizeof(admino));
	fadmin.close();
	mainobj.admin();
}

void adminstration::count()
    {
	int c=0;
	system("cls");
	cout<<"\t\t\t\t\t Welcome to diabetes management system\n\n\n";
    cout<<"\t\t\t\t\t     OOPS course project SY3\n\n";
	fadmin.open("admin.txt",ios::in);
	fin.open("DIABETESDATA.txt",ios::in);
	cout<<" Choose : \n\n 1-> Patients \n\n 2-> Staff \n\n ";
	int choice;
	cout<<"\n Your Choice : ";
	cin>>choice;
	switch(choice)
	{
	case 1:
	while(fin.read((char*)&mainobj,sizeof(mainobj)))
	{
	c++;
	}
	cout<<"\n\n The Total Count is: ";
	cout<<c;
	counter=c;
	c=0;
		cout<<"\n\n\n";
	break;
	case 2:
    while(fadmin.read((char*)&admino,sizeof(admino)))
	{
	c++;
	}
	cout<<"\n\n The Total Count is: ";
	cout<<c+5;
	counter=c;
	cout<<"\n\n\n";
	c=0;
	break;
    }
    }


void diabetes::setlock()                //error password
{
        int i,c=0;
        char a[20],p[13];
        system("cls");
	    cout<<"\t\t\t\t\t Welcome to diabetes management system\n\n\n";
        cout<<"\t\t\t\t\t     OOPS course project SY3\n\n";
	    fadmin.open("admin.txt",ios::in);
	    fout.open("admintmp.txt",ios::out);
	    fadmin.seekg(0,ios::beg);
	    fout.seekp(0,ios::beg);
		while(fadmin.read((char*)&admino,sizeof(admino)))
	    {
	    fout.write((char*)&admino,sizeof(admino));
	    }
       fout.close();
	   fadmin.close();
	   fout.open("admintmp.txt",ios::in|ios::app|ios::out);
	   while( fout.read((char*)&admino,sizeof(admino)))
	   {
	   	c++;
	   }
	   fout.close();
	   fadmin.open("admin.txt",ios::in|ios::out);
	    if(c==0)
	    {
	    	admino.adminsi();
	    }
	    else
	    {
	    cout<<"\n\n Enter the userid : ";
        cin>>a;
        cout<<"\n\n Enter The Password : ";
        char pass[5];
		char b;
        for(i=0;i<sizeof(pass);i++)
		{
			b=getch();
			putchar('*');
			p[i]=b;
		}
		p[i]='\0';
        while(fadmin.read((char*)&admino,sizeof(&admino)) && !fadmin.eof())
       {
    	if(strcmp(a,admino.userid)==0 && strcmp(p,admino.password)==0)
	   {
	    break;
	   }
       }
       fadmin.close();
       if(strcmp(a,admino.userid)==0 && strcmp(p,admino.password)==0)
	   {
	   	mainobj.admin();
	   }
       else
	   {
	   cout<<"\n\n Invalid UserId or Password \n\n";
	   counter1=0;
	   }
       }

remove("admintmp.txt");
}


void diabetes::update()
{
	ftemp.open("send1.txt",ios::in);
	fout.open("DIABETESDATA.txt",ios::in);
	system("cls");
	cout<<"\t\t\t\t\t Welcome to diabetes management system\n\n\n";
    cout<<"\t\t\t\t\t     OOPS course project SY3\n\n";
    int tempid;
    fin.open("update.txt",ios::out);
	cout<<"\n\n Enter The ID to be updated \n";
	cin>>tempid;
	while(fout.read((char*)&mainobj,sizeof(mainobj)))
	{
if(mainobj.id==tempid)
	{
	cout<<"\n\n Enter the new name : ";
	fflush(stdin);
	gets(mainobj.name);
	cout<<"\n\n Enter the new age : ";
	cin>>mainobj.age;
	cout<<"\n\n Enter the new height : ";
	cin>>mainobj.height;
	cout<<"\n\n Enter the new weight : ";
	cin>>mainobj.weight;
	fin.write((char*)&mainobj,sizeof(mainobj));
    }
   else if(mainobj.id!=tempid)
	fin.write((char*)&mainobj,sizeof(mainobj));
	}
	fout.close();
	fin.close();
	fin.open("update.txt",ios::in);
	fout.open("DIABETESDATA.txt",ios::out);
	fout.seekg(0,ios::beg);
	while(fin.read((char*)&mainobj,sizeof(mainobj)))
	{
		fout.write((char*)&mainobj,sizeof(mainobj));
	}
	fin.close();
	fout.close();
	cout<<"\n\n Updating...";
	Sleep(2);
	cout<<"\n\n UPDATED...";
	Sleep(1);
}

 void diabetes::adminre()						//record admin
 {
 	 system("cls");
	cout<<"\t\t\t\t\t Welcome to diabetes management system\n\n\n";
    cout<<"\t\t\t\t\t     OOPS course project SY3\n\n";
 	fadmin.open("admin.txt",ios::in);
 	while(fadmin.read((char*)&admino,sizeof(admino)))
 	{
 	 cout<<"\n\n =";
	 cout<<"Name : "<<admino.name;
	 cout<<"\n\n ";
	 cout<<"User Id :"<<admino.userid;
	 cout<<"\n\n ";
	 cout<<"ID no. : "<<admino.stid;
	 cout<<"\n\n";
	}
	fadmin.close();
 }

void quick::buy()               // not more than 2 medicines , issue, used getch to stop
{
	int sum=0;
	int billid;
	int mid;
	int qty;
	char ch1;
	int mod[10];
	int j=0;
	B:
	system("cls");
 	cout<<"\t\t\t\t\t Welcome to diabetes management system\n\n\n";
    cout<<"\t\t\t\t\t     OOPS course project SY3\n\n";
	cout<<setw(5)<<"ID"<<setw(5)<<"|"<<setw(20)<<"Name"<<setw(20)<<"|"<<setw(5)<<"Price/package"<<setw(5)<<"|\n\n";
	cout<<setw(5)<<"1"<<setw(5)<<"|"<<setw(20)<<"NOVOLOG"<<setw(20)<<"|"<<setw(5)<<"Rs 1200"<<setw(5)<<"|\n\n";
	cout<<setw(5)<<"2"<<setw(5)<<"|"<<setw(20)<<"NOVOLIN"<<setw(20)<<"|"<<setw(5)<<"Rs 1100"<<setw(5)<<"|\n\n";
	cout<<setw(5)<<"3"<<setw(5)<<"|"<<setw(20)<<"HUMULIN"<<setw(20)<<"|"<<setw(5)<<"Rs 1500"<<setw(5)<<"|\n\n";
	cout<<setw(5)<<"4"<<setw(5)<<"|"<<setw(20)<<"HUMALOG"<<setw(20)<<"|"<<setw(5)<<"Rs 1400"<<setw(5)<<"|\n\n";
	cout<<setw(5)<<"5"<<setw(5)<<"|"<<setw(20)<<"APIDRA"<<setw(20)<<"|"<<setw(5)<<"Rs 2000"<<setw(5)<<"|\n\n";
	cout<<setw(5)<<"6"<<setw(5)<<"|"<<setw(20)<<"PRECOSE"<<setw(20)<<"|"<<setw(5)<<"Rs 2500"<<setw(5)<<"|\n\n";
	cout<<setw(5)<<"7"<<setw(5)<<"|"<<setw(20)<<"MIGLITOL"<<setw(20)<<"|"<<setw(5)<<"Rs 3500"<<setw(5)<<"|\n\n";
	cout<<setw(5)<<"8"<<setw(5)<<"|"<<setw(20)<<"KAZANO"<<setw(20)<<"|"<<setw(5)<<"Rs 4500"<<setw(5)<<"|\n\n";
	cout<<setw(5)<<"9"<<setw(5)<<"|"<<setw(20)<<"GLUCOVANCE"<<setw(20)<<"|"<<setw(5)<<"Rs 5500"<<setw(5)<<"|\n\n";
	cout<<setw(5)<<"10"<<setw(5)<<"|"<<setw(20)<<"ACTOPLUS"<<setw(20)<<"|"<<setw(5)<<"Rs 6000"<<setw(5)<<"|\n\n";

    cout<<"\n\n Enter the id you want to buy : ";
    cin>>mid;
    if(mid==1)
    {
    	sum=sum+1200;
	}
	if(mid==2)
    {
    	sum=sum+1100;
	}
	if(mid==3)
    {
    	sum=sum+1500;
	}
	if(mid==4)
    {
    	sum=sum+1400;
	}
	if(mid==5)
    {
    	sum=sum+2000;
	}
	if(mid==6)
    {
    	sum=sum+2500;
	}
	if(mid==7)
    {
    	sum=sum+3500;
	}
	if(mid==8)
    {
    	sum=sum+4500;
	}
	if(mid==9)
    {
    	sum=sum+5500;
	}
	if(mid==10)
    {
    	sum=sum+6000;
	}

	cout<<"you have " << j <<" number of medicines ";
	cout<<"\n\n Do you want more?(Y/N) ";
	cin>>ch1;
	if(ch1=='Y'||ch1=='y')
	{
		mod[j++]=mid;

		if(j>=10)
        {
            cout<<"More medicines than needed";
        }
        else
        {
            goto B;

        }

   }
	else
	{   mod[j++]=mid;
	system("cls");
 	cout<<"\t\t\t\t\t Welcome to diabetes management system\n\n\n";
    cout<<"\t\t\t\t\t     OOPS course project SY3\n\n";
    cout<<setw(5)<<"ID"<<setw(5)<<"|"<<setw(20)<<"Name"<<setw(20)<<"|"<<setw(5)<<"Price/package"<<setw(5)<<"|\n\n";

for(int u=0;u<=j;u++)
{

	if(mod[u]==1)
    {
    	cout<<setw(5)<<"1"<<setw(5)<<"|"<<setw(20)<<"NOVOLOG"<<setw(20)<<"|"<<setw(5)<<"Rs 1200"<<setw(5)<<"|\n\n";
	}
	if(mod[u]==2)
    {
    cout<<setw(5)<<"2"<<setw(5)<<"|"<<setw(20)<<"NOVOLIN"<<setw(20)<<"|"<<setw(5)<<"Rs 1100"<<setw(5)<<"|\n\n";
	}
	if(mod[u]==3)
    {
    cout<<setw(5)<<"3"<<setw(5)<<"|"<<setw(20)<<"HUMULIN"<<setw(20)<<"|"<<setw(5)<<"Rs 1500"<<setw(5)<<"|\n\n";
	}
	if(mod[u]==4)
    {
    cout<<setw(5)<<"4"<<setw(5)<<"|"<<setw(20)<<"HUMALOG"<<setw(20)<<"|"<<setw(5)<<"Rs 1400"<<setw(5)<<"|\n\n";
	}
	if(mod[u]==5)
    {
    cout<<setw(5)<<"5"<<setw(5)<<"|"<<setw(20)<<"APIDRA"<<setw(20)<<"|"<<setw(5)<<"Rs 2000"<<setw(5)<<"|\n\n";
	}
		if(mod[u]==6)
    {
    	cout<<setw(5)<<"6"<<setw(5)<<"|"<<setw(20)<<"PRECOSE"<<setw(20)<<"|"<<setw(5)<<"Rs 2500"<<setw(5)<<"|\n\n";
	}
	if(mod[u]==7)
    {
    cout<<setw(5)<<"7"<<setw(5)<<"|"<<setw(20)<<"MIGLITOL"<<setw(20)<<"|"<<setw(5)<<"Rs 3500"<<setw(5)<<"|\n\n";
	}
	if(mod[u]==8)
    {
    cout<<setw(5)<<"8"<<setw(5)<<"|"<<setw(20)<<"KAZANO"<<setw(20)<<"|"<<setw(5)<<"Rs 4500"<<setw(5)<<"|\n\n";
	}
	if(mod[u]==9)
    {
    cout<<setw(5)<<"9"<<setw(5)<<"|"<<setw(20)<<"GLUCOVANCE"<<setw(20)<<"|"<<setw(5)<<"Rs 5500"<<setw(5)<<"|\n\n";
	}
	if(mod[u]==10)
    {
    cout<<setw(5)<<"10"<<setw(5)<<"|"<<setw(20)<<"ACTOPLUS"<<setw(20)<<"|"<<setw(5)<<"Rs 6000"<<setw(5)<<"|\n\n";
	}

}
	cout<<"\t\t\t\t\t\t\t\t Total Bill : "<<sum;
	cout<<"\t\t\t\t\t\t\t Thanks!for taking Quick test and buying  medicines";
	cout<<"\n";
	system("pause");
	mainobj.twist();
	}
}
