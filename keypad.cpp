#include<iostream>
#include<conio.h>

using namespace std;

void to_check(int l, string n){
	int count = 1, i, j, output1=0;
	char output[3];
	for(int i=0;i<l;i++){
		int z = (int)n[i];
		if(n[i]==n[i+1]){
			count++;
		}else{
				switch(z){
					case 50:
						if(count==1){
							output[output1] = 97;
						}else if(count==2){
							output[output1] = 98;
						}else if(count==3){
							output[output1] = 99;
						}else if(count==4){
							output[output1] = 50;
						}
						output1++;
						break;
					case 51:
						if(count==1){
							output[output1] = 100;
						}else if(count==2){
							output[output1] = 101;
						}else if(count==3){
							output[output1] = 102;
						}else if(count==4){
							output[output1] = 51;
						}
						output1++;
						break;
						case 52:
						if(count==1){
							output[output1] = 103;
						}else if(count==2){
							output[output1] = 104;
						}else if(count==3){
							output[output1] = 105;
						}else if(count==4){
							output[output1] = 52;
						}
						output1++;
						break;
						case 53:
						if(count==1){
							output[output1] = 106;
						}else if(count==2){
							output[output1] = 107;
						}else if(count==3){
							output[output1] = 108;
						}else if(count==4){
							output[output1] = 53;
						}
						output1++;
						break;
						case 54:
						if(count==1){
							output[output1] = 109;
						}else if(count==2){
							output[output1] = 110;
						}else if(count==3){
							output[output1] = 111;
						}else if(count==4){
							output[output1] = 54;
						}
						output1++;
						break;
						case 55:
						if(count==1){
							output[output1] = 112;
						}else if(count==2){
							output[output1] = 113;
						}else if(count==3){
							output[output1] = 114;
						}else if(count==4){
							output[output1] = 115;
						}else if(count==5){
							output[output1] = 55;
						}
						output1++;
						break;
						case 56:
						if(count==1){
							output[output1] = 116;
						}else if(count==2){
							output[output1] = 117;
						}else if(count==3){
							output[output1] = 118;
						}else if(count==4){
							output[output1] = 56;
						}
						output1++;
						break;
						case 57:
						if(count==1){
							output[output1] = 119;
						}else if(count==2){
							output[output1] = 120;
						}else if(count==3){
							output[output1] = 121;
						}else if(count==4){
							output[output1] = 122;
						}else if(count==5){
							output[output1] = 57;
						}
						output1++;
						break;
						case 48:
							output[output1] = 48;
								output1++;
								break;
						case 49:
							if(count==1)
							output[output1] = 49;
								output1++;
								break;
			}
			count = 1;
			
		}
	}
	for(int i=0;i<4;i++){
		cout<<output[i];
	}
}

int main(){

	string number;
	char output[4];
	int count= 0, length;
	cout<<"enter a number you of which you want alphabet: ";
	cin>>number;
	length = number.length();
	to_check(length,number);
	
	
	return 0;
}
