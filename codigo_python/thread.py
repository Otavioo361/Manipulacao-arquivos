
import threading
import time

x = int(input('vaLOR PARA X'))
y = int(input('vaolr para y'))


def soma():

    s = x+y
    print(s)


def defini():
    somas = x+y
    if (somas % 2) == 0:
        print("Par")
    else:
        print("Ímpar")


threading.Thread(target=soma()).start()
threading.Thread(target=defini()).start()
