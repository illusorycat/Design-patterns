/*
 *背景
 *某个品牌动物园，有一套固定的表演流程，
 *但是其中有若干个表演子流程可创新替换，以尝试迭代更新表演流程；
*/


#include <iostream>
using namespace std;

class ZooShow {
public:
    // 固定流程封装到这里
    void Show() {
        Show0();
        Show1();
        Show2();
        Show3();
    }
protected:
    // 子流程 使用protected保护起来 不被客户调用 但允许子类扩展
    virtual void Show0(){
        cout << "show0" << endl;
    }
    virtual void Show2(){
        cout << "show2" << endl;
    }
    virtual void Show1() {

    }
    virtual void Show3() {

    }
};
class ZooShowEx : public ZooShow {
protected:
    virtual void Show1(){
        cout << "show1" << endl;
    }
    virtual void Show3(){
        cout << "show3" << endl;
    }
    virtual void Show4() {
        //
    }
};

class ZooShowEx1 : public ZooShow {
protected:
    virtual void Show0(){
        cout << "show1" << endl;
    }
    virtual void Show2(){
        cout << "show3" << endl;
    }
};

class ZooShowEx2 : public ZooShow {
protected:
    virtual void Show1(){
        cout << "show1" << endl;
    }
    virtual void Show2(){
        cout << "show3" << endl;
    }
};
/*
*/
int main () {
    ZooShow *zs = new ZooShowEx;
    // ZooShow *zs1 = new ZooShowEx1;
    // ZooShow *zs2 = new ZooShowEx2;
    zs->Show();
    return 0;
}

