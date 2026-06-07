public class LibraryInterfaceDemo {
    public static void main(String[] args) {
        //Test case 1
        KidUsers kid = new KidUsers();
        kid.age = 10;
        kid.bookType = "Kids";
        kid.registerAccount();
        kid.requestBook();
        System.out.println(); 
        kid.age = 18;
        kid.bookType = "Fiction";
        kid.registerAccount();
        kid.requestBook();
        System.out.println("\n");
        //Test case 2
        AdultUser adult = new AdultUser();
        adult.age = 5;
        adult.bookType = "Kids";
        adult.registerAccount();
        adult.requestBook();
        System.out.println(); 
        adult.age = 23;
        adult.bookType = "Fiction";
        adult.registerAccount();
        adult.requestBook();
    }
}
