#include<iostream>
#include"q1.h";
#include<fstream>
#include<string>
using namespace std;

void readDataFromFile( githubuser *&users, string filepath) ;
void setEduBckGrnd(githubuser &user);
void print(githubuser &user);
void remove(githubuser &user);
void backup(githubuser *originalArry, githubuser *backupArry, int userCount);


int main()
{int m=0;
int size=0;
	githubuser *user;
	githubuser *backupArry;
	readDataFromFile(user,"input.txt");
	while(m!=-1)
{	cout<<"enter 1 to set education background"<<endl;
	cout<<"enter 2 to print education background"<<endl;
	cout<<"enter 3 to remove education background"<<endl;
	cout<<"enter 4 to create a backup"<<endl;
	cout<<"enter -1 to exit the program"<<endl;
	cin>>m;
	if(m=1)
		setEduBckGrnd;
	else if (m=2)
		print;
	else if(m=3)
		remove();
	else if(m=4)
		backup(user,backupArry,size);


	}

	delete[]user;
	delete[]backupArry;
	user=nullptr;
	backupArry=nullptr;

	return 0;



}
	
void readDataFromFile( githubuser *&user, string filepath) 

{
	int size;
	fstream fin;
	fin.open("file.txt");
	fin>>size;
		
	user=new githubuser[size];
	for(int i=0;i<size;i++)
	{
		fin>>user[i].firstname;
		fin>>user[i].username;
		fin>>user[i].email;
		fin>>user[i].filecount;
		user[i].githubfolders=new string[user[i].filecount];
		
		for(int k=0;k<user[i].filecount;k++)
		{
		fin>>user[i].githubfolders[k];

		}
	}
}
void setEduBckGrnd(githubuser &user)
{
	user.institute_name=nullptr;
	user.qual_lvl=nullptr;
	cout<<user.firstname<<"enter your institute name"<<endl;
	cin>>*user.institute_name;
	cout<<user.firstname<<"enter youreducation qualification"<<endl;
	cin>>*user.qual_lvl;
	
	
}
void print(githubuser &user)
{
	
	cout<<user.firstname;
		cout<<user.username;
		cout<<user.email;
		cout<<user.filecount;
		user.githubfolders=new string[user.filecount];
		
		for(int k=0;k<user.filecount;k++)
		{
		cout<<user.githubfolders[k];

		}
		if(user.institute_name!=nullptr)
			{
				cout<<user.qual_lvl;
		cout<<user.institute_name;
		

	
}

	void remove(githubuser &user)
	{
		user.institute_name=nullptr;
	    user.qual_lvl=nullptr;
	}
	


	void backup(githubuser &originalArry, githubuser &backupArry, int userCount)
	{
		backup= new githubuser[userCount];
		for(int i=0;i<userCount;i++)
	{
		backupArry[i].firstname=originalArry[i].firstname;
		backupArry[i].username=originalArry[i].username;
		backupArry[i].email=originalArry[i].email;
		backupArry[i].filecount=originalArry[i].filecount;
		backupArry[i].githubuser=new string[backup[i].filecount];

		for(int k=0;k<backup[i].filecount;k++)
			{
				backupArry[i].githubfolders[k]=originalArry[i].githubuser[k];
		}

		backupArry[i].institute_name=originalArry[i].institute_name;
		backupArry[i].qual_lvl=originalArry[i].qual_lvl;

		}


