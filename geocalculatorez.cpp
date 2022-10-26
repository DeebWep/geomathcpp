#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <cmath>
using namespace std;

class geometriya {
	public:
		const double pi = 3.14;
		double cevresaheR(int r)
		{
			double answer = pi*r*r;
			return answer;
		}
		double cevresaheD(int d)				
		{
			double answer = pi*(d/2)*(d/2);
			return answer;
		}		
		double cevreuzunluqR(int r)
		{
			double answer = pi*2*r;
			return answer;	
		}		
		double cevreuzunluqD(int d)
		{
			double answer = pi * d;
			return answer;
		}
		long duzbucaqlisahe(int a , int b)
		{
			long answer = a*b;
			return answer;
		}
		long kvadratsahe(int a)
		{
			long  answer = a *a;
			return answer;
		}
		long duzbucaqliperimetr(int a , int b)
		{
			long answer = 2*(a+b);
			return answer;
		}
		long kvadratperimetr(int a)
		{
			long answer = a*4;
			return answer;
		}
};

int main(){
	int n;
	cout<<"\t\t\t\t\t>>>GEOMETRIK HESABLAYICI PROGRAM<<<"<<endl;
	cout<<"GEOMETRIK HESABLAMA APARMAQ UCUN BIR FIQURU QARSISINDAKI REQEMI YAZMAQLA SECIN:\n1-->Cevre\t2-->Kvadrat\t3-->Duzbucaqli\n";
	cout<<"Seciminiz:";
	cin>>n;
	switch(n){
		case 1:
		{
			int nn;
			cout<<endl;
			cout<<"CEVRE UZERINDE ETMEK ISTEDIYINIZ EMELIYYATI QARSISINDAKI REQEMI YAZMAQLA SECIN:\n1-->Cevrenin Sahesi\t2-->Cevrenin Uzunlugu\n";
			cout<<"Seciminiz:";
			cin>>nn;
			switch(nn){
				case 1:
				{
					int nnn;
					cout<<endl;
					cout<<"SAHENI HESABLAMAQ UCUN RADIUS VE YA DIAMETR YAZACAGINIZI QARSISINDAKI REQEMI YAZMAQLA SECIN:\n1-->Radiusla\t2-->Diametrle\n";
					cout<<"Seciminiz:";
					cin>>nnn;		
					if(nnn==1){
						cout<<endl;
						cout<<"CEVRENIN RADIUSUNU DAXIL EDIN:";
						int radius;
						cin>>radius;
						cout<<endl;
						cout<<"CEVRENIZIN SAHESI---------->"<<geometriya().cevresaheR(radius)<<"sm^2";
					}			
					if(nnn==2){
						cout<<endl;
						cout<<"CEVRENIN DIAMETRINI DAXIL EDIN:";
						int diametr;
						cin>>diametr;
						cout<<endl;
						cout<<"CEVRENIZIN SAHESI---------->"<<geometriya().cevresaheD(diametr)<<"sm^2";
					}
					break;
				}
				case 2:
				{
					int nnn;
					cout<<endl;
					cout<<"UZUNLUGU HESABLAMAQ UCUN RADIUS VE YA DIAMETR YAZDACAGINIZI QARSISINDAKI REQEMI YAZMAQLA SECIN:\n1-->Radiusla\t2-->Diametrle\n";
					cout<<"Seciminiz:";
					cin>>nnn;		
					if(nnn==1){
						cout<<endl;
						cout<<"CEVRENIN RADIUSUNU DAXIL EDIN:";
						int radius;
						cin>>radius;
						cout<<endl;
						cout<<"CEVRENIZIN UZUNLUGU---------->"<<geometriya().cevreuzunluqR(radius)<<"sm";
					}			
					if(nnn==2){
						cout<<endl;
						cout<<"CEVRENIN DIAMETRINI DAXIL EDIN:";
						int diametr;
						cin>>diametr;
						cout<<endl;
						cout<<"CEVRENIZIN UZUNLUGU---------->"<<geometriya().cevreuzunluqD(diametr)<<"sm";
					}
					break;
				}
				default:{
					cout<<endl;
					cout<<"BELE BIR SECIM YOXDUR!";
					break;
				}
			}
			break;
		}
		case 2:
		{
			int l;
			cout<<endl;
			cout<<"KVADRAT UZERINDE ETMEK ISTEDIYINIZ EMELIYYATI QARSISINDAKI REQEMI YAZMAQLA SECIN:\n1-->Kvadratin Perimetri\t 2-->Kvadratin Sahesi\n";
			cout<<"Seciminiz:";
			cin>>l;
			if(l==1)
			{
				cout<<endl;
				cout<<"KVADRATIN TEREFININ UZUNLUGUNU DAXIL EDIN:";
				int ll;
				cin>>ll;
				cout<<endl;
				cout<<"KVADRATINIZIN PERIMETRI---------->"<<geometriya().kvadratperimetr(ll)<<"sm";
			}
			if(l==2)
			{
				cout<<endl;
				cout<<"KVADRATIN TEREFININ UZUNLUGUNU DAXIL EDIN:";
				int ll;
				cin>>ll;
				cout<<endl;
				cout<<"KVADRATINIZIN SAHESI---------->"<<geometriya().kvadratsahe(ll)<<"sm^2";
			}
			
			break;
		}
		case 3:
		{
			int l;
			cout<<endl;
			cout<<"DUZBUCAQLI UZERINDE ETMEK ISTEDIYINIZ EMELIYYATI QARSISINDAKI REQEMI YAZMAQLA SECIN:\n1-->Duzbucaqlinin Perimetri\t 2-->Duzbucaqlinin Sahesi\n";
			cout<<"Seciminiz:";
			cin>>l;
			if(l==1)
			{
				cout<<endl;
				cout<<"DUZBUCAQLININ TEREFLERININ UZUNLUGLARINI DAXIL EDIN:";
				int cc;
				int ll;
				cin>>cc>>ll;
				cout<<endl;
				cout<<"DUZBUCAQLININ PERIMETRI---------->"<<geometriya().duzbucaqliperimetr(cc,ll)<<"sm";
			}
			if(l==2)
			{
				cout<<endl;
				cout<<"KVA TEREFLERININ UZUNLUGLARINI DAXIL EDIN:";
				int ll;
				int cc;
				cin>>ll>>cc;
				cout<<endl;
				cout<<"DUZBUCAQLINININ SAHESI---------->"<<geometriya().duzbucaqlisahe(ll,cc)<<"sm^2";
			}
			break;
		}
		default:{
			cout<<endl;
			cout<<"BELE BIR SECIM YOXDUR!";
			break;
		}
	}
	return 0;
}
