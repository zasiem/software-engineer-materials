#include<iostream> //input output di cpp
#include<math.h>
#include<string.h>

using namespace std; //tidak menuliskan 'std' lagi

void variable(){ //method/function
	int nilai;
	string nama;
	bool isEmpty;
	char a;
	double desimal;
	
	cin>>nama; //next() di java
	cout<<"hello, "<<nama<<endl;
	getline(cin, nama); //nextLine() di java
	cout<<"hello, you are "<<nama;
}

void conditional(){ //function if, else, switch
		
	int nilai = 100;
	
	if(nilai < 100){
		cout<<"kurang dari 100";
	}else if(nilai > 100){
		cout<<"lebih 100";
	}else{
		cout<<"sama dengan 100";
	}
	
	cout<<endl;
	cout<<"\n";
	
	switch(nilai){
		case 100:
			cout<<"ini 100";
			break;
		case 200:
			cout<<"ini 200";
			break;
		default:
			cout<<"ini default";
	}
}

void looping(){
		
	int i,j,k;
	
	for(i = 0;i < 10;i++){
		cout<<i<<" ";
	}
	
	cout<<endl;
	
	j = 100;
	while(j > 50){
		cout<<j<<" ";
		j=j-20;
	}
}

int main(){
	cout<<"hello world"<<endl;
	//variable(); //eksekusi method/function
	//conditional();
	//looping();
	
	//array
	
	int banyak,i; //deklarasi variable
	
	cin>>banyak; //input n ( banyaknya )
	int kode[banyak]; //mendeklarasikan array
	
	for(i = 0;i < banyak; i++){ //perulangan input
		cin>>kode[i];
	}
	
	for(i = 0;i < banyak; i++){ //perulangan output
		cout<<kode[i]<<" ";
	}
	
	
}



