/*
Project for Internshala TA Internship
Created By : Anurag Mishra
Created using Virtual Studio Code.

*/

#include<bits/stdc++.h>
#include <iostream>
#include <fstream>
#include <cstdlib> // for system
#include <vector>
#include <string> //toupper
//#include<conio.h>
//#include<windows.h>
using namespace std;
#define pb push_back
int main(){
    string name;
cout<<"\n\n\t\t********************************************************************************************\n"<<endl;
cout<<"\t\tThis is a quiz app."<<endl;
cout<<"\t\tYou will be given 10 questions on various categories.\n";
cout<<"\t\tYou will also be given 4 options for every question.\n";
cout<<"\t\tYou have to write a/b/c/d (in any case A or a) for each question.";
cout<<"\n\n\t\t********************************************************************************************\n"<<endl;
cout<<"Enter your name : ";
getline(cin,name);
system("cls");
cout<<"You are good to go now, All the very best!!"<<endl;
Retry:
cout<<"Press S to start."<<endl;
int a[30]={0};
string category;
string question;
string answer;
string options;
char user_input;
int gk=0;
int sports=0;
int music=0;
int number_of_questions=0;
int marks=0;
string cat[10];
string ans[10];
int mark[10];
string response[10];
char cc;
cin>>cc;
cc=toupper(cc);

if(cc!='S')
goto Retry;
else{
system("cls");
char hold;
while(number_of_questions<10){
    int line=0;
int n=rand()%30;
if(a[n]==0){
    a[n]=1;
    ifstream file;
    file.open("questions.txt");
    while(n!=line){
                    getline(file,category);
                    getline(file,question);
                    getline(file,options);
					getline(file,answer);
					line++;
    }

                    getline(file,category);
                    getline(file,question);
                    getline(file,options);
					getline(file,answer);

                    if(category=="MUSIC"){
                        cat[number_of_questions]="MUSIC";
                    }
                    else if(category=="GK"){
                        cat[number_of_questions]="GK";
                    }
                    else{
                        cat[number_of_questions]="SPORTS";
                    }
                    cout<<"Question Category: "<<category<<"\n"<<"Question Number "<<number_of_questions +1<<" : ";
                    cout<<question<<endl;
                    cout<<options<<endl;
                    cin>>user_input;
                    
                    user_input = toupper(user_input);
                    response[number_of_questions]=user_input;
                     ans[number_of_questions]=answer[0];

                    if(user_input==answer[0]){
                         if(category=="MUSIC"){
                        music++;
                    }
                    else if(category=="GK"){
                        gk++;
                       
                    }
                    else{
                        sports++;
                       
                    }
                         marks+=1;
					     mark[number_of_questions]=1;


				}
				else{
                    mark[number_of_questions]=0;
				}
			number_of_questions++;
			}
}
}
cout<<endl;
char ch,ch1,ch2;
 cout<<"Congratulations "<< name <<". You have completed the quiz"<<endl;
 cout<<"You have got "<<marks<<" correct out of 10 questions.\n"<<endl;
 cout<<"Here are your answers ...\n"<<endl;

 for(int i=0;i<10;i++){
    cout<<"Question Category: "<<cat[i]<<endl;
cout<<"Question number: "<<i+1<<endl;
cout<<"Correct Answer: "<<ans[i]<<endl;
cout<<"Your Answer: "<<response[i]<<endl;
cout<<"Marks Awarded: "<<mark[i]<<endl;
cout<<endl;
 }
 
 cout<<"Press any key for Next ..."<<endl;

 cin>>(ch);
 cout<<"\n\nCategory Wise Marks ..."<<endl;
 cout<<"GK : "<<gk<<endl;
 cout<<"Sports : "<<sports<<endl;
 cout<<"music : "<<music<<endl;
   cout<<"\nPress any key for Next ..."<<endl;
 
 cin>>(ch1);
 cout<<"\n\nYour Final Total Score: "<< marks <<" out of 10"<<endl;
    cout<<"Press any to go to main menu."<<endl;
 
 cin>>(ch2);

}