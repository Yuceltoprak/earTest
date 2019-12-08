#include<iostream>
#include<iomanip> //setw
#include<windows.h>
#include<time.h>

using namespace std;
/*************************
insan 20 Hz / 20kHz
kedi 100 Hz / 60kHz
fare 1 Hz / 100 kHz
kÃ¶pek 50 kHz e kadar
fil 1 Hz / 20 kHz
kuÃ¾ 100 / 29.000 Hz
balik 200 / 800 Hz
sivrisinek 1200 H / 2000 Hz
beep(frekans, milisaniye-->sÃ¼re)
**************************/

int main(int argc, char** argv)
{
	int secim;
	char devam_mi = 'e';
	cout<<"Test(insanin duyabilecegi ses)"<<setw(10) << "1" <<endl;
	cout<<"Sinek Savar"<<setw(10) << "2" <<endl;
	cout<<"Kedi Savar" <<setw(10) << "3" <<endl;
	cout<<"Kopek Savar"<<setw(10) << "4" <<endl;
	cout<<"Manuel Ayar"<<setw(10) << "5" <<endl;
	cout<<"ARTAN : "<<setw(10) << "6" <<endl;
	cin>>secim;
	
	switch(secim)
	{
		case 1:
			Beep(1000, 1000);
			break;
		case 2:
			Beep(1500, 5000);
			break;
		case 3:
			Beep(50000, 5000);
			break;
		case 4:
			Beep(30000, 5000);
			break;
		case 5:
			int sure, frekans;
			cout<<"Frequence and Time (1000 = 1sn)"<<endl;
			cin>> frekans >> sure;
			Beep(frekans, sure);  //belirtilen sure kadar bip sesi duyulur...,
			break;
		case 6: 
			for(int i=0; i<19000; i++)
			{
				Beep(i,50);
				Sleep(100);
				cout<<"Now : "<<i<<endl;
				i += 49;
			}
		default:
			cout<<"Your chose is wrong.."<<endl;
	}
	
	
	return 0;
}
