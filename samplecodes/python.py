# Groovy Nythera Python Preview

class ThemePreview:
    def __init__(self, name, version):
        self.name = name
        self.version = version
        self.languages = ["Python", "JavaScript", "HTML", "CSS"]

    def display_info(self):
        print(f"Theme: {self.name}")
        print(f"Version: {self.version}")

    def highlight(self, language):
        if language in self.languages:
            return f"Highlighting enabled for {language}"
        return "Language not supported"


def main():
    theme = ThemePreview("Groovy Nythera", 1.0)

    theme.display_info()

    for lang in theme.languages:
        print(theme.highlight(lang))


if __name__ == "__main__":
    main()