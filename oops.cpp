


#include<bits/stdc++.h> 
using namespace std;
 
#include <termios.h>
#include <unistd.h>
#include <stdio.h>


int getch(void)
{
    struct termios oldattr, newattr;
    int ch;
    tcgetattr( STDIN_FILENO, &oldattr );
    newattr = oldattr;
    newattr.c_lflag &= ~( ICANON | ECHO );
    tcsetattr( STDIN_FILENO, TCSANOW, &newattr );
    ch = getchar();
    tcsetattr( STDIN_FILENO, TCSANOW, &oldattr );
    return ch;
}

 class consumer
	{
			int cno;
			
			int a,b,c;
			int i;
			public:
	 		string  cname;
			string adress;
     
 		
			public:
 
     		void entry()
		
			  	{
					cout<<"\t ****TECH-TRADERS*****\n";

					cout<<"Customer ID :\n";

					cout<<"Customer name :\n";

					cout<<"Customer adress :\n";

					cout<<"Customer Service number :\n";

					cout<<"Costumer Smart card number :\n";

					cout<<"Costumer Phone number :\n";

					cout<<"Customer Bill number :\n";

					cin>>cno;

					cin>>cname;
					

					cin>>adress;
					

					cin>>a;

					cin>>b;

					cin>>c;

					cin>>i;
				}

      
 
	    	void display()
			    {
				    cout<<"\n\n";
				    
				    cout<<"Customer ID :";
				    cout<<cno<<"\n";
				    cout<<"i am here-\n";
				    cout<<"Customer name :";
				    //puts(cname);
				    cout<<cname<<"\n";
				    cout<<"Customer adress :"<<adress<<"\n";
				    
				    cout<<"Customer Service number :" <<a<<"\n";
				    
				    cout<<"Costumer Smart card number :"<<b<<"\n";
				    
				    cout<<"Costumer Phone number :"<<c<<"\n";
				    
				    cout<<"Customer Bill number :"<<i<<"\n";
			    }


			int rcno()
				{
					return cno;
					//dgrgd
					//sdgsg/\
					//sdgdsg/
				}


     		void printname()
				{
					cout<<cname;
					//dgrgd
					//sdgsg/\
					//sdgdsg/

				}


			void printadd()
				{
				cout<<adress;
				}
	}c;
 
     
 
    void write()
		{
			char ch;
			
			fstream f1;
			c.entry();

			
			cout<<"\n";
			f1.open("main.dat",ios::app | ios :: binary | ios ::out);
			cout<<"\n\n\tDO you want to save the record(y/n)-\n";
			cin>>ch;
			if(ch=='y')
			{
			f1.write((char*)&c,sizeof(c));
			}
			f1.close();
		}
 
	  
 
      void read()
		{
			//consumer c;
			ifstream f1;
			//f1.seekg(0, ios::beg);
			f1.open("main.dat", ios::in | ios :: binary);
			//f1.seekg(0, ios::in | ios :: binary);
			while(f1.read((char*)&c,sizeof(c)))
			{
				
			c.display();

			
		
			
			}
				getch();
			f1.close();
		}
 
      
 
      void search()
		{
			//consumer c;
			int rn;
			char found='n';
			ifstream f1;
			f1.open("main.dat",ios ::in | ios ::binary);
			cout<<"\n\n Enter Customer ID you want to SEARCH :";
			cin>>rn;
			//f1.seekg (0, ios::beg);
	    	
			while(f1.read((char*)&c, sizeof(c)))
			{
			
			if(c.rcno()==rn)
				{
				c.display();
				getch();
				found='y';
				
				}
				
			}

			if(found=='n')
			cout<<"\n\n\tRECORD NOT FOUND!!!!!!!!!!!!!\n"<<endl;
			f1.close();
		}
 
      
 
      void del()
		{
			ifstream f1("main.dat",ios::in);
			ofstream f2("temp.dat",ios::out);
			int rno;
			char found='f',confirm='n';
			cout<<"\n\n Enter Customer ID you want to DELETE :\t";
			cin>>rno;
			while(!f1.eof())
			{
				f1.read((char*)&c,sizeof(c));
				if(c.rcno()==rno)
				{
					c.display();
					found='t';
					cout<<"\n\n Are you sure want to DELETE this record ? (y/n)\t";
					cin>>confirm;
					if(confirm=='n')
						f2.write((char*)&c,sizeof(c));
				}
				else
					f2.write((char*)&c,sizeof(c));
			}
			if(found=='f')
			cout<<"\n\n\tRECORD NOT FOUND\n";
			f1.close();
			f2.close();
			remove("main.dat");
			rename("temp.dat","main.dat");
			f1.open("main.dat",ios::in);
			system("clear");
			cout<<"\n\n\n Now the file contains\n\n\n";
			while(!f1.eof())
			{
			f1.read((char*)&c,sizeof(c));
			if(f1.eof())
			c.display();
			}
			f1.close();
		}
 
      
 
      void update()
		{
			fstream f1("main.dat",ios::in | ios::out | ios::binary);
			int rno;
			long pos;
			char found='f';
			cout<<"\n\n Enter the Customer ID you want to MODIFY :\t";
			cin>>rno;
			while(!f1.eof())
			{
			pos=f1.tellg();
			f1.read((char*)&c,sizeof(c));
			if(c.rcno()==rno)
			{
			c.entry();
			f1.seekg(pos);
			f1.write((char*)&c,sizeof(c));
			found='t';
			break;
			}
			}
			if(found=='f')
			cout<<"\n\n\tRECORD NOT FOUND\n";
			f1.seekg(0);
			system("clear");
			cout<<"\n Now the file contains\n\n";
			c.display();
			f1.close();
			getch();
		}
 
      
 int main()
	{
		
			unsigned int sum,add,d,j,e,f,g,h,k,l,w,x,y,z,choice;
			int abis=0,apep=0,aden=0,amun=0,aperk=0,acoc=0,atit=0,alux=0,atid=0,aree=0;
			unsigned int m=0,n=0,o=0,p=0,q=0,r=0,s=0,t=0,u=0,v=0;
			int pend=0,print=0,graph=0,ram=0,hard=0,win=0,ant=0,p1=0,p2=0,g1=0,r1=0,h1=0,w1=0,an1=0,mo=0,mous=0,web=0,aweb=0,asc=0,scan=0,total=0;
			char pu,str[10],yes,et;
			system("clear");



			system("clear");
			lab:;
	
	pass:;

			system("clear");
	cout<<"\n\n\tPLEASE BE CAREFUL ENTER THE PASSWORD IN SMALL LETTERS\n";
	cout<<"\n\t\tPASSWORD DOES NOT CONTAINS ANY NUMBER\n\n\n";
	cout<<"\n\n\t\t\tEnter your Password\t";
	str[0]=getch();
	cout<<"*";
	str[1]=getch();
	cout<<"*";
	str[2]=getch();
	cout<<"*";
	str[3]=getch();
	cout<<"*";
	str[4]=getch();
	cout<<"*";
	str[5]=getch();
	cout<<"*";
	str[6]=getch();
	cout<<"*";
	str[7]='\0';
	cout<<"*";
	if(strcmp(str,"abhijit")==0)
	{
			system("clear");
	cout<<"\n\n\n\t\tPROJECT LOADED ! PRESS ENTER TO CONTINUE";
	getch();

			system("clear");
	
	}
	else
	{
	cout<<"\n\n\t\t\t$$$$$$ Ooop's wrong password $$$$$$\n";
	cout<<"\n\n\t\t\t%%%%%% Please re-enter the password%%%%%%\n";
	getch();
	k++;
	
	if(k==3)
	{
	cout<<"\nExiting from the project!!!!! Bye\n";
	getch();
	exit(0);
	}
	goto pass;
	}
	
	//system("clear");
	 cout<<"ARMY INSTITUTE OF TECHNOLOGY,PUNE";

	 cout<<"\n WELCOME TO MY PROJECT";
	
	 cout<<"\n COURSE--OBJECT ORIENTED PROGRAMMING";
	cout<<"\n";
	
	
	 cout<<" BY:- SNEHA \n";

	 cout<<"B-E(SE) IT - 3RD SEM\n";
	
	 cout<<"ROLL NO:- 8251\n";
	
	 
	 cout<<"\n\n";

	cout<<"\n\n";
	cout<<"PRESS ENTER TO CONTINUE!!!!!!";
	getch();
	//system("clear");
 
	
	//***********************************************************************************************


			again:;
			system("clear");
			cout<<"\n\t\t\t    ^^^^^^^^^^^^^^^^^^^^^^^^^^^";
			cout<<"\n\t\t\t    !=========================!\n";
			cout<<"\n\t\t\t    !**** TECH-TRADERS****!\n";
			cout<<"\n\t\t\t    !=========================!";
			cout<<"\n\t\t\t    ^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\n\n\n\n";
			cout<<"  \t\t\t$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$";
			cout<<"\n\n\t\t\t*     1.NEW CUSTOMER              *";
			cout<<"\n\n\t\t\t*     2.DETAILS                   *";
			cout<<"\n\n\t\t\t*     3.SEARCH A RECORD           *";
			cout<<"\n\n\t\t\t*     4.DELETE A RECORD           *";
			cout<<"\n\n\t\t\t*     5.MODIFY A RECORD           *";
			cout<<"\n\n\t\t\t*     6.DISPLAY ALL RECORDS       *";
			cout<<"\n\n\t\t\t*     7.QUANTITY AVAILABLE        *";
			cout<<"\n\n\t\t\t*     0.EXIT                      *\n";
			cout<<"\n\t\t\t$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$";
			cout<<"\n\n\n\n\t Enter your choice :\t";
			cin>>d;
			switch(d)
				{
					 
					case 1:
					 
							system("clear");
						{		
										
						 
							
								write();
						 
							

								start:
								cout<<"\n\n\nDO YOU WANT TO PURCHASE(Y/N):\n\n";
								cin>>pu;
								if(pu=='Y'||pu=='y')
								{
								system("clear");
						 
						
									items:;
									cout<<"\n\t\t\t\t*************";
									cout<<"\n\t\t\t\tPURCHASE LIST";
									cout<<"\n\t\t\t\t*************\n\n\n\n";
									cout<<"\n\n\t\t\t1.PENDRIVE";
									cout<<"\n\n\t\t\t2.SCANNER";
									cout<<"\n\n\t\t\t3.PRINTER";
									cout<<"\n\n\t\t\t4.WEBCAM";
									cout<<"\n\n\t\t\t5.GRAPHIC CARD";
									cout<<"\n\n\t\t\t6.RAM";
									cout<<"\n\n\t\t\t7.HARD DISK";
									cout<<"\n\n\t\t\t8.WINDOWS ORIGINAL CD'S";
									cout<<"\n\n\t\t\t9.ANTIVIRUS";
									cout<<"\n\n\t\t\t10.MOUSE";
									cout<<"\n\n\n\t\t\tEnter your choice\t";
									cin>>choice;
									if(choice==1)
									{
							 
								
												bis:;
												system("clear");
												cout<<"\n\n\t\t\t\tPENDRIVES\n\n";
												cout<<"\n     ITEMS\t\t\t\t\tRATE\n";
												cout<<"\n  1. 2GB\t\t\t\t\t350\n";
												cout<<"  2. 4GB\t\t\t\t\t500\n";
												cout<<"  3. 5GB\t\t\t\t\t700\n";
												cout<<"  4. 8GB\t\t\t\t\t800\n";
												cout<<"  5. 16GB\t\t\t\t\t1800\n";
												cout<<"  6. 32GB\t\t\t\t\t2400\n";
												cout<<"  7. 64GB\t\t\t\t\t3000\n";
												cout<<"\n\n\tWhich PENDRIVE you want to purchase\t";
												cin>>p1;
												if(p1==1)
												{
												pend=350;
												}
												else if(p1==2)
												{
												pend=500;
												}
												else if(p1==3)
												{
												pend=700;
												}
												else if (p1==4)
												{
												pend=800;
												}
												else if(p1==5)
												{
												pend=1800;
												}
												else if(p1==6)
												{
												pend=2400;
												}
												else if(p1==7)
												{
												pend=3000;
												}
												else if(p1==0)
												{
												goto items;
												}
												else if(p1!=1||p1!=2||p2!=3||p1!=4||p1!=5||p1!=6||p1!=7)
												{
												cout<<"\n\n\tOOPS!!!!!!!  Wrong choice\n\n";
												getch();
												goto bis;
												}
												cout<<"\n\tPENDRIVE(MAX 5): \t";
												cin>>m;
												if(m>5)
												{
												cout<<"\n\n\tEnter Quantity Smaller than 5";
												getch();
												goto items;
												}
												else
												abis=1000-m;
												cout<<"\n\tDO you want to purchase more(y/n)";
												cin>>yes;
												if(yes=='y')
												{
												system("clear");
												goto items;
												}
												else
												{
												system("clear");
												goto cash;
												}
									}
									if(choice==2)
									{
												pep:;
												system("clear");
												cout<<"\n\n\t\t\t\tSCANNER\n\n";
												cout<<"\n    ITEMS\t\t\t\tRATE\n";
												cout<<"\n  1.FLATBED\t\t\t\t5000\n";
												cout<<"  2.SHETFED\t\t\t\t6000\n";
												cout<<"  3.PHOTO SCANNER\t\t\t4500\n";
												cout<<"  4.FILM SCANNER\t\t\t8000\n";
												cout<<"  5.PORTABLE SCANNER\t\t\t10000\n";
												cout<<"\n\n\tWhich SCANNER do you want to purchase\t";
												cin>>scan;
												if(scan==1)
												{
												asc=5000;
												}
												else if(scan==2)
												{
												asc=6000;
												}
												else if(scan==3)
												{
												asc=4500;
												}
												else if(scan==4)
												{
												asc=8000;
												}
												else if(scan==5)
												{
												asc=10000;
												}
												else if(scan==0)
												{
												goto items;
												}
												else if(scan!=1||scan!=2||scan!=3||scan!=4||p1!=5)
												{
												cout<<"\n\n\tOOPS!!!!!!!  Wrong choice\n\n";
												getch();
												goto pep;
												}
												cout<<"\n\n\tSCANNER(MAX 5):\t ";
												cin>>n;
												if(n>5)
												{
												cout<<"\n\n\tEnter Quantity Smaller than 5";
												getch();
										      goto items;
												}
												else
												apep=1000-n;
												cout<<"\n\tDO you want to purchase more(y/n)";
												cin>>yes;
												if(yes=='y')
												{
												system("clear");
												goto items;
												}
												else
												{
												system("clear");
												goto cash;
												}
									}
									if(choice==3)
									{
													den:;
													system("clear");
													cout<<"\n\n\t\t\t\tPRINTER\n\n";
													cout<<"\n     ITEMS\t\t\t\tRATE\n";
													cout<<"\n  1. HP Laser jet\t\t\t2000\n";
													cout<<"  2. DOT Matrix Printer\t\t\t500\n";
													cout<<"\n\n\tWhich PRINTER you want to purchase\t";
													cin>>p2;
													if(p2==1)
													{
													print=500;
													}
													else if(p2==2)
													{
													print=2000;
													}
													else if(p2==0)
													{
													goto items;
													}
													else if(p2!=1||p2!=2)
													{
													cout<<"\n\n\tOOPS!!!!!!!  Wrong choice\n\n";
													getch();
													goto den;
													}
													cout<<"\n\tPRINTER(MAX 5):\t ";
													cin>>o;
													if(o>5)
													{
													cout<<"\n\n\tEnter Quantity Smaller than 5";
											      goto items;
													}
													else
													aden=110-o;
													cout<<"\n\tDO you want to purchase more(y/n)";
													cin>>yes;
													if(yes=='y')
													{
													system("clear");
													goto items;
													}
													else
													{
													system("clear");
													goto cash;
													}
									}
									if(choice==4)
									{
												mun:;
												system("clear");
												cout<<"\n\n\t\t\t\tWEBCAM\n\n";
												cout<<"\n    ITEMS\t\t\t\t\tRATE\n";
												cout<<"\n  1.5 PIXEL\t\t\t\t\t1500\n";
												cout<<"  2.8 PIXEL\t\t\t\t\t6000\n";
												cout<<"  3.12 PIXEL\t\t\t\t\t12000\n";
												cout<<"\n\n\tWhich WEBCAM you want to purchase\t";
												cin>>web;
												if(web==1)
												{
												aweb=1500;
												}
												else if(web==2)
												{
												aweb=6000;
												}
												else if(web==3)
												{
												aweb=12000;
												}
												else if(web==0)
												{
												goto items;
												}
												else if(web!=1||web!=2||web!=3)
												{
												cout<<"\n\n\tOOPS!!!!!!!  Wrong choice\n\n";
												getch();
												goto mun;
												}
												cout<<"\n\n\tWEBCAM(MAX 5):\t ";
												cin>>p;
												if(p>5)
												{
												cout<<"\n\n\tEnter Quantity Smaller than 5";
												getch();
												goto items;
										 
												}
												else
												amun=1000-p;
												cout<<"\n\tDO you want to purchase more(y/n)";
												cin>>yes;
												if(yes=='y')
												{
												system("clear");
												goto items;
												}
												else
												{
												system("clear");
												goto cash;
												}
									}
									if(choice==5)
									{
												park:;
												system("clear");
												cout<<"\n\n\t\t\t\tGRAPHIC CARD\n\n";
												cout<<"\n     ITEMS\t\t\t\t\tRATE\n";
												cout<<"\n  1. 32 bit\t\t\t\t\t5000\n";
												cout<<"  2. 64 bit\t\t\t\t\t8000\n";
												cout<<"\n\n\tWhich GRAPHIC CARD you want to purchase\t";
												cin>>g1;
												if(g1==1)
												{
												graph=5000;
												}
												else if(g1==2)
												{
												graph=8000;
												}
												else if(g1==0)
												{
												goto items;
												}
												else if(g1!=1||g1!=2)
												{
												cout<<"\n\n\tOOPS!!!!!!!  Wrong choice\n\n";
												getch();
												goto park;
												}
												cout<<"\n\tGRAPHIC CARD(MAX 5):\t ";
												cin>>q;
												if(q>5)
												{
												cout<<"\n\n\tEnter Quantity Smaller than 5";
												getch();
												goto items;
												}
												else
												aperk=500-q;
												cout<<"\n\tDO you want to purchase more(y/n)";
												cin>>yes;
												if(yes=='y')
												{
												system("clear");
												goto items;
												}
												else
												{
												system("clear");
												goto cash;
												}
									}
									if(choice==6)
									{
													coco:;
													system("clear");
													cout<<"\n\n\t\t\t\tRAM\n\n";
													cout<<"\n     ITEMS\t\t\t\t\tRATE\n";
													cout<<"\n  1. 1GB\t\t\t\t\t2000\n";
													cout<<"  2. 2GB\t\t\t\t\t4000\n";
													cout<<"\n\n\tWhich RAM you want to purchase\t";
													cin>>r1;
													if(r1==1)
													{
													ram=2000;
													}
													else if(r1==2)
													{
													ram=4000;
													}
													else if(r1==0)
													{
													goto items;
													}
													else if(r1!=1||r1!=2)
													{
													cout<<"\n\n\tOOPS!!!!!!!  Wrong choice\n\n";
													getch();
													goto coco;
													}
													cout<<"\n\tRAM(MAX 2): ";
													cin>>r;
													if(r>2)
													{
													cout<<"\n\n\tEnter Quantity Smaller than 2";
													getch();
											      goto items;
													}
													else
													acoc=400-r;
													cout<<"\n\tDO you want to purchase more(y/n)";
													cin>>yes;
													if(yes=='y')
													{
													system("clear");
													goto items;
													}
													else
													{
													system("clear");
													goto cash;
													}
									}
									if(choice==7)
									{
													titan:;
													system("clear");
													cout<<"\n\n\t\t\t\tHARD DISK\n\n";
													cout<<"\n     ITEMS\t\t\t\t\tRATE\n";
													cout<<"\n  1. 20GB\t\t\t\t\t1500\n";
													cout<<"  2. 50GB\t\t\t\t\t2000\n";
													cout<<"  3. 80GB\t\t\t\t\t3000\n";
													cout<<"  4. 160GB\t\t\t\t\t5000\n";
													cout<<"  5. 320GB\t\t\t\t\t8000\n";
													cout<<"\n\n\tWhich HARD DISK you want to purchase\t";
													cin>>h1;
													if(h1==1)
													{
													hard=1500;
													}
													else if(h1==2)
													{
													hard=2000;
													}
													else if(h1==3)
													{
													hard=3000;
													}
													else if(h1==4)
													{
													hard=5000;
													}
													else if(h1==5)
													{
													hard=8000;
													}
													else if(h1==0)
													{
													goto items;
													}
													else if(h1!=1||h1!=2||h1!=3||h1!=4||h1!=5)
													{
													cout<<"\n\n\tOOPS!!!!!!!  Wrong choice\n\n";
													getch();
													goto titan;
													}
													cout<<"\n\tHARD DISK(MAX 5):\t ";
													cin>>s;
													if(s>5)
													{
													cout<<"\n\n\tEnter Quantity Smaller than 5";
													getch();
											      goto items;
													}
													else
													atit=100-s;
													cout<<"\n\tDO you want to purchase more(y/n)";
													cin>>yes;
													if(yes=='y')
													{
													system("clear");
													goto items;
													}
													else
													{
													system("clear");
													goto cash;
													}	
									}
							 		if(choice==8)
									{
													lux:;
													system("clear");
													cout<<"\n\n\t\t\t\tWINDOWS ORIGINAL CD'S\n\n";
													cout<<"\n     ITEMS\t\t\t\tRATE\n";
													cout<<"\n  1. 98\t\t\t\t\t1500\n";
													cout<<"  2. 2000\t\t\t\t2000\n";
													cout<<"  3. XP\t\t\t\t\t4000\n";
													cout<<"  4. VISTA\t\t\t\t8000\n";
													cout<<"  5. windows7\t\t\t\t11000\n";
													cout<<"\n\n\tWhich WINDOWS CD you want to purchase\t";
													cin>>w1;
													if(w1==1)
													{
													win=1500;
													}
													else if(w1==2)
													{
													win=2000;
													}
													else if(w1==3)
													{
													win=4000;
													}
													else if(w1==4)
													{
													win=8000;
													}
													else if(w1==5)
													{
													win=11000;
													}
													else if(w1==0)
													{
													goto items;
													}
													else if(w1!=1||w1!=2||w1!=3||w1!=4||w1!=5)
													{
													cout<<"\n\n\tOOPS!!!!!!!Wrong choice\n\n";
													getch();
													goto lux;
													}
													cout<<"\n\tWINDOWS ORIGINAL CD(MAX 5):\t ";
													cin>>t;
													if(t>5)
													{
													cout<<"\n\n\tEnter Quantity Smaller than 5";
													getch();
													goto items;
													}
													else
													alux=1000-t;
													cout<<"\n\tDO you want to purchase more(y/n)";
													cin>>yes;
													if(yes=='y')
													{
													system("clear");
													goto items;
													}
													else
													{
													system("clear");
													goto cash;
													}
									}
									if(choice==9)
									{
											tid:;
											system("clear");
											cout<<"\n\n\t\t\t\tANTIVIRUS\n\n";
											cout<<"\n     ITEMS\t\t\t\tRATE\n";
											cout<<"\n  1. NORTON\t\t\t\t1500\n";
											cout<<"  2. AVIRA\t\t\t\t1200\n";
											cout<<"  3. QUICKHEAL\t\t\t\t1300\n";
											cout<<"\n\n\tWhich ANTIVIRUS you want to purchase\t";
											cin>>an1;
											if(an1==1)
											{
											ant=1500;
											}
											else if(an1==2)
											{
											ant=1200;
											}
											else if(an1==3)
											{
											ant=1300;
											}
											else if(an1==0)
											{
											goto items;
											}
											else if(an1!=1||an1!=2||an1!=3)
											{
											cout<<"\n\n\tOOPS!!!!!!!Wrong choice\n\n";
											getch();
											goto tid;
											}
											cout<<"\n\tANTI VIRUS(MAX 5): ";
											cin>>u;
											if(u>5)
											{
											cout<<"\n\n\tEnter Quantity Smaller than 5";
											getch();
											goto items;
											}
											else
											atid=1000-u;
											cout<<"\n\tDO you want to purchase more(y/n)";
											cin>>yes;
											if(yes=='y')
											{
											system("clear");
											goto items;
											}
											else
											{
											system("clear");
											goto cash;
											}
									}
									if(choice==10)
									{
											ree:;
											system("clear");
											cout<<"\n\n\t\t\t\tMOUSE\n\n";
											cout<<"\n    ITEMS\t\t\t\tRATE\n";
											cout<<"\n  1.BALL MOUSE\t\t\t\t150\n";
											cout<<"  2.LASER MOUSE\t\t\t\t300\n";
											cout<<"\n\n\tWhich MOUSE do you want to purchase\t";
											cin>>mous;
											if(mous==1)
											{
											mo=150;
											}
											else if(mous==2)
											{
											mo=300;
											}
											else if(mous==0)
											{
											goto items;
											}
											else if(mous!=1||mous!=2)
											{
											cout<<"\n\n\tOOPS!!!!!!!Wrong choice\n\n";
											getch();
											goto ree;
											}
											cout<<"\n\tMOUSE(MAX 2):\t ";
											cin>>v;
											if(v>2)
											{
											cout<<"\n\n\tEnter Quantity Smaller than 2";
											getch();
											goto items;
											}
											else
											aree=300-v;
											cout<<"\n\tDO you want to purchase more(y/n)";
											cin>>yes;
											if(yes=='y')
											{
											system("clear");
											goto items;   //GO BACK TO PURCHASE LIST
											}
											else
											{
											system("clear");
											goto cash;    //TO DISPLAY BILL
											}
											
									}
									cout<<"\n\n\n";
									system("clear");
									cash:;
									cout<<"\n\n\n\n\n\n\t\t\t\t AMAXXON\n";
									cout<<"\n\n\t\t\t\t    CASH MEMO\n";
									cout<<"\n\n\n\n\n\n\n\n";
							 
									c.display();
							 
									cout<<"\n\n\n\n";
									cout<<"===============================================================================";
									cout<<"\nITEMS"            <<setw(40)<<"QUANTITY"<<setw(35)<<"PRICE(Rs.)";
									cout<<"===============================================================================";
									if(m>0)
									cout<<"\n\nPENDRIVE"            <<setw(35)<<m<<setw(28)<<"Rs."<<m*pend;
									if(n>0)
									cout<<"\n\nSCANNER"             <<setw(36)<<n<<setw(28)<<"Rs."<<n*asc;
									if(o>0)
									cout<<"\n\nPRINTER"             <<setw(36)<<o<<setw(28)<<"Rs."<<o*print;
									if(p>0)
									cout<<"\n\nWEBCAM"              <<setw(37)<<p<<setw(28)<<"Rs."<<p*aweb;
									if(q>0)
									cout<<"\n\nGRAPHIC CARD"        <<setw(31)<<q<<setw(28)<<"Rs."<<q*graph;
									if(r>0)
									cout<<"\n\nRAM"                 <<setw(40)<<r<<setw(28)<<"Rs."<<r*ram;
									if(s>0)
									cout<<"\n\nHARD DISK"           <<setw(34)<<s<<setw(28)<<"Rs."<<s*hard;
									if(t>0)
									cout<<"\n\nWINDOWS ORIGINAL CD" <<setw(24)<<t<<setw(28)<<"Rs."<<t*win;
									if(u>0)
									cout<<"\n\nANTIVIRUS"           <<setw(34)<<u<<setw(28)<<"Rs."<<u*ant;
									if(v>0)
									cout<<"\n\nMOUSE"                <<setw(38)<<v<<setw(28)<<"Rs."<<v*mo;
									e=m*pend;
									f=n*asc;
									g=o*print;
									h=p*aweb;
									k=q*graph;
									l=r*ram;
									w=s*hard;
									x=t*win;
									y=u*ant;
									z=v*mo;
									sum=e+f+g+h+k+l+w+x+y+z;     
									add=m+n+o+p+q+r+s+t+u+v;     
									cout<<"\n===============================================================================";
									cout<<"\nTOTAL:"<<setw(38)<<add<<setw(27)<<"Rs."<<sum;
									money:;
									cout<<"\n\n\n\n\t\t\tEnter the cash paid\t";
									cin>>total;
									cout<<"\n\n\n\t\t\tCASH RECIEVED :"<<total;
									if(total<sum)
									{
									cout<<"\n\n\tThe money you paid is less !!!! Please pay more money";
									getch();
									goto money;
									}
									system("clear");
									getch();
									cout<<"\n\n\n\n\n\t NO CREDIT OF THE ADDITIONAL DUTY OF";
									cout<<"\n\n\t   CUSTOMS LEVIED UNDER SECTION (5) OF";
									cout<<"\n\n\t   SECTION-3 OF THE CUSTOMS TARIFF ACT";
									cout<<"\n\n\t  1975 HAVE BEEN AVAILED/SHALL BE ADMISSABLE\n\n";
									cout<<"\n\n\n\n\n\t\tCASH RECEIVED :\t"<<total;
									cout<<"\n\n\t\tCASH AMOUNT :\t"<<sum<<"\n";
									cout<<"\n\n\t\tBALANCE RETURNED :\t"<<total-sum<<"\n";
									cout<<"\n\n\tTHANK YOU .\t\t\t\tVISIT US AGAIN\n";
									cout<<"\n\n\tTHANK YOU FOR USING OUR SERVICE\n\n";
									getch();
									goto again;
								
								}
							
								else
								{
								system("clear");
									getch();
									goto again;
								}
						 
						}


					case 2:
					 
						{	
					 
							system("clear");
							getch();
							cout<<"\n\n\n\n\n\t\t\t\tSHOP DETAILS\n\n\n";
							cout<<"\n\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n\n";
							
							
							cout<<"\t\t  #   GOODS ONCE SOLD WILL NOT BE RETURNED.            \n";
							cout<<"\t\t  #   TAKE YOUR SMART CARD WITH YOU.                             \n";
							cout<<"\t\t  #  ACCEPTABLE PAYMENT MODE-CARDS/UPI/PAYTM.              \n";
							
							cout<<"\t\t  #   FOR ANY COMPLAINT CONTACT 1800-923-456.                \n";
							cout<<"\t\t  #   20 YEARS OF EXPERIENCE.                                    \n";
							cout<<"\t\t  #   CHAIR PERSON :- MR. ABHIJEET                       \n";
							cout<<"\t\t  #   AN ISO 9001-2000 CERTIFIED COMPANY.                        \n";
							cout<<"\t\t  #   WELL QUALIFIED STAFF MEMBERS.                              \n";
							cout<<"\t\t  #   Email :- www.techtraders.com                            \n";
							cout<<"\n\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n\n";
							getch();
							// system("clear");
							goto again;

						}
					 
					case 3:
					 	{	system("clear");
							
							search();
							getch();
							goto again;
				 		}
					 
					case 4:
				 		{system("clear");
							getch();
							del();
							getch();
							goto again;
				 		}	
					case 5:
					 
						{
				 
							system("clear");
							update();
							getch();
							goto again;
				 		}
					case 6:
						{
							system("clear");
							read();
							getch();
							goto again;
						}
					 
					case 7:
					 
						{	system("clear");
							if(m>0||n>0||o>0||p>0||q>0||r>0||s>0||t>0||u>0||v>0)
							{
							cout<<"\n\t\t\tItems Avaliable in shop.\n\n\n";
							cout<<"===============================================================================";
							cout<<"\nITEMS"            <<setw(40)<<"QUANTITY";
							cout<<"\n===============================================================================";
							cout<<"\n\n\nPENDRIVE"            <<setw(37)<<abis;
							cout<<"\n\n\nSCANNER"             <<setw(38)<<apep;
							cout<<"\n\n\nPRINTER"             <<setw(38)<<aden;
							cout<<"\n\n\nWEBCAM"              <<setw(39)<<amun;
							cout<<"\n\n\nGRAPHIC CARD"        <<setw(33)<<aperk;
							cout<<"\n\n\nRAM"                 <<setw(42)<<acoc;
							cout<<"\n\n\nHARD DISK"           <<setw(35)<<atit;
							cout<<"\n\n\nWINDOWS ORIGINAL CD" <<setw(26)<<alux;
							cout<<"\n\n\nANTIVIRUS"           <<setw(36)<<atid;
							cout<<"\n\n\nMOUSE"               <<setw(40)<<aree;
							cout<<"\n*******************************************************************************";
								getch();
							getch();
							goto again;
							}
							else
							
							{
							cout<<"\n\t\t\tItems Avaliable in shop.\n\n\n";
							cout<<"===============================================================================";
							cout<<"\nITEMS"            <<setw(40)<<"QUANTITY";
							cout<<"\n===============================================================================";
							cout<<"\n\n\nPENDRIVE"             <<setw(37)<<1000;
							cout<<"\n\n\nSCANNER"              <<setw(38)<<1000;
							cout<<"\n\n\nPRINTER"        	   <<setw(37)<<110;
							cout<<"\n\n\nWEBCAM"               <<setw(39)<<1000;
							cout<<"\n\n\nGRAPHIC CARD"         <<setw(32)<<500;
							cout<<"\n\n\nRAM"                  <<setw(41)<<400;
							cout<<"\n\n\nHARD DISK"            <<setw(35)<<100;
							cout<<"\n\n\nWINDOWS ORIGINAL CD"  <<setw(26)<<1000;
							cout<<"\n\n\nANTIVIRUS"            <<setw(36)<<1000;
							cout<<"\n\n\nMOUSE"                <<setw(39)<<300;
							cout<<"\n\n*******************************************************************************";
							getch();
								getch();
							goto again;
							}
						}	
					 
					case 0:
					 
						{						
												system("clear");
												cout<<"\n\n\n\t\tARE YOU SURE TO EXIT FROM THE PROGRAM\t";
												cin>>et;
												if(et=='y')
												{
												goto ex;
												}
												else
												{
												goto again;
												}
												ex:;
												system("clear");
												cout<<" THANKS ";
												
												system("clear");
												
												cout<<" THANKS ";
												
												system("clear");
												
												cout<<" THANK YOU FOR USING THE PROJECT\n\n\n\n ";
												cout<<"HAVE A NICE DAY";
												cout<<"Press ENTER to EXIT.......\n";
												getch();
												exit(0);
						}
							

					default:
						{	 
									cout<<"OOPS!!!!!!!! Your choice is WRONG";
									getch();
									goto again;
						}
				}
	}

	 

