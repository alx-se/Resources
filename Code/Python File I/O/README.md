Here's a `main.py` file that demonstrates the usage of the provided classes:

```python
from FileStorage import FileStorage
from Person import Person, Student

def main():
    # Reading data from file
    FileStorage.read_from_json()

    # Creating new instances of Person and Student
    person1 = Person("Alice", 25)
    student1 = Student("Bob", 20, "Physics")

    # Saving data to file
    FileStorage.save_to_json()

if __name__ == "__main__":
    main()
```

This `main.py` file does the following:

1. Imports the necessary classes `FileStorage`, `Person`, and `Student`.
2. Defines a `main()` function to demonstrate the usage.
3. Reads data from the JSON file using `FileStorage.read_from_json()`.
4. Creates instances of `Person` and `Student` classes.
5. Saves the updated data to the JSON file using `FileStorage.save_to_json()`.