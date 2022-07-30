#include <QtTest>
#include "../controller.h"
#include "../lift.h"

// add necessary includes here

class Test : public QObject
{
    Q_OBJECT

public:
    Test();
    ~Test();
    Lift *lift;
    Controller *controller;

private slots:
    void test_case1();

};

Test::Test()
{
    int floors = 10;
    //Lift * l = new Lift(floors);


}

Test::~Test()
{

}

void Test::test_case1()
{

}

QTEST_APPLESS_MAIN(Test)

#include "tst_test.moc"
