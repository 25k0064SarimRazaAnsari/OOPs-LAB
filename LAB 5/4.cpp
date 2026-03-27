#include  "iostream"
using namespace std;

class Device{
    string deviceName;
    string brand;

    public:
    Device(string dN,string b):deviceName(dN),brand(b){};

    void displayDevice(){
        cout<<"Device Name: "<<deviceName<<" | Brand: "<<brand<<endl;
    }

};

class Connectivity{
    string wifiStatus;
    string bluetoothStatus;

    public:
    Connectivity(string wS,string bS):wifiStatus(wS),bluetoothStatus(bS){};

    void displayConnectivity(){
        cout<<"WIFI Status: "<<wifiStatus<<" | Bluetooth Status: "<<bluetoothStatus<<endl;
    }

};

class SmartWatch: public Device, public Connectivity{
    int heartRate;
    int stepCount;

    public:
    SmartWatch(string dN,string b,string wS,string bS,int hR,int sC):Device(dN,b),Connectivity(wS,bS),heartRate(hR),stepCount(sC){};

    void displaySmartWatch(){
        displayDevice();
        displayConnectivity();
        cout<<"Heart Rate: "<<heartRate<<" | stepCount: "<<stepCount;
    }
};

int main(){
    SmartWatch s("levis","iPhone","Working","Not work",500,1502);

    s.displaySmartWatch();
}