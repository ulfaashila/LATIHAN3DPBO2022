from Processor import Processor
from ram import ram
from Disk import Disk
from PC import PC

# inisialisasi
proObj = Processor("Core i5", 6000000)
ramObj = ram("258GB", 6200000)
diskObj = Disk("SSD", "1TB", 7500000)

# menghitung total harga
totalPrice = proObj.getPrice() + ramObj.getPrice() + diskObj.getPrice()

O_pc = PC(proObj, ramObj, diskObj, totalPrice)

print("==========DATA PC==========")
# menampilkan keluaran
O_pc.printPC()