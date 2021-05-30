#include <iostream>
using namespace std;

class Weapon{
	public:
		virtual void Nama(){
			cout<< "Nama Senjata" <<endl;
		}
		virtual void Type(){
			cout << "Jenis Senjata" <<endl;
		}
		virtual void BaseATK(){
			cout<< "Base ATK Lv90" <<endl;
		}
		virtual void Stat(){
			cout<< "Main Stat" <<endl;
		}
		virtual void Rarity(){
			cout<< "Tingkat Kelangkaan" <<endl;
		}
};

class Sword: public Weapon{
	private:
		char nama_senjata[20] = "Aquila Favonia";
		
	protected:
		void Nama(){
			cout << "Nama : " << nama_senjata << endl;
		}
		void Type(){
			cout << "Jenis Senjata : Sword" <<endl;
		}
		void BaseATK(){
			cout << "Base ATK (Lv90) : 674.0"  << endl;
		}
		void Stat(){
			cout << "Main Stat : Physical DMG Bonus : 9.0% - 41.3%" << endl;
		}
		void Rarity(){
			cout << "Tingkat kelangkaan : 5* rarity" << endl;
		}
};

class Bow: public Weapon{
	private:
		char nama_senjata[20] = "Skyward Harp";
		
	protected:
		void Nama(){
			cout << "Nama : " << nama_senjata << endl;
		}
		void Type(){
			cout << "Jenis Senjata : Bow" <<endl;
		}
		void BaseATK(){
			cout << "Base ATK (Lv90) : 674.0 " << endl;
		}
		void Stat(){
			cout << "Main Stat : CRIT Rate : 4.8% - 22.1%" << endl;
		}
		void Rarity(){
			cout << "Tingkat kelangkaan : 5* rarity" << endl;
		}
};

class Claymore: public Weapon{
	private:
		char nama_senjata[20] = "Wolf's Gravestone";
		
	protected:
		void Nama(){
			cout << "Nama : " << nama_senjata << endl;
		}
		void Type(){
			cout << "Jenis Senjata : Claymore" <<endl;
		}
		void BaseATK(){
			cout << "Base ATK (Lv90) : 608.0"  << endl;
		}
		void Stat(){
			cout << "Main Stat : ATK : 10.8% - 49.6%" << endl;
		}
		void Rarity(){
			cout << "Tingkat kelangkaan : 5* rarity" << endl;
		}
};

class Polearm: public Weapon{
	private:
		char nama_senjata[20] = "Staff of Homa";
		
	protected:
		void Nama(){
			cout << "Nama : " << nama_senjata << endl;
		}
		void Type(){
			cout << "Jenis Senjata : Polearm" <<endl;
		}
		void BaseATK(){
			cout << "Base ATK (Lv90) : 608.0"  << endl;
		}
		void Stat(){
			cout << "Main Stat : CRIT DMG : 14.4% - 66.2%" << endl;
		}
		void Rarity(){
			cout << "Tingkat kelangkaan : 5* rarity" << endl;
		}
};

class Catalyst: public Weapon{
	private:
		char nama_senjata[20] = "Memory of Dust";
		
	protected:
		void Nama(){
			cout << "Nama : " << nama_senjata << endl;
		}
		void Type(){
			cout << "Jenis Senjata : Catalyst" <<endl;
		}
		void BaseATK(){
			cout << "Base ATK (Lv90) : 608.0"  << endl;
		}
		void Stat(){
			cout << "Main Stat : ATK : 10.8% - 49.6%" << endl;
		}
		void Rarity(){
			cout << "Tingkat kelangkaan : 5* rarity" << endl;
		}
};

int main(){
	
	Weapon *W;
	
	Sword S;
	Bow B;
	Claymore C;
	Polearm P;
	Catalyst CT;
	
	cout<<endl;
	cout << "				  [Berbagai Macam Jenis Weapon pada Genshin Impact]		    "<< endl;
	cout<<endl;
	
	W = &S;
	W->Nama();
	W->Type();
	W->BaseATK();
	W->Stat();
	W->Rarity();
	
	cout<<endl;
	
	W = &B;
	W->Nama();
	W->Type();
	W->BaseATK();
	W->Stat();
	W->Rarity();
	
	cout<<endl;
	
	W = &C;
	W->Nama();
	W->Type();
	W->BaseATK();
	W->Stat();
	W->Rarity();
	
	cout<<endl;
	
	W = &P;
	W->Nama();
	W->Type();
	W->BaseATK();
	W->Stat();
	W->Rarity();
	
	cout<<endl;
	
	W = &CT;
	W->Nama();
	W->Type();
	W->BaseATK();
	W->Stat();
	W->Rarity();
	
	cout<<endl;
	
	return 0;
}

