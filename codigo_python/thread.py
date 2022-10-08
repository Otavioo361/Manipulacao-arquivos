from socket import SOL_NETROM
import threading
import time


def soma(x, y):
    for i in range(3):
        somas = x+y
        print(somas)


resultado = somas


def defini():
    if (resultado % 2) == 0:
        print("Par")
    else:
        print("Ímpar")


threading.Thread(target=soma).start()
