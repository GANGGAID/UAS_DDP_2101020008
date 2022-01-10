#include <iostream>

using namespace std;

int main()
{
    program :
    cout << "! KALKULATOR LUAS DAN KELILING BANGUN DATAR !"<<endl;
    cout << "1. PERSEGI PANJANG"<<endl;
    cout << "2. JAJARAN GENJANG"<<endl;
    cout << "3. SEGI TIGA"<<endl;
    cout << "4. TRAPESIUM"<<endl;
    cout << "5. PERSEGI"<<endl;
    cout << "6. LINGKARAN"<<endl;
    cout << "7. LAYANG LAYANG"<<endl;
    cout << "8. BELAH KETUPAT"<<endl;
  
    int i;
    cout<< "pilih bangun datar = ";
    cin>>i;
    cout << endl;
    switch (i){
        case 1:
        cout << "persegi panjang"<<endl;
        int q,w,e,nb;
        cout << "masukan panjang = ";
        cin >>q;
        cout<< "masukan lebar = ";
        cin>>w;
        e = q*w;
        nb = 2*(q+w);
        cout<<endl;
        cout << "luas persegi panjang = "<<e<<endl;
        cout << "keliling persegi panjang = "<<nb;
        break;
        case 2:
        cout << "jajaran genjang"<<endl;
        int r,t,y,mv,cx,fg;
        cout << "masukan alas = ";
        cin>>r;
        cout << "masukan tinggi = ";
        cin>>t;
        cout << "masukan sisi kanan = ";
        cin>>mv;
        cout << "masukan sisi kiri = ";
        cin>>cx;
        y=r*t;
        fg = 2*(mv+cx);
        cout<<endl;
        cout<< "jajaran genjang = "<<y<<endl;
        cout << "keliling jajaran genjang = "<<fg<<endl;
        break;
        case 3:
        cout << "segi tiga"<<endl;
        int u,o,p,kn,kr,hs;
        cout << "masukan alas = ";
        cin>>u;
        cout << "masukan tinggi = ";
        cin>>o;
        cout << "masukan sisi kanan = ";
        cin >> kn;
        cout << "masukan sisi kiri = ";
        cin>>kr;
        p = u*o/2;
        hs = u + kn + kr ;
        cout << endl;
        cout << "luas segitiga = "<<p<<endl;
        cout << "keliling segitiga = "<<hs<<endl;
        break;
        case 4: 
        cout << "trapesium"<< endl;
        int a,s,d,f,sk,si;
        cout<< "masukan sisi atas = ";
        cin>> a;
        cout << "masukan sisi bawah = ";
        cin >>s;
        cout << "masukan tinggi = ";
        cin>>d;
        cout << "masukan sisi samping = ";
        cin >> sk;
        si= a+s+sk+sk;
        f=(a+s)*d/2;
        cout<<endl;
        cout << "luas trapesium = "<<f<<endl;
        cout << "keliling trapesium = "<<si<<endl;
        break;
        case 5:
        cout << "persegi "<<endl;
        int qw,we,er;
        cout << "masukan sisi = ";
        cin>>qw;
        we = qw*qw;
        er = 4*qw;
        cout <<endl;
        cout << "luas persegi = "<<we<<endl;
        cout << "keliling pesrsegi = "<<er<<endl;
        break;
        case 6:
        cout << "lingkaran"<<endl;
        float j,k,hj;
        cout << "masukan jari jari = ";
        cin >> j;
        k = (j*j)*3.14;
        hj = 2*3.14*j;
        cout << endl;
        cout << "luas lingkaran = "<<k<<endl;
        cout << "keliling lingkaran = "<<hj<<endl;
        break;
        case 7:
        cout << "layang layang"<< endl;
        int l,z,x,c,v,b;
        cout << "masukan diagonal 1 = ";
        cin>>l;
        cout << "masukan diagonal 2 = ";
        cin >>z;
        cout<< "masukan sisi 1 = ";
        cin>>x;
        cout << "masukan sisi 2 = ";
        cin>>c;
        cout <<endl;
        v= 2*(x+c);
        b= l*z/2;
        cout<< "hasil keliling = "<<v<<endl;
        cout << "hasil luas = "<<b<<endl;
        break;
        case 8:
        cout << "belah ketupat"<<endl;
        float n,m,sisi,hasil,keliling;
        cout<< "masukan diagonal 1 = ";
        cin >> n;
        cout << "masukan diagonal 2 = ";
        cin >>m;
        cout << "masukan sisi = ";
        cin >>sisi;
        keliling= sisi*4;
        hasil= 0.5*n*m;
        cout<<endl;
        cout << "luas belah ketupat = "<<hasil<<endl;
        cout << "keliling belah ketupat = "<<keliling<<endl;
        break;
        
        
    }
     int lanjut;
       cout<<endl;
       cout<<endl;
    ulang:
    cout<< "lanjutkan ?"<<endl;
    cout << "1. ya\n2. tidak"<<endl;
    cin >>lanjut;
    if(lanjut==1){
        goto program;
    }
    else if(lanjut==2){
        return 0;
    }
    else{
        cout << "ihhh tengal\nDAHLAH"<<endl;
        goto ulang;
    }

   
}
