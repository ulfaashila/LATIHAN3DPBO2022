public class pc{
    private processor obj_P;
    private disk obj_D;
    private ram obj_R;
    private int totalPrice;

    public pc() {
    }

    
    public pc(processor obj_P, disk obj_D, ram obj_R, int totalPrice) {
        this.obj_P = obj_P;
        this.obj_D = obj_D;
        this.obj_R = obj_R;
        this.setTotalPrice(totalPrice);
    }

    public int getTotalPrice() {
        return totalPrice;
    }

    public void setTotalPrice(int totalPrice) {
        this.totalPrice = totalPrice;
    }

    public ram getobj_R() {
        return obj_R;
    }

    public processor getobj_P() {
        return obj_P;
    }

    public void setobj_P(processor obj_P) {
        this.obj_P = obj_P;
    }

    public disk getobj_D() {
        return obj_D;
    }

    public void setobj_D(disk obj_D) {
        this.obj_D = obj_D;
    }
    
    public void setobj_R(ram obj_R) {
        this.obj_R = obj_R;
    }

    public void printPc(){
        this.obj_P.printProcessor();
        this.obj_D.printDisk();
        this.obj_R.printRam();
        System.out.println("Total Price     : " + this.getTotalPrice());
    }

    
}