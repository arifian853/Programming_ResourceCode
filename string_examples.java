public class string_examples {
  public static void main(String[] args) {
    //Panjang tulisan
    String txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    System.out.println("---------------------------------------------------");
    System.out.println("String contains : ABCDEFGHIJKLMNOPQRSTUVWXYZ ");
    System.out.println("The length of the txt string is: " + txt.length());
    System.out.println("---------------------------------------------------");
    //Transform ke uppercase dan lowercase
    System.out.println("String contain = Hello World");
    System.out.println("Transform ke uppercase dan lowercase");
    String txt1 = "Hello World";
    System.out.println(txt1.toUpperCase());   // Outputs "HELLO WORLD"
    System.out.println(txt1.toLowerCase());   // Outputs "hello world"
    System.out.println("---------------------------------------------------");
    //Menambahkan 2 string
    System.out.println("String contains :  Nama depan : Arifian , Nama belakang : Saputra , dijadikan nama full");
    String nama_depan = "Arifian ";
    String nama_belakang = "Saputra";
    System.out.println(nama_depan + " " + nama_belakang);
    //Menambahkan 2 string dengan metode concat
    System.out.println("Metode concat :");
    System.out.println(nama_depan.concat(nama_belakang));
    System.out.println("---------------------------------------------------");
  }
}