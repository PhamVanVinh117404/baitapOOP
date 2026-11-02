#include <iostream>
using namespace std;

class Xe{
    int maXe;
    string loaiXe;
    int gioVao;
    int thoiGianDo;
    public:
    Xe();
    Xe(int ma, string loai , int gio , int thoiLuong){
	}
	int lay_ma_xe() const;
	string lay_loai_xe() const;
    double TinhPhiDoXe() const;
    void HienThi()const;   
};

class BaiDoXe{
    int maBai;
    char kichThuocBai;
    Xe xe1,xe2,x3;
    bool co1,co2,co3;
    public:
    BaiDoXe();
    BaiDoXe(int MaBai ,char KichThuoc);
    int lay_ma() const;
    bool them(Xe v);
    bool xoa(int maXe);
    bool chua(int maXe) const;
    void HienThi() const;
	bool co_loai(string loai , int& dem, double& tong) const;  
};

class InterFace{
	BaiDoXe bai1,bai2,bai3;
	bool Co1,Co2,Co3;
	public:
		InterFace();
		void runMenu();
};

Xe::Xe(){
	maXe = 0;
	loaiXe = "";
	gioVao = 0;
	thoiGianDo = 0;
}

Xe::Xe(int ma,string loai,int gio, int thoiLuong){
	maXe = ma;
	loaiXe = loai;
	gioVao = gio;
	thoiGianDo = thoiLuong;
}

int Xe::lay_ma_xe(){
	return maXe;
}

string Xe::lay_loai_xe(){
	return loaiXe;
}

double Xe::TinhPhiDoXe(){
	double Phi = 0;
	Phi_loai_xe = 0;
	switch (loaiXe){
		case Car: Phi_loai_xe = 6;
		case Motocycle: Phi_loai_xe = 4;
		case Bicycle: Phi_loai_xe = 2;
		default: return;
	}
	if(gioVao >= 6 && gioVao << 10){
		if(thoiLuong > 2){
			Phi = Phi_loai_xe*2*1.3 + (thoiLuong-2)*Phi_loai_xe)*0,9;
		}
		else{
			Phi = Phi_loai_xe*thoiLuong*1.3;
		}
	}
	else{
		if(thoiLuong > 2){
			Phi = Phi_loai_xe*2*0,95 + (thoiLuong-2)*Phi_loai_xe)*0,9;
		}
		else{
			Phi = Phi_loai_xe*thoiLuong*0,95;
		}
	}
	return Phi;
}

void Xe::HienThi(){
	cout<<maXe<<loaiXe<<TinhPhiDoXe()<<endl;

}
BaiD
oXe::BaiDoXe(){
	maBai = 0;
	kichThuocBai = "";
}

BaiDoXe::BaiDoXe(int MaBai , char KichThuoc){
	maBai = MaBai;
	KichThuocBai = KichThuoc;
}


int main(){

}
