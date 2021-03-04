class MinStack {
public:
    /** initialize your data structure here. */
    vector <int> mainVector;
    vector <int> minVector;
    MinStack() {     
    }
    
    void push(int x) {
        mainVector.push_back(x); //Constant (amortized time, reallocation may happen).
        if (minVector.empty() || x<=minVector[minVector.size()-1]) minVector.push_back(x);
    }
    
    void pop() {
        if (minVector[minVector.size()-1]==mainVector[mainVector.size()-1])
            minVector.pop_back();
        mainVector.pop_back();
        }
    
    int top() {
        return mainVector[mainVector.size()-1];
    }
    
    int getMin() {
        return minVector[minVector.size()-1];    //vector.size() is O (1)    
    }
};
