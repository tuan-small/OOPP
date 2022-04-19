#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

struct NhanVien
{
    string MaNhanVien;
    string HoTen;
    string PhongBan;
    int LuongCoBan;
    int Thuong;
    int ThucLanh;
};
int main()
{
    NhanVien DanhSach[1000];
    int n;cin>>n;
    for (int i=0;i<n;i++)
    {
        getline(cin,DanhSach[i].MaNhanVien); cin.ignore();
        getline(cin,DanhSach[i].HoTen); cin.ignore();
        getline(cin,DanhSach[i].PhongBan);cin.ignore();
        int a,b;
        DanhSach[i].LuongCoBan=a;
        DanhSach[i].Thuong=b;
        DanhSach[i].ThucLanh=a+b;
    }
    int tong=0;
    for (int i=0;i<n;i++) tong+=DanhSach[i].ThucLanh; 
    cout<<tong;
}