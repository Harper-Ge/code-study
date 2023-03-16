class MyStack {
public:
    queue<int> q1;
    MyStack() {

    }
    
    void push(int x) {
        q1.push(x);
    }
    
    int pop() {
        int num = q1.size();
        while(--num){
            q1.push(q1.front());
            q1.pop();
        }
        int res = q1.front();
        q1.pop();
        return res;      
    }
