/* DESIGN BY 
   MUHAMMAD DANIYAL Having REG NUM BCS203034 
*/   
#include<iostream>
#include <string>
using namespace std;

//Function ProtoType's
void Drinks_menu();
void Refreshment_menu();
void front_menu();
void sweets_menu();
void Delete_Product();
void Generate_Bill();
void Reset();
//Global Variable's
int choice;
int total=0;
int quantity=0;
int i=0;
int x=0;
int y=0;

//array 
string arr[50];
int p_arr[50];
int q_arr[50];

void Refreshment_menu()
{   
    int count;
    choice=0;
	cout<<"\t\t\t -----------------------------------------------------\n";
	cout<<"\t\t\t|       WELL COME TO Daniyal & Co Vending Machine     |\n";
    cout<<"\t\t\t -----------------------------------------------------\n\n";
	cout<<"\t\t\t\t1-Biryani\t2-Pulao\t\t3-Karahi\n";
	cout<<"\t\t\t\t180RS  \t\t350RS\t\t750RS\n\n";
	
	cout<<"\t\t\t\t4-Samosa \t5-Roll Pratha\t6-Frise\n";
	cout<<"\t\t\t\t100RS  \t\t150RS\t\t130RS\n\n";
	
	cout<<"\t\t\t\t7-ChanChat\t8-Haleem\t9-Chana\n";
	cout<<"\t\t\t\t100RS  \t\t240RS\t\t160RS\n\n";
	cout<<"\t\t\t\t\t    0-Front Menu\n\n";
	cout<<"\t\t\t -----------------------------------------------------\n";
	cout<<"\t\t\t                Total Running Sale "<<total<<"\n";
    cout<<"\t\t\t -----------------------------------------------------\n";
	do{
	cout<<"\t\t\t\t\t     Choice  :";
	cin>>choice;
	switch(choice)
	{
		case 1: cout<<"\t\t\t\t\t     Quantity:";
	            cin>>quantity;
	            arr[i]="Biryani     ";
	            p_arr[x]=180;
	            q_arr[y]=quantity;
		        total=total+(quantity*180);
		        i++;
		        x++;
		        y++;
		         break;
		case 2: cout<<"\t\t\t\t\t     Quantity:";
	            cin>>quantity;
	            arr[i]="Pulao       ";
	            p_arr[x]=350;
	            q_arr[y]=quantity;
	            total=total+(quantity*350);
	            i++;
	            x++;
	            y++;
		         break;
		case 3: cout<<"\t\t\t\t\t     Quantity:";
	            cin>>quantity;
	            arr[i]="Karahi      ";
	            p_arr[x]=750;
	            q_arr[y]=quantity;
	            total=total+(quantity*750);
		        i++;
		        x++;
		        y++;
		         break;
		case 4: cout<<"\t\t\t\t\t     Quantity:";
	            cin>>quantity;
	            arr[i]="Samosa      ";
	            p_arr[x]=100;
	            q_arr[y]=quantity;
		        total=total+(quantity*100); 
		        i++;
		        x++;
		        y++;
		         break;
		case 5: cout<<"\t\t\t\t\t     Quantity:";
	            cin>>quantity;
	            arr[i]="Roll Pratha ";
	            p_arr[x]=150;
				q_arr[y]=quantity;
				total=total+(quantity*150); 
				i++;
				x++;
				y++;
		         break;
		case 6: cout<<"\t\t\t\t\t     Quantity:";
	            cin>>quantity;
	            arr[i]="Fries       ";
	            p_arr[x]=130;
	            q_arr[y]=quantity;
				total=total+(quantity*130); 
				i++;
				x++;
				y++;
		         break;
		case 7: cout<<"\t\t\t\t\t     Quantity:";
	            cin>>quantity;
	            arr[i]="ChanaChat   ";
	            p_arr[x]=100;
	            q_arr[y]=quantity;
				total=total+(quantity*100); 
		        i++;
		        x++;
		        y++;
				 break;		 
		case 8: cout<<"\t\t\t\t\t     Quantity:";
	            cin>>quantity;
	            arr[i]="Haleem      ";
	            p_arr[x]=240;
	            q_arr[y]=quantity;
				total=total+(quantity*240); 
		        i++;
		        x++;
		        y++;
				break;	
		case 9: cout<<"\t\t\t\t\t     Quantity:";
	            cin>>quantity;
	            arr[i]="Chana       ";
	            p_arr[x]=160;
	            q_arr[y]=quantity;
	            total=total+(quantity*160); 
		        i++;
		        x++;
		        y++;
				break;	 		 	 		 		 		 		          
	}
  }
  
  while(choice!=0);
  front_menu();	  	  
}

