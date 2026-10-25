#include <iostream>
using namespace std;

class Xe{
    int maXe;
    string loaiXe;
    int gioVao;
    int thoiGianDo;
    double phiDoXe;
    bool dangChiemCho;
    public:
    Xe();
    Xe(int ma,  const string& loai , int gio , int thoiLuong){
        maXe = ma;
        loaiXe = loai;
        gioVao = gio;
        thoiGianDo = thoiLuong;
    }
};
class BaiDoXe{
    int maBai;
    char kichThuocBai;
    public:
    BaiDoXe();
    BaiDoXe(int MaBai , const char& KichThuoc){
        maBai = MaBai;
        kichThuocBai = KichThuoc;
    }
};
int main(){

}