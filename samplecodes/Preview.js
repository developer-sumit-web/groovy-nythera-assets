// Groovy Nythera JavaScript Preview

class ThemePreview {
  constructor(name, version) {
    this.name = name;
    this.version = version;
    this.languages = ["JavaScript", "Python", "HTML", "CSS"];
  }

  printInfo() {
    console.log(`Theme: ${this.name}`);
    console.log(`Version: ${this.version}`);
  }

  highlight(language) {
    if (this.languages.includes(language)) {
      return `Syntax highlighting enabled for ${language}`;
    } else {
      return "Language not supported";
    }
  }
}

const theme = new ThemePreview("Groovy Nythera", 1.0);

theme.printInfo();

for (const lang of theme.languages) {
  console.log(theme.highlight(lang));
}