void Drinks_menu()
{
	cout<<"\t\t\t -----------------------------------------------------\n";
	cout<<"\t\t\t|       WELL COME TO Daniyal & Co Vending Machine     |\n";
    cout<<"\t\t\t -----------------------------------------------------\n\n";
	cout<<"\t\t\t\t1-Banana Shake\t2-Mango Shake\t3-Sprite\n";
	cout<<"\t\t\t\t140RS  \t\t130RS\t\t100RS\n\n";
	
	cout<<"\t\t\t\t4-Pepsi\t\t5-Orange JUICE\t6-String\n";
	cout<<"\t\t\t\t100RS  \t\t200RS\t\t100RS\n\n";
	
	cout<<"\t\t\t\t7-Kashmiri Tea\t8-Coffe\t\t9-Tea\n";
	cout<<"\t\t\t\t100RS  \t\t110RS\t\t100RS\n\n";
	cout<<"\t\t\t\t\t      0-Front Menu\n\n";
	cout<<"\t\t\t -----------------------------------------------------\n";
	cout<<"\t\t\t                Total Running Sale "<<total<<"\n";
    cout<<"\t\t\t -----------------------------------------------------\n";
	do{
	cout<<"\t\t\t\t\t       Choice  :";
	cin>>choice;
	switch(choice)
	{
		case 1: cout<<"\t\t\t\t\t       Quantity:";
	            cin>>quantity;
	            arr[i]="Banana shake";
	            p_arr[x]=140;
	            q_arr[y]=quantity;
	            total=total+(quantity*140);
				i++;
				x++;
				y++; 
		        break;
		case 2: cout<<"\t\t\t\t\t       Quantity:";
	            cin>>quantity;
	            arr[i]="Mango Shake ";
	            p_arr[x]=130;
	            q_arr[y]=quantity;
	            total=total+(quantity*130);
				i++;
				x++;
				y++;		         
		        break;
		case 3: cout<<"\t\t\t\t\t       Quantity:";
	            cin>>quantity;
	            arr[i]="Sprite      ";
	            p_arr[x]=100;
	            q_arr[y]=quantity;
	            total=total+(quantity*100); 
		        i++;
				x++;
				y++;
				break;
		case 4: cout<<"\t\t\t\t\t       Quantity:";
	            cin>>quantity;
	            arr[i]="Pepsi       ";
	            p_arr[x]=100;
	            q_arr[y]=quantity;
	            total=total+(quantity*100);
				i++; 
				x++;
				y++;
		        break;
		case 5: cout<<"\t\t\t\t\t       Quantity:";
	            cin>>quantity;
				arr[i]="Orange Juice";
				p_arr[x]=200;
				q_arr[y]=quantity;
	            total=total+(quantity*200); 
		        i++;
				x++;
				y++;
				break;
		case 6: cout<<"\t\t\t\t\t       Quantity:";
	            cin>>quantity;
	            arr[i]="String      ";
				p_arr[x]=100;
				q_arr[y]=quantity;
				total=total+(quantity*100);
				i++;
				x++;
				y++;
		        break;
		case 7: cout<<"\t\t\t\t\t       Quantity:";
	            cin>>quantity;
	            arr[i]="Kashmiri Tea";
				p_arr[x]=100;
				q_arr[y]=quantity;
	            total=total+(quantity*100); 
		        i++;
				x++;
				y++;
				break;		 
		case 8: cout<<"\t\t\t\t\t       Quantity:";
	            cin>>quantity;
				arr[i]="Coffe       ";
				p_arr[x]=110;
				q_arr[y]=quantity;
	            total=total+(quantity*110); 
		        i++;
				x++;
				y++;
				break;	
		case 9: cout<<"\t\t\t\t\t       Quantity:";
	            cin>>quantity;
				arr[i]="Tea         ";
				p_arr[x]=100;
				q_arr[y]=quantity;				
	            total=total+(quantity*100); 
		        i++;
				x++;
				y++;
				break;	 		 	 		 		 		 		      
	}
  }
  while(choice!=0);
  front_menu();	
}

