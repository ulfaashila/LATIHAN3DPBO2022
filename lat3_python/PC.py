from functools import total_ordering
from platform import processor
from Processor import Processor
from ram import ram
from Disk import Disk

class PC:
    __proObj = Processor()    
    __ramObj = ram()                
    __diskObj = Disk()              
    __totalPrice = 0                

    # constructor
    def __init__(self, proObj, ramObj, diskObj, totalPrice = 0):
        self.__proObj = proObj
        self.__ramObj = ramObj
        self.__diskObj = diskObj
        self.__totalPrice = totalPrice

    # setter and getter
    def setProcessor(self, proObj):
        self.__proObj = proObj
    
    def getProcessor(self):
        return self.__proObj

    def setRAM(self, ramObj):
        self.__ramObj = ramObj

    def getRAM(self):
        return self.__ramObj

    def setDisk(self, diskObj):
        self.__diskObj = diskObj
    
    def getDisk(self):
        return self.__diskObj
    
    def setTotalPrice(self, totalPrice):
        self.__totalPrice = totalPrice
    
    def getTotalPrice(self):
        return self.__totalPrice

    # methode
    def printPC(self):
        self.__proObj.printProcessor()
        self.__ramObj.printRam()
        self.__diskObj.printDisk()
        print("Total Price      : " + str(self.getTotalPrice()))