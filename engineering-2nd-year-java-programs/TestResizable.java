/*
Develop a Java program to create an interface Resizable with methods resizeWidth(int
width) and resizeHeight(int height) that allow an object to be resized. Create a class
Rectangle that implements the Resizable interface and implements the resize methods.
*/

interface Resizable {
    void resizeWidth(int width);
    void resizeHeight(int height);
}

class Rectangle implements Resizable {
    private int width;
    private int height;

    public Rectangle(int width, int height) {
        this.width = width;
        this.height = height;
    }

    @Override
    public void resizeWidth(int width) {
        this.width = width;
    }

    @Override
    public void resizeHeight(int height) {
        this.height = height;
    }

    public void display() {
        System.out.println("Rectangle width: " + width + ", height: " + height);
    }
}

public class TestResizable {
    public static void main(String[] args) {
        Rectangle rectangle = new Rectangle(5, 10);

        System.out.println("Original rectangle:");
        rectangle.display();

        rectangle.resizeWidth(8);
        rectangle.resizeHeight(12);

        System.out.println("Resized rectangle:");
        rectangle.display();
    }
}

/*
    Output:

    Original rectangle:
    Rectangle width: 5, height: 10
    Resized rectangle:
    Rectangle width: 8, height: 12
*/