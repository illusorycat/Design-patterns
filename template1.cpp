/*
 *背景
 *某个品牌动物园，有一套固定的表演流程，
 *但是其中有若干个表演子流程可创新替换，以尝试迭代更新表演流程；
*/

#include <iostream>
using namespace std;

#if 0
class ZooShow {
public:
    void Show0() {
        cout << "show0" << endl;
    }
    void Show2() {
        cout << "show2" << endl;
    }
};

class ZooShowEx {
public:
    void Show1() {
        cout << "show1" << endl;
    }
    void Show3() {
        cout << "show3" << endl;
    }
};

#else if 2

class ZooShow {
public:
    ZooShow(int type = 1) : _type(type) {}

public:
    void Show() {
        Show0();
        Show1();
        Show2();
        Show3();
    }

private:
    void Show0() {
        cout << _type << " show0" << endl;
    }

    void Show1() {
        if (_type == 1) {
            cout << _type << " Show1" << endl;
        } else if (_type == 2) {
            cout << _type << " Show1" << endl;
        } else if (_type == 3) {

        }
    }

    void Show2() {
        if (_type == 20) {
            
        }
        cout << "base Show2" << endl;
    }

    void Show3() {
        if (_type == 1) {
            cout << _type << " Show1" << endl;
        } else if (_type == 2) {
            cout << _type << " Show1" << endl;
        }
    }
private:
    int _type;
}

#endif

int main () {
#if 0
    ZooShow *zs = new ZooShow;
    ZooShowEx *zs1 = new ZooShowEx;
    zs->Show0();
    zs1->Show1();
    zs->Show2();
    zs1->Show3();
#else if 2
    ZooShow *zs = new ZooShow(1);
    zs->Show();
#endif
    return 0;
}
