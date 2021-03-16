public class integers_and_math_operators {
  public static void main(String[] args) {
    int myNum = 15;
    System.out.println(myNum);
    //Pertambahan
    int myNum1 = 30;
    int myNum2 = 20;
    System.out.println(myNum1+myNum2);
    //Pengurangan
    System.out.println(myNum1-myNum2);
    //Perkalian
    System.out.println(myNum1*myNum2);
    //Pembagian (bersifat remaining (%))
    System.out.println(myNum1/myNum2);
    //Pembagian metode float
    float myNum3 = 25;
    float myNum4 = 10;
    System.out.println(myNum3/myNum4);
    //Remainder (sisa)
    System.out.println(myNum1%myNum2);
    //Remainder versi float
    System.out.println(myNum3%myNum4);
    
    // operasi dengan 3 angka
    int x = 5, y = 6, z = 50;
    System.out.println(x + y + z);
    System.out.println(x - y - z);
    System.out.println(x * y * z);

    //Increment 
    int inc = 5;
    ++inc;
    System.out.println(inc);

    //Decrement
    int dec = 5;
    --dec;
    System.out.println(dec);
  }
}
