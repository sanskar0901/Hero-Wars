#include <iostream>

using namespace std;
class Hero{
    public:
    int Hp;
    int Damage;
    string Name;
};
class Ironman : public Hero{
    public:
    Ironman(int hp,int damage){
        Hp=hp;
        Damage=damage;
        Name="Ironman";
    }
    Ironman(){
        Hp=700;
        Damage=200;
        Name="Ironman";
    }
};
class captain_America : public Hero{
    public:
    captain_America(int hp,int damage){
        Hp=hp;
        Damage=damage;
        Name="Captain_America";
    }
    captain_America(){
        Hp=300;
        Damage=600;
        Name="Captain_America";
    }
};
class harry_potter: public Hero{
    public:
    harry_potter(int hp,int damage){
        Hp=hp;
        Damage=damage;
        Name="Harry_Potter";
    }
    harry_potter(){
        Hp=400;
        Damage=500;
        Name="Harry_Potter";;
    }
};

class Monstar{
    public:
    int Hp;
    int Damage;
    string Name;
};

class Azesal : public Monstar{
    public:
    Azesal(int hp,int damage){
        Hp=hp;
        Damage=damage;
        Name="Azesal";
    }
    Azesal(){
        Hp=100;
        Damage=300;
        Name="Azesal";
    }
};
class Thanos : public Monstar{
    public:
    Thanos(int hp,int damage){
        Hp=hp;
        Damage=damage;
        Name="Thanos";
    }
    Thanos(){
        Hp=900;
        Damage=300;
        Name="Thanos";
    }
};
class Voldemort : public Monstar{
    public:
    Voldemort(int hp,int damage){
        Hp=hp;
        Damage=damage;
        Name="Voldemort";
    }
    Voldemort(){
        Hp=900;
        Damage=300;
        Name="Voldemort";
    }
};




class Swod{
    public:
    int Hp;
    int Damage;
    string Name;
};
class Ktag: public Swod{
    public:
    Ktag(int hp,int damage){
        Hp=hp;
        Damage=damage;
        Name="K-tag";
    }
    Ktag(){
        Hp=500;
        Damage=900;
        Name="K-tag";
    }
};
class Butterflyknife : public Swod{
    public:
    Butterflyknife(int hp,int damage){
        Hp=hp;
        Damage=damage;
        Name="Butterfly-knife";
    }
    Butterflyknife(){
        Hp=800;
        Damage=900;
        Name="Butterfly-knife";
    }
};

class FactoryHero{
    public:
    Hero *getFactoryHero(int c){
        switch(c){
            case(1):default:
            return new Ironman();
            break;
            case(2):
            return new captain_America();
            break;
            case(3):
            return new harry_potter();
            break;
        }
        
    }
    
};
class FactoryMonstar{
    public:
    Monstar *getFactoryMonstar(int c){
        switch(c){
            case(1):default:
            return new Azesal();
            break;
            case(2):
            return new Thanos();
            break;
            case(3):
            return new Voldemort();
            break;
        }
        
    }
    
};
class FactorySwod{
    public:
    Swod *getFactorySwod(int c){
        switch(c){
            case(1):default:
            return new Ktag();
            break;
            case(2):
            return new Butterflyknife();
            break;
        }
        
    }
    
};

int main()
{
    int ch;
    cout<< "enter Choice of Hero"<<endl<<"1) Ironman\n2) Captain_America\n3) Harry_Potter\n";
    cin>>ch;
    // int hh,hd;
    // cout<<"enter hero Hp and damage:-\n";
    // cin>>hh>>hd;
    FactoryHero *fh;
    Hero *h=fh->getFactoryHero(ch);
    // cout<<h->Hp<<h->Damage<<endl;
    int cm;
    cout<< "enter Choice of Monstar"<<endl<<"1) Azesal\n2) Thanos\n3) Voldemort";
    cin>>cm;
    // int hm,md;
    // cout<<"enter hero Hp and damage:-\n";
    // cin>>hm>>md;
    FactoryMonstar *fm;
    Monstar *m=fm->getFactoryMonstar(cm);
    // cout<<m->Hp<<m->Damage<<endl;
    // cout<<captain_America.Hp<<spider_man.Damage;
    // Hero.createHero();
    
    int csh;
    cout<< "enter Choice of Swod for Hero"<<endl<<"1) Ktag\n2) Butterflyknife\n";
    cin>>csh;
    FactorySwod *fsh;
    Swod *sh=fsh->getFactorySwod(csh);
    // cout<<sh->Hp<<sh->Damage<<endl;
    
    int csm;
    cout<< "enter Choice of Swod for Monstar"<<endl<<"1) Ktag\n2) Butterflyknife\n";
    cin>>csm;
    FactorySwod *fsm;
    Swod *sm=fsm->getFactorySwod(csm);
    // cout<<sm->Hp<<sm->Damage<<endl;
    
    if(((m->Hp+sm->Hp)*(m->Damage+sm->Damage))>((h->Hp+sh->Hp)*(h->Damage+sh->Damage))){
        cout<<m->Name<<" wins!!";
    }
    else{
        cout<<h->Name<<" wins!!";
    }
    return 0;
}





