from libbp import World

import sys

from PyQt5.QtWidgets import *
from PyQt5.QtCore import *
from PyQt5.QtGui import *
from PyQt5.uic import *

class Test:
    def fn(self, x):
        print('one %s' % x)

if __name__ == "__main__":
    app = QApplication(sys.argv)

    r = World('Income')
    m = Test()

    w = loadUi('/home/joker/temp/main.ui')

    w.start.released.connect(lambda: r.function(100, m.fn))

    w.setWindowTitle('Simple')
    w.show()

    sys.exit(app.exec_())