void Sweets_menu()
{
	cout<<"\t\t\t -----------------------------------------------------\n";
	cout<<"\t\t\t|       WELL COME TO Daniyal & Co Vending Machine     |\n";
    cout<<"\t\t\t -----------------------------------------------------\n\n";
	cout<<"\t\t\t\t1-Kheer\t\t2-Zarda\t\t3-Faluda\n";
	cout<<"\t\t\t\t250RS  \t\t350RS\t\t330RS\n\n";
	
	cout<<"\t\t\t\t4-Rasmalai\t5-Fruit Custard\t\t\n";
	cout<<"\t\t\t\t280RS  \t\t250RS\t\t\n\n";
	cout<<"\t\t\t\t\t     0-Front Menu\n\n";
	cout<<"\t\t\t -----------------------------------------------------\n";
	cout<<"\t\t\t                Total Running Sale "<<total<<"\n";
    cout<<"\t\t\t -----------------------------------------------------\n";
	do{
	cout<<"\t\t\t\t\t       Choice  :";
	cin>>choice;
	switch(choice)
	{
		case 1: cout<<"\t\t\t\t\t       Quantity:";
	            cin>>quantity;
	            arr[i]="Kheer       ";
				p_arr[x]=250;
				q_arr[y]=quantity;
	            total=total+(quantity*250); 
		        i++;
				x++;
				y++;
				break;
		case 2: cout<<"\t\t\t\t\t       Quantity:";
	            cin>>quantity;
	            arr[i]="zarda       ";
				p_arr[x]=350;
				q_arr[y]=quantity;
	            total=total+(quantity*350);		         
		        i++;
				x++;
				y++;
				break;
		case 3: cout<<"\t\t\t\t\t       Quantity:";
	            cin>>quantity;
	            arr[i]="Faluda      ";
				p_arr[x]=330;
				q_arr[y]=quantity;
	            total=total+(quantity*330); 
		        i++;
				x++;
				y++;
				break;
		case 4: cout<<"\t\t\t\t\t       Quantity:";
	            cin>>quantity;
	            arr[i]="Rasmalai    ";   
				p_arr[x]=280;
				q_arr[y]=quantity;
	           	total=total+(quantity*280); 
		        i++;
				x++;
				y++;
				break;
		case 5: cout<<"\t\t\t\t\t       Quantity:";
	            cin>>quantity;
	            arr[i]="Fruit Custrd";            
				p_arr[x]=250;
				q_arr[y]=quantity;
				total=total+(quantity*250); 
		        i++;
				x++;
				y++;
				break;	 		 	 		 		 		 		          
	}
  }
  while(choice!=0);
  front_menu();
}

void Bill()
{
	cout<<"total = "<<total;
}

