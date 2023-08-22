#include <iostream>

using namespace std;

class Counter
{
private:
    int count = 0;
    int increment_Step = 0;

public:
    void setIncrement(int step_val)
    {
        increment_Step = step_val;
    }
    int getCount()
    {
        return count;
    }
    void increment()
    {
        count = count + increment_Step;
    }
    void resetCount()
    {
        count = 0;
    }
    bool isEven()
    {
        return (count % 2) == 0;
    }
};
Counter a;

int main(void)
{

    a.setIncrement(5);
    a.increment();
    a.increment();

    cout << "Count after increment:  " << a.getCount() << endl;
    a.resetCount();
    cout << "Count after reset:  " << a.getCount() << endl;

    return 0;
}