class ram():

    __name = ""
    __price = ""

    def __init__(self, name = "", price = ""):
        self.__name = name
        self.__price = price

    def setName(self, name):
        self.__name = name

    def setPrice(self, price):
        self.__price = price

    def getName(self):
        return self.__name

    def getPrice(self):
        return self.__price

    def printRam(self):
        print("RAM Capacity     : ", str(self.getName()))
        print("RAM Proce        : ", str(self.getPrice()))