void Delete_Product()
{
	cout<<"\t\t\t -----------------------------------------------------\n";
	cout<<"\t\t\t|       WELL COME TO Daniyal & Co Vending Machine     |\n";
    cout<<"\t\t\t -----------------------------------------------------\n\n";
    cout<<"\t\t\t                     Item Name                        \n\n";
	for(int j=0;j<i;j++)
	{
		cout<<"\t\t\t                     "<<j+1<<"-"<<arr[j]<<endl;
	}
	 cout<<"\n\t\t\t                    0-Front Menu                        \n\n";
	 cout<<"\t\t\t                     Choice:";
	 cin>>choice;
	 switch(choice)
	 {
	 	case 1: total=total-(quantity*p_arr[0]);
	            q_arr[0]=q_arr[y-1];
		        p_arr[0]=p_arr[x-1];
	 	        arr[0]=arr[i-1];
	 	        i--;
	 	        x--;
	 	        y--;
	 	        break;
	   case 2:  total=total-(quantity*p_arr[1]);
	            q_arr[1]=q_arr[y-1];
		        p_arr[1]=p_arr[x-1];
	 	        arr[1]=arr[i-1];
	 	        i--;
	 	        x--; 
				y--;        
	 	        break;
	 	        
	   case 3:  total=total-(quantity*p_arr[2]);
	            q_arr[2]=q_arr[y-1];
		        p_arr[2]=p_arr[x-1];
	 	        arr[2]=arr[i-1];
	 	        i--;
	 	        x--;
				y--;         
	 	        break;
	 	        
	   case 4:  total=total-(quantity*p_arr[3]);
	            q_arr[3]=q_arr[y-1];
		        p_arr[3]=p_arr[x-1];
	 	        arr[3]=arr[i-1];
	 	        i--;
	 	        x--; 
				y--;       
	 	        break;
	 	        
	   case 5:  total=total-(quantity*p_arr[4]);
	            q_arr[4]=q_arr[y-1];
		        p_arr[4]=p_arr[x-1];
	 	        arr[4]=arr[i-1];
	 	        i--;
	 	        x--; 
				y--;        
	 	        break;
	 	        
	   case 6:  total=total-(quantity*p_arr[5]);
	            q_arr[5]=q_arr[y-1];
		        p_arr[5]=p_arr[x-1];
	 	        arr[5]=arr[i-1];
	 	        i--;
	 	        x--; 
				y--;        
	 	        break;
	 	        
	   case 7:  total=total-(quantity*p_arr[6]);
	            q_arr[6]=q_arr[y-1];
	            p_arr[6]=p_arr[x-1];
	 	        arr[6]=arr[i-1];
	 	        i--;
	 	        x--;
				y--;         
	 	        break;
	 	        
	   case 8:  total=total-(quantity*p_arr[7]);
	            q_arr[7]=q_arr[y-1];
		        p_arr[7]=p_arr[x-1];
	 	        arr[7]=arr[i-1];
	 	        i--;
	 	        x--;
				y--;         
	 	        break;
	 	        
	   case 9:  total=total-(quantity*p_arr[8]);
	            q_arr[8]=q_arr[y-1];
		        p_arr[8]=p_arr[x-1];
	 	        arr[8]=arr[i-1];
	 	        i--;
	 	        x--; 
				y--;        
	 	        break;
	 	        
	   case 10: total=total-(quantity*p_arr[9]);
	            q_arr[16]=q_arr[y-1];
		        p_arr[9]=p_arr[x-1];
	 	        arr[9]=arr[i-1];
	 	        i--;
	 	        x--;
				y--;        
	 	        break;
	 	        
	   case 11: total=total-(quantity*p_arr[10]);	   
	            q_arr[16]=q_arr[y-1];
		        p_arr[10]=p_arr[x-1];
	 	        arr[10]=arr[i-1];
	 	        i--;
	 	        x--;
				y--;        
	 	        break;
	 	        
	   case 12: total=total-(quantity*p_arr[11]);
	            q_arr[11]=q_arr[y-1];
		        p_arr[11]=p_arr[x-1];
	 	        arr[11]=arr[i-1];
	 	        i--;
	 	        x--; 
				y--;        
	 	        break;
	 	        
	   case 13: total=total-(quantity*p_arr[12]);
	            q_arr[12]=q_arr[y-1];
		        p_arr[12]=p_arr[x-1];
	 	        arr[12]=arr[i-1];
	 	        i--;
	 	        x--;
				y--;         
	 	        break;
	 	        
	   case 14: total=total-(quantity*p_arr[13]);
	            q_arr[13]=q_arr[y-1];
		        p_arr[13]=p_arr[x-1];
	 	        arr[13]=arr[i-1];
	 	        i--;
	 	        x--; 
				y--;        
	 	        break;
	 	        
	   case 15: total=total-(quantity*p_arr[14]);
	            q_arr[14]=q_arr[y-1];
		        p_arr[14]=p_arr[x-1];
	 	        arr[14]=arr[i-1];
	 	        i--;
	 	        x--; 
				y--;        
	 	        break;
	 	        
	   case 16: total=total-(quantity*p_arr[15]);
	            q_arr[15]=q_arr[y-1];
		        p_arr[15]=p_arr[x-1];
	 	        arr[15]=arr[i-1];
	 	        i--;
	 	        x--;
				y--;         
	 	        break;
	 	        
	   case 17: total=total-(quantity*p_arr[16]);
	            q_arr[16]=q_arr[y-1];
		        p_arr[16]=p_arr[x-1];
	 	        arr[16]=arr[i-1];
	 	        i--;
	 	        x--; 
				y--;        
	 	        break;
	 default :	 cout<<"\n\n\n\n\n\t\t\t\t\t\t        OPPS !\n\t\t\t\t\t\tSome thing goes Wrong\n\n\n\n";		 	 	        
	 }
	 
	front_menu();
}

