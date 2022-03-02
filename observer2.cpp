/*
 *背景
 *气象站发布气象资料给数据中心，
 *数据中心经过处理，将气象信息更新到两个不同的显示终端（A和B）；
*/


#include <vector>

class IDisplay {
public:
    virtual void Show(float temperature) = 0;
    virtual ~IDisplay() {}
};

class DisplayA : public IDisplay {
public:
    virtual void Show(float temperature);
};

class DisplayB : public IDisplay{
public:
    virtual void Show(float temperature);
};

class WeatherData {
};

class DataCenter {
public:
    void Attach(IDisplay * ob);
    void Detach(IDisplay * ob);
    void Notify() {
        float temper = CalcTemperature();
        for (auto iter = obs.begin(); iter != obs.end(); iter++) {
            (*iter)->Show(temper);
        }
    }

private:
    virtual WeatherData * GetWeatherData();

    virtual float CalcTemperature() {
        WeatherData * data = GetWeatherData();
        // ...
        float temper/* = */;
        return temper;
    }
    std::vector<IDisplay*> obs;
};

int main() {
    DataCenter *center = new DataCenter;
    IDisplay *da = new DisplayA();
    IDisplay *db = new DisplayB();
    center->Attach(da);
    center->Attach(db);
    center->Notify();
    
    //-----
    center->Detach(db);
    center->Notify();
    return 0;
}