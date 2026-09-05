#include<iostream>
using namespace std;

void inputslaes(int &x,int sales[]){
	cout<<"Enter the sales for months :";
	cin>>x;
	for(int i=0; i<x; i++){
		cout<<"Enter the amount month "<<i<<" : ";
		cin>>sales[i];
	}
}

void display(int x, int sales[]){
	cout<<"months amounts :";
	for(int i=0;i<x; i++){
		cout<<sales[i]<<" ";
	}
}

double average(int x,int sales[]){
	double sum=0;
	double avg=0;
	cout<<"\nAverage of sales :";
	for(int i=0; i<x; i++){
		sum+=sales[i];
	}
	avg=sum/x;
	return avg;
}


void performance(double avg,int sales[]){
	

cout<<"\nPerformance :";
if(avg>=80){
	cout<<"Excellent ";
}
else if(avg>=60){
	cout<<"Good";
}
else if(avg>=40){
	cout<<"Satisfactory ";
}
else{
	cout<<"Poor ";
}
}

void compare(int x,int sales[]){
	int highest=sales[0];
	int lowest=sales[0];
	
	for(int i=0; i<x; i++){
	
		if(sales[i]>highest){
			highest=sales[i];
		}
		if(sales[i]<lowest){
			lowest=sales[i];
		}
	}
	cout<<"\nHighest :"<<highest<<endl;
	cout<<"Lowest :"<<lowest<<endl;
}

void growth(int x,int sales[]){
	int grow=0;
	double avg;
	for(int i=0; i<x; i++){
		if(sales[i]>avg){
			grow++;
		}
	}
	cout<<"\nGrowth sales :"<<grow;
}



int main(){
	int x,sales[100],m;
	inputslaes(x,sales);
	display(x,sales);
	cout<<average(x,sales);
	performance(x,sales);
	compare(x,sales);
	growth(x,sales);
}