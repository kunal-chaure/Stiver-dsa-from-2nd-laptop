
#include <iostream>
#include <vector>
#include <array>
#include <deque>
#include <list>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <stack>
#include <queue>
#include <algorithm>
#include <numeric>
#include <string>

using namespace std;

// A reusable function to print containers
template <typename T>
void printContainer(const T& container)
{
    for (const auto& element : container)
    {
        cout << element << " ";
    }

    cout << endl;
}

int main()
{
    // ==========================================
    // 1. VECTOR
    // ==========================================

    cout << "\n========== VECTOR ==========\n";

    vector<int> v = {10, 20, 30, 40};

    // Adding elements
    v.push_back(50);
    v.emplace_back(60);

    cout << "Original vector: ";
    printContainer(v);

    // Accessing elements
    cout << "First element: " << v.front() << endl;
    cout << "Last element: " << v.back() << endl;
    cout << "Element at index 2: " << v.at(2) << endl;

    // Inserting an element
    v.insert(v.begin() + 2, 25);

    cout << "After insertion: ";
    printContainer(v);

    // Removing an element
    v.erase(v.begin() + 1);

    cout << "After deletion: ";
    printContainer(v);

    cout << "Vector size: " << v.size() << endl;
    cout << "Vector capacity: " << v.capacity() << endl;

    // ==========================================
    // 2. ARRAY
    // ==========================================

    cout << "\n========== ARRAY ==========\n";

    array<int, 5> arr = {5, 10, 15, 20, 25};

    cout << "Array elements: ";
    printContainer(arr);

    cout << "Array size: " << arr.size() << endl;

    // ==========================================
    // 3. DEQUE
    // ==========================================

    cout << "\n========== DEQUE ==========\n";

    deque<int> dq = {20, 30, 40};

    dq.push_front(10);
    dq.push_back(50);

    cout << "Deque elements: ";
    printContainer(dq);

    dq.pop_front();
    dq.pop_back();

    cout << "After removing front and back: ";
    printContainer(dq);

    // ==========================================
    // 4. LIST
    // ==========================================

    cout << "\n========== LIST ==========\n";

    list<int> li = {40, 10, 30, 20};

    li.push_front(5);
    li.push_back(50);

    cout << "Original list: ";
    printContainer(li);

    li.sort();

    cout << "Sorted list: ";
    printContainer(li);

    li.reverse();

    cout << "Reversed list: ";
    printContainer(li);

    // ==========================================
    // 5. SET
    // ==========================================

    cout << "\n========== SET ==========\n";

    set<int> s;

    s.insert(30);
    s.insert(10);
    s.insert(20);
    s.insert(10); // Duplicate ignored

    cout << "Set elements: ";
    printContainer(s);

    cout << "Does 20 exist? "
         << (s.find(20) != s.end() ? "Yes" : "No")
         << endl;

    s.erase(10);

    cout << "After erasing 10: ";
    printContainer(s);

    // ==========================================
    // 6. MULTISET
    // ==========================================

    cout << "\n========== MULTISET ==========\n";

    multiset<int> ms = {10, 20, 20, 30, 30, 30};

    cout << "Multiset elements: ";
    printContainer(ms);

    cout << "Frequency of 30: "
         << ms.count(30) << endl;

    // ==========================================
    // 7. MAP
    // ==========================================

    cout << "\n========== MAP ==========\n";

    map<int, string> mp;

    mp[1] = "Kunal";
    mp[2] = "Rahul";
    mp[3] = "Amit";

    mp.insert({4, "Rohan"});

    for (const auto& element : mp)
    {
        cout << "Key: " << element.first
             << " | Value: " << element.second
             << endl;
    }

    cout << "Value at key 2: " << mp[2] << endl;

    mp.erase(3);

    cout << "After deleting key 3:\n";

    for (const auto& element : mp)
    {
        cout << element.first << " -> "
             << element.second << endl;
    }

    // ==========================================
    // 8. UNORDERED SET
    // ==========================================

    cout << "\n========== UNORDERED SET ==========\n";

    unordered_set<int> us = {50, 10, 30, 20, 10};

    cout << "Unordered set elements: ";
    printContainer(us);

    cout << "Does 50 exist? "
         << (us.find(50) != us.end() ? "Yes" : "No")
         << endl;

    // ==========================================
    // 9. UNORDERED MAP
    // ==========================================

    cout << "\n========== UNORDERED MAP ==========\n";

    unordered_map<string, int> marks;

    marks["Kunal"] = 90;
    marks["Rahul"] = 85;
    marks["Amit"] = 95;

    for (const auto& student : marks)
    {
        cout << student.first << " : "
             << student.second << endl;
    }

    // ==========================================
    // 10. STACK
    // ==========================================

    cout << "\n========== STACK ==========\n";

    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);

    cout << "Top element: " << st.top() << endl;

    st.pop();

    cout << "Top after pop: " << st.top() << endl;
    cout << "Stack size: " << st.size() << endl;

    // ==========================================
    // 11. QUEUE
    // ==========================================

    cout << "\n========== QUEUE ==========\n";

    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front element: " << q.front() << endl;
    cout << "Back element: " << q.back() << endl;

    q.pop();

    cout << "Front after pop: " << q.front() << endl;

    // ==========================================
    // 12. PRIORITY QUEUE
    // ==========================================

    cout << "\n========== PRIORITY QUEUE ==========\n";

    // Max heap by default
    priority_queue<int> pq;

    pq.push(40);
    pq.push(10);
    pq.push(50);
    pq.push(20);

    cout << "Max heap elements: ";

    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }

    cout << endl;

    // Min heap
    priority_queue<int, vector<int>, greater<int>> minPQ;

    minPQ.push(40);
    minPQ.push(10);
    minPQ.push(50);
    minPQ.push(20);

    cout << "Min heap elements: ";

    while (!minPQ.empty())
    {
        cout << minPQ.top() << " ";
        minPQ.pop();
    }

    cout << endl;

    // ==========================================
    // 13. STL ALGORITHMS
    // ==========================================

    cout << "\n========== ALGORITHMS ==========\n";

    vector<int> nums = {7, 2, 9, 2, 5, 1};

    cout << "Original: ";
    printContainer(nums);

    // Sorting
    sort(nums.begin(), nums.end());

    cout << "Sorted: ";
    printContainer(nums);

    // Reverse
    reverse(nums.begin(), nums.end());

    cout << "Reversed: ";
    printContainer(nums);

    // Find
    auto it = find(nums.begin(), nums.end(), 5);

    if (it != nums.end())
    {
        cout << "Found 5 at index: "
             << distance(nums.begin(), it) << endl;
    }
    else
    {
        cout << "5 not found\n";
    }

    // Count
    cout << "Count of 2: "
         << count(nums.begin(), nums.end(), 2)
         << endl;

    // Sum
    cout << "Sum: "
         << accumulate(nums.begin(), nums.end(), 0)
         << endl;

    // ==========================================
    // 14. BINARY SEARCH
    // ==========================================

    cout << "\n========== BINARY SEARCH ==========\n";

    vector<int> numbers = {10, 20, 30, 40, 50};

    cout << "Is 30 present? "
         << (binary_search(numbers.begin(),
                           numbers.end(), 30)
             ? "Yes" : "No")
         << endl;

    // lower_bound
    auto lb = lower_bound(
        numbers.begin(), numbers.end(), 30
    );

    cout << "Lower bound of 30: " << *lb << endl;

    // upper_bound
    auto ub = upper_bound(
        numbers.begin(), numbers.end(), 30
    );

    cout << "Upper bound of 30: " << *ub << endl;

    // ==========================================
    // 15. LAMBDA FUNCTIONS + CUSTOM FILTERING
    // ==========================================

    cout << "\n========== LAMBDA ==========\n";

    vector<int> values = {10, 15, 20, 25, 30, 35};

    cout << "Even numbers: ";

    for_each(values.begin(), values.end(),
        [](int x)
        {
            if (x % 2 == 0)
            {
                cout << x << " ";
            }
        }
    );

    cout << endl;

    // Remove odd numbers using remove_if
    values.erase(
        remove_if(values.begin(), values.end(),
            [](int x)
            {
                return x % 2 != 0;
            }
        ),
        values.end()
    );

    cout << "After removing odd numbers: ";
    printContainer(values);

    // ==========================================
    // 16. CUSTOM SORTING
    // ==========================================

    cout << "\n========== CUSTOM SORTING ==========\n";

    vector<int> scores = {45, 90, 20, 75, 60};

    // Descending order
    sort(scores.begin(), scores.end(),
        [](int a, int b)
        {
            return a > b;
        }
    );

    cout << "Descending order: ";
    printContainer(scores);

    return 0;
}