#include <iostream>
#include <string>
#include <vector>
using namespace std;

class CCPU {
protected:
    string sMaCPU;
    string sLoaiCPU;
    string sHangCPU;
    float fXungNhip;
    int iSoCore;
    int fGia;
    int iTypeCPU;
public:
    void Input() {
        cin >> sMaCPU;
    }
    void Output() {
        cout << "CPU: " << sMaCPU << " " << sLoaiCPU << " " << sHangCPU << " "<< iSoCore << " " <<fXungNhip << " " << fGia << "\n";
    }
    int getfGia() {
        return fGia;
    }
};

class Alpha : public CCPU {
public:
    Alpha() {
        iTypeCPU = 1;
        sLoaiCPU = "Alpha";
        sHangCPU = "Black";
        iSoCore = 2;
        fXungNhip = 1.8;
        fGia = 200;
    }
};

class Beta : public CCPU {
public:
    Beta() {
        iTypeCPU = 2;
        sLoaiCPU = "Beta";
        sHangCPU = "Black";
        iSoCore = 4;
        fXungNhip = 2.46;
        fGia = 400;
    }
};

class Gamma : public CCPU {
public:
    Gamma() {
        iTypeCPU = 3;
        sLoaiCPU = "Gamma";
        sHangCPU = "White";
        iSoCore = 4;
        fXungNhip = 2.6;
        fGia = 600;
    }
};

class CManHinh {
protected:
    string sMaManHinh;
    string sHangManHinh;
    string sDPG;
    int fGia;
    int iTypeManHinh;
public:
    void Input() {
        cin >> sMaManHinh;
        cin >> sHangManHinh;
    }
    void Output() {
        cout << "Man hinh: " << sMaManHinh << " " << sHangManHinh << " " << sDPG << " " << fGia << "\n";
    }
    int getfGia() {
        return fGia;
    }
};

class CHD : public CManHinh {
public:
    CHD(string a, string b) {
        sMaManHinh = a;
        sHangManHinh = b;
        iTypeManHinh = 1;
        sDPG = "HD";
        fGia = 200;
    }
};

class CFull_HD : public CManHinh {
public:
    CFull_HD(string a, string b) {
        sMaManHinh = a;
        sHangManHinh = b;
        iTypeManHinh = 2;
        sDPG = "Full_HD";
        fGia = 500;
    }
};

class CVo {
protected:
    string loaiVo;
    string maVo;
    string hangVo;
    string mauVo;
    int fGia;
public:
    int getfGia() {
        return fGia;
    }
    void Output() {
        cout << "Vo smartphone: " << maVo << " " << loaiVo << " "<< hangVo << " " << mauVo << " " << fGia << "\n";
    }
};

class CVoNhom : public CVo {
public:
    CVoNhom(string a, int x) {
        maVo = a;
        loaiVo = "Nhom";
        hangVo = "Black";
        fGia = 400;
        if (x == 1) {
            mauVo = "Do";
        }
        else {
            mauVo = "Den";
        }
    }
};


class CVoNhua : public CVo {
public:
    CVoNhua(string a, int x) {
        maVo = a;
        loaiVo = "Nhua";
        hangVo = "White";
        fGia = 200;
        if (x == 1) {
            mauVo = "Do";
        }
        else if (x == 2) {
            mauVo = "Den";
        }
        else {
            mauVo = "Xanh";
        }
    }
};

class CSmartPhone {
protected:
    string sMa;
    string sDongSP;
    CCPU* Cpu;
    CManHinh* ManHinh;
    CVo* Vo;
    float fHeSofGia;
    float fGia;
    int iType;
public:
    void Input() {
        int iTypeCPU;
        cin >> sMa>> iTypeCPU;
        if (iTypeCPU == 1) Cpu = new Alpha;
        if (iTypeCPU == 2) Cpu = new Beta;
        if (iTypeCPU == 3) Cpu = new Gamma;
        Cpu->Input();
        int iTypeManHinh;
        string sMaManHinh, sHangManHinh;
        cin >> sMaManHinh>> sHangManHinh;
        cin >> iTypeManHinh;
        if (iTypeManHinh == 1) ManHinh = new CHD(sMaManHinh, sHangManHinh);
        if (iTypeManHinh == 2) ManHinh = new CFull_HD(sMaManHinh, sHangManHinh);
        int loaiVo, mauVo;
        string maVo;
        cin >> loaiVo;
        cin >> maVo;
        cin >> mauVo;
        if (loaiVo == 1) Vo = new CVoNhom(maVo, mauVo);
        if (loaiVo == 2) Vo = new CVoNhua(maVo, mauVo);
        fGia = Cpu->getfGia() + ManHinh->getfGia() + Vo->getfGia();
        fGia *= fHeSofGia;
    }
    void Output() {
        cout << "Smartphone: " << sMa << " " << sDongSP << " " << fGia << "\n";
        Cpu->Output();
        ManHinh->Output();
        Vo->Output();
    }
};

class CVenus : public CSmartPhone {
public:
    CVenus() {
        iType = 1;
        fHeSofGia = 1.3;
        sDongSP = "Venus";
    }
};

class CMars : public CSmartPhone {
public:
    CMars() {
        iType = 2;
        fHeSofGia = 1.5;
        sDongSP = "Mars";
    }
};

class CJupiter : public CSmartPhone {
public:
    CJupiter() {
        iType = 3;
        fHeSofGia = 1.8;
        sDongSP = "Jupiter";
    }
};

int main() {
    int n;
    cin >> n;
    vector< CSmartPhone*> a;
    a.resize(n);
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x == 1) a[i] = new CVenus();
        if (x == 2) a[i] = new CMars();
        if (x == 3) a[i] = new CJupiter();
        a[i]->Input();
    }
    for (int i = 0; i < n; i++) {
        a[i]->Output();
    }
    return 0;
}