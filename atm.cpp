//Name:priyanka udhalay
//roll no:56
//implement a menu given program for banking atm transaction

#include<iostream>
#include<stdlib.h>
int a = 1234,deposit,withdrawl;
int bal = 50000;
int main()
{
int ch;
int e,i;
int attempt=3;
std::cout<<"welcome to the atm\n";
std::cout<<"enter your 4 digit pin:\n";
std::cin>>e;
while(attempt>0)
{
if(e==a)
{
std::cout<<"authentication successfull\n";
}
else
{
std::cout<<"incorrect pin entered choice3%d attempts remaining\n";
return 1;
}
while(ch!=4)
{
std::cout<<"choice option for transactions:-\n";
std::cout<<"==========================\n";
std::cout<<"1:withdrawl money\n";
std::cout<<"2:deposit money\n";
std::cout<<"3:check balance \n";
std::cout<<"4:exit\n";
std::cout<<"==============";
std::cin>>ch;
switch(ch)
{
case 1 :
std::cout<<"\n enter the amount to be withdrawl\n";
std::cin>> withdrawl;


bal=bal-withdrawl;


break;
case 2 :
std::cout<<"\nenter the amount to be deposit\n";
std::cin>>deposit;
bal = bal + deposit;

break;
case 3 :
std::cout<<"availble balancce is:\n";
std::cout<< bal;
break;
case 4 : exit(0);
break;
return 0;
}
}
}
}
