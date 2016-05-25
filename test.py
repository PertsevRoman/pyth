from libbp import World

class Test:
    def fn(self, x):
        print('one %s' % x)

if __name__ == "__main__":
    w = World("Income Software")

    n = Test()

    def r(x):
        print('two %s' % x)

    print(w.greet())
    print(w.simplesCount(10))

    g = 100
    w.function(g, n.fn)
    w.function(g, r)
    w.function(g, lambda x: print('three %s' % x))