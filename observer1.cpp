/*
 *背景
 *气象站发布气象资料给数据中心，
 *数据中心经过处理，将气象信息更新到两个不同的显示终端（A和B）；
*/

class DisplayA {
public:
    void Show(float temperature);
};

class DisplayB {
public:
    void Show(float temperature);
};

class WeatherData {
};

class DataCenter {
public:
    float CalcTemperature() {
        WeatherData * data = GetWeatherData();
        // ...
        float temper/* = */;
        return temper;
    }
private:
    WeatherData * GetWeatherData(); // 不同的方式
};

int main() {
    DataCenter *center = new DataCenter;
    DisplayA *da = new DisplayA;
    DisplayB *db = new DisplayB;
    float temper = center->CalcTemperature();
    da->Show(temper);
    db->Show(temper);
    return 0;
}
// 终端变化（增加和删除）   数据中心 不应该受终端变化的影响
