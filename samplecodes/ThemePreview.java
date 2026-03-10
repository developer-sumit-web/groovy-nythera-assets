// Groovy Nythera Java Preview
import java.util.ArrayList;
import java.util.List;

public class ThemePreview {
    private String name;
    private int version;

    public ThemePreview(String name, int version) {
        this.name = name;
        this.version = version;
    }

    public void displayInfo() {
        System.out.println("Theme: " + name);
        System.out.println("Version: " + version);
    }

    public static void main(String[] args) {
        ThemePreview theme = new ThemePreview("Groovy Nythera", 1);
        List<String> languages = new ArrayList<>();
        languages.add("Java");
        languages.add("Python");
        languages.add("JavaScript");
        theme.displayInfo();

        for (String lang : languages) {
            System.out.println("Highlighting: " + lang);
        }
    }
}