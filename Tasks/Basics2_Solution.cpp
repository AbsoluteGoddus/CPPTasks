class doubleInt {
public:
    doubleInt() = default; // You can use this if you don't want to implement the constructor yourself.
    // ~doubleInt(); // Destructor is normally not needed, except if your class needs to do something special on destruction.

    void set_a(int value) {
        a = value;
    }

    void set_b(int value) {
        b = value;
    }

    int get_a() {
        return a;
    }

    int get_b() {
        return b;
    }

private:
    int a = 0; // Note the custom initialization
    int b = 0;
};

int main() {
    doubleInt di;
    di.set_a(1);
    di.set_b(65536);
    return di.get_b();
}