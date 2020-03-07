#include <iostream>
#include <vector>
#define endl "\n"
using namespace std;
 
class Heap
{
public:
    void heapify(int parent)
    {
        int left = (2 * parent) + 1;
        int right = (2 * parent) + 2;
        int smallest = parent;
        if (left < arr.size() && arr[smallest] < arr[left])
            smallest = left;
        if (right < arr.size() && arr[smallest] < arr[right])
            smallest = right;
        if (smallest != parent)
        {
            swap(arr[parent], arr[smallest]);
            heapify(smallest);
        }
    }
 
    int getMin()
    {
        if (!arr.empty())
            return arr[0];
        else
            return -100;
    }
    int removeMin()
    {
        if (!arr.empty())
        {
            arr.pop_back();
            arr[0] = arr[arr.size() - 1];
            heapify(0);
            return 0;
        }
        else
        {
            return -1;
        }
    }
 
    void insert(int num)
    {
        arr.resize(arr.size() + 1);
        int i = arr.size() - 1;
        while (i > 0 && arr[(i + 1) / 2] > num)
        {
            arr[i] = arr[(i + 1) / 2];
            i = (i + 1) / 2;
        }
        arr[i] = num;
    }
 
private:
    vector<int> arr;
};
 
int main()
{
    int num;
    cin >> num;
    Heap heap;
    vector<int> int_val(num);
    vector<string> string_val(num);
    for (int i = 0; i < num; i++)
    {
        cin >> string_val[i];
        if (string_val[i] != "removeMin")
            cin >> int_val[i];
        else
            int_val[i] = -100;
    }
    vector<int> answer_int(int_val);
    vector<string> answer_string(string_val);
    answer_int.pop_back();
    answer_string.pop_back();
    for (int i = 0; i < num - 1; i++)
    {
        if (string_val[i] == "insert")
        {
            heap.insert(int_val[i]);
        }
        else if (string_val[i] == "removeMin")
        {
            heap.removeMin();
        }
    }
    bool law = true;
    while (law)
    {
        if (string_val[num - 1] == "getMin")
        {
            int res = heap.getMin();
            if (res != -100)
            {
                if (res != int_val[num - 1])
                {
                    heap.removeMin();
                    answer_int.push_back(-100);
                    answer_string.push_back("removeMin");
                    if (heap.getMin() == -100)
                    {
                        heap.insert(int_val[num - 1]);
                        answer_string.push_back("insert");
                        answer_int.push_back(int_val[num - 1]);
                    }
                }
                else
                {
                    law = false;
                }
            }
            else
            {
                heap.insert(int_val[num - 1]);
                answer_string.push_back("insert");
                answer_int.push_back(int_val[num - 1]);
            }
        }
        if (string_val[num - 1] == "removeMin")
        {
            if (heap.removeMin() == -1)
            {
                heap.insert(int_val[num - 1]);
                answer_string.push_back("insert");
                answer_int.push_back(int_val[num - 1]);
            }
            else
            {
                law = false;
            }
        }
    }
    answer_int.push_back(int_val[num - 1]);
    answer_string.push_back(string_val[num - 1]);
    cout << answer_int.size() << endl;
    for (int i = 0; i < answer_int.size(); i++)
    {
        cout << answer_string[i];
        if (answer_int[i] != -100)
        {
            cout << " " << answer_int[i];
        }
        cout << endl;
    }
    return 0;
}
