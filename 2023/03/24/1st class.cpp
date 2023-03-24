#include <iostream>
using namespace std;

class SinivelCap    // 콧물 처치용 캡슐
{
public:
    void Take() const {cout<<"콧물 나음"<<endl;}
};

class SneezeCap    // 재채기 처치용 캡슐
{
public:
    void Take() const {cout<<"재채기 멈춤"<<endl;}
};

class SnuffleCap   // 코막힘 처치용 캡슐
{
public:
    void Take() const {cout<<"코막힘 사라짐"<<endl;}
};

class CONTAC600 {
  SinivelCap scap;
	SneezeCap zcap;
	SnuffleCap ncap;
  public:
    void Take() const{
      scap.Take();
	    zcap.Take();
	    ncap.Take();
    }
};

class ColdPatient
{
public:
    void TakeCONTAC600(const CONTAC600 &cap) const {
      cap.Take(); 
    }
};

int main(void)
{
    CONTAC600 cap;
    ColdPatient sufferer;
    sufferer.TakeCONTAC600(cap);
    return 0;
}