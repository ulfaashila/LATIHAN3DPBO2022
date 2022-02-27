public class main {
    public static void main(String[] args) {
        // inisialisasi 
        processor obj_P = new processor("Core i5", 7500000);
        ram obj_R = new ram("16GB", 2000000);
        disk obj_D = new disk("SSD", "1TB", 5000000);
    
        // menghitung harga total
        int totalPrice = obj_P.getPrice() + obj_R.getPrice() + obj_D.getPrice();

        // masukan semua komponen ke PC
        pc obj_Pc = new pc(obj_P, obj_D, obj_R, totalPrice);

        System.out.println("==========DATA PC==========");
        // output
        obj_Pc.printPc();
    }
}