void Generate_Bill()
{
	cin.ignore();
	string name;
	cout<<"\t\t\t Please Enter Your Good Name : ";
	getline(cin,name);
	system("cls");
	cout<<"\t\t\t ---------------------------------------------------------------  \n";
	cout<<"\t\t\t|                         Vending Receipt                         |\n";
    cout<<"\t\t\t| --------------------------------------------------------------- |\n";
    cout<<"\t\t\t|     Item Name        Quantity        S.U.Price       T.Price    |\n";
    cout<<"\t\t\t| --------------------------------------------------------------- |\n";
    for(int k=0; k<i; k++)
    {
    cout<<"\t\t\t      "<<arr[k]<<"     "<<q_arr[k]<<"               "<<p_arr[k]<<"             "<<q_arr[k]*p_arr[k]<<endl;	
    }
    cout<<"\n\t\t\t        Total Bill    : "<<total<<endl;
    cout<<"\t\t\t        Customer Name : "<<name<<endl;
    cout<<"\t\t\t        Assigner Name : "<<"Muhammad Daniyl"<<endl<<endl;
	cout<<"\t\t\t -----------------------------------------------------------------  \n";
	cout<<"\t\t\t|                Thanks For Visting at Daniyal & Co               |"<<endl;
	cout<<"\t\t\t ----------------------------------------------------------------- \n";
      

}

void Reset()
{
	int pass=203034;
	int pass2;
	cout<<"\t\t\t -----------------------------------------------------\n";
	cout<<"\t\t\t|       WELL COME TO Daniyal & Co Vending Machine     |\n";
    cout<<"\t\t\t -----------------------------------------------------\n\n";
    cout<<"\t\t\t            Enter Password To Reset Machine ";
    cin>>pass2;
	if(pass==pass2)
	{
    total=0;
    quantity=0;
    i=0;
    x=0;
    y=0;
    for(int p=0; p<i; p++)
    {
    arr[i]="NULL";
    p_arr[p]=0;
    q_arr[p]=0;
    }
    cout<<"\t\t\t              Machine Sucessfully Reset                 \n";
	cout<<"\t\t\t             Press 0 to Go back to Menu: "; 
	cin>>choice;
	if(choice==0)
	front_menu();
    }
    
    else
    {
    cout<<"\t\t\t                   Wrong Password                    \n";
	cout<<"\t\t\t            Press 0 to Go back to Menu: "; 
	cin>>choice;
	if(choice==0)
	front_menu();	
	}

}



void front_menu()
{  
	system("cls");
	cout<<"\n\n\n";
	cout<<"\t\t\t -----------------------------------------------------\n";
	cout<<"\t\t\t|       WELL COME TO Daniyal & Co Vending Machine     |\n";
    cout<<"\t\t\t -----------------------------------------------------\n\n";
    cout<<"\t\t\t|                                                     |\n";
    cout<<"\t\t\t|         Select Option According your Desire         |\n"; 
    cout<<"\t\t\t|                1-Refreshment                        |\n";
    cout<<"\t\t\t|                2-Drinks                             |\n";
    cout<<"\t\t\t|                3-Sweets                             |\n";
    cout<<"\t\t\t|                                4-Generate Bill      |\n";
    cout<<"\t\t\t|                                5-Delete   Prod      |\n";
    cout<<"\t\t\t -----------------------------------------------------\n";
    cout<<"\t\t\t                Total Running Sale "<<total<<"\n";
    cout<<"\t\t\t -----------------------------------------------------\n";
    cout<<"\t\t\t          7- For Configuration Only For Suplier       \n";
    cout<<"\t\t\t ----------------------------------------------------- \n";
    goto x;
    y:
    cin>>choice;
    goto z;
    x:
    cout<<"\t\t\t\t\t      Choice:";
    goto y;
    z:
    cout<<"\n";	
    system("cls");
    switch(choice)
    {
    	case 1: Refreshment_menu();   
		            break;
		case 2: Drinks_menu();  
		            break;
		case 3: Sweets_menu();  
		            break;
		case 4: Generate_Bill();
		            break;            
		case 5: Delete_Product();
		            break;
		case 7: Reset();
		            break;			            
	  default :	 cout<<"\n\n\n\n\n\t\t\t\t\t\t        OPPS !\n\t\t\t\t\t\tSome thing goes Wrong\n\n\n\n";
	}
	
}

int main()
{    
  	system("color 7D");
  	cout<<"\n\n\n";
    front_menu();	
	return 0;
}