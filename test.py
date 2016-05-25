from libbp import World

class Test:
    def fn(self):
        print('inc')

if __name__ == "__main__":
    w = World("Income!")

    print(w.greet())
    print(w.simplesCount(100))