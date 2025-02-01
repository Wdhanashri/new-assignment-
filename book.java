import java.util.ArrayList;
import java.util.Scanner;

// Class representing a Book in the library
class Book {
    private int id;
    private String title;
    private String author;
    private boolean isBorrowed;

    // Constructor to initialize the book details
    public Book(int id, String title, String author) {
        this.id = id;
        this.title = title;
        this.author = author;
        this.isBorrowed = false;  // Initially, the book is available
    }

    // Getter methods
    public int getId() {
        return id;
    }
    public String getTitle() {
        return title;
    }
    public String getAuthor() {
        return author;
    }
    public boolean isBorrowed() {
        return isBorrowed;
    }

    // Method to borrow the book
    public void borrowBook() {
        if (!isBorrowed) {
            isBorrowed = true;
        } else {
            System.out.println("The book is already borrowed.");
        }
    }

    // Method to return the book
    public void returnBook() {
        if (isBorrowed) {
            isBorrowed = false;
        } else {
            System.out.println("The book was not borrowed.");
        }
    }

    // Overriding toString() for a readable representation of the book
    @Override
    public String toString() {
        return "Book [ID: " + id + ", Title: " + title + ", Author: " + author 
                + ", Available: " + (!isBorrowed) + "]";
    }
}

// Main class for the Library Management System
public class LibraryManagement {
    private static ArrayList<Book> books = new ArrayList<>();
    private static Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        int choice;
        do {
            // Display menu options
            System.out.println("\n--- Library Management System ---");
            System.out.println("1. Add Book");
            System.out.println("2. Display All Books");
            System.out.println("3. Search Book by Title");
            System.out.println("4. Borrow Book");
            System.out.println("5. Return Book");
            System.out.println("6. Exit");
            System.out.print("Enter your choice: ");
            
            // Read user choice
            choice = scanner.nextInt();
            scanner.nextLine(); // Consume the newline
            
            switch (choice) {
                case 1:
                    addBook();
                    break;
                case 2:
                    displayBooks();
                    break;
                case 3:
                    searchBookByTitle();
                    break;
                case 4:
                    borrowBook();
                    break;
                case 5:
                    returnBook();
                    break;
                case 6:
                    System.out.println("Exiting the program. Thank you!");
                    break;
                default:
                    System.out.println("Invalid choice. Please try again.");
            }
        } while (choice != 6);
    }
    
    // Method to add a new book to the library
    public static void addBook() {
        System.out.print("Enter Book ID: ");
        int id = scanner.nextInt();
        scanner.nextLine(); // Consume newline
        
        System.out.print("Enter Book Title: ");
        String title = scanner.nextLine();
        
        System.out.print("Enter Book Author: ");
        String author = scanner.nextLine();
        
        Book book = new Book(id, title, author);
        books.add(book);
        System.out.println("Book added successfully!");
    }
    
    // Method to display all books
    public static void displayBooks() {
        if (books.isEmpty()) {
            System.out.println("No books available in the library.");
        } else {
            System.out.println("\nList of Books:");
            for (Book book : books) {
                System.out.println(book);
            }
        }
    }
    
    // Method to search for a book by its title
    public static void searchBookByTitle() {
        System.out.print("Enter the title to search: ");
        String searchTitle = scanner.nextLine().toLowerCase();
        boolean found = false;
        
        for (Book book : books) {
            if (book.getTitle().toLowerCase().contains(searchTitle)) {
                System.out.println("Found: " + book);
                found = true;
            }
        }
        
        if (!found) {
            System.out.println("No book found with the title containing: " + searchTitle);
        }
    }
    
    // Method to borrow a book by its ID
    public static void borrowBook() {
        System.out.print("Enter Book ID to borrow: ");
        int id = scanner.nextInt();
        boolean found = false;
        
        for (Book book : books) {
            if (book.getId() == id) {
                if (!book.isBorrowed()) {
                    book.borrowBook();
                    System.out.println("You have successfully borrowed: " + book.getTitle());
                } else {
                    System.out.println("Sorry, the book is currently borrowed.");
                }
                found = true;
                break;
            }
        }
        
        if (!found) {
            System.out.println("No book found with ID: " + id);
        }
    }
    
    // Method to return a borrowed book by its ID
    public static void returnBook() {
        System.out.print("Enter Book ID to return: ");
        int id = scanner.nextInt();
        boolean found = false;
        
        for (Book book : books) {
            if (book.getId() == id) {
                if (book.isBorrowed()) {
                    book.returnBook();
                    System.out.println("You have successfully returned: " + book.getTitle());
                } else {
                    System.out.println("The book was not borrowed.");
                }
                found = true;
                break;
            }
        }
        
        if (!found) {
            System.out.println("No book found with ID: " + id);
        }
    }
}
