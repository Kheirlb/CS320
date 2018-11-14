using namespace std;

class batteryInfo {
  private:
    int data1;
    string batInfo;
  public:
    batteryInfo();
    ~batteryInfo();
    void print_data1();
    void print_data1_constructorVal();
    string getInfo(string);
};
