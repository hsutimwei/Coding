class monotonic_queue {
public:
    void push(int value) {
        while (!data.empty() && data.back() < value) {
            data.pop_back();
        }
        data.push_back(value);
    }

    void pop(int value) {
        if (!data.empty() && data.front() == value) {
            data.pop_front();
        }
    }

    int max() const {
        return data.empty() ? -1 : data.front();
    }

private:
    std::deque<int> data;
};