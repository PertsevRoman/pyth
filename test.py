from libbp import World

class Test:
    def fn(self):
        print('one')

if __name__ == "__main__":
    w = World("Income Software")

    n = Test()

    def r():
        print('two')

    print(w.greet())
    print(w.simplesCount(10000))

    w.function(n.fn)
    w.function(r)
    w.function(lambda : print('three'))
