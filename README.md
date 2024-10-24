# spaghetti_code
### How to run/Як запустити
### How to Open Code in Visual Studio 2022 (English)

1. **Open Visual Studio 2022**: Launch the application on your computer.
2. **Open Existing Project**: Click on "Open a project or solution" on the start page or go to `File > Open > Project/Solution` from the menu.
3. **Select Your Project**: Navigate to the folder where your project (.sln file) is located. Select the file and click "Open."
4. **Access Source Files**: In the Solution Explorer (usually on the right side), expand the project folder to find your source files (e.g., `hvhb1ghch.cpp`).
5. **Edit Your Code**: Double-click on the desired source file to open it in the editor for editing.

---

### Як відкрити код у Visual Studio 2022 (Українською)

1. **Відкрийте Visual Studio 2022**: Запустіть програму на вашому комп'ютері.
2. **Відкрити існуючий проект**: Натисніть "Відкрити проект або рішення" на стартовій сторінці або перейдіть у `Файл > Відкрити > Проект/Своє рішення` з меню.
3. **Виберіть свій проект**: Перейдіть до папки, де знаходиться ваш проект (.sln ). Виберіть файл і натисніть "Відкрити."
4. **Доступ до вихідних файлів**: У Провіднику рішень (зазвичай справа) розгорніть папку проекту, щоб знайти ваші вихідні файли (наприклад, `hvhb1ghch.cpp`).
5. **Редагуйте свій код**: Двічі клацніть на потрібний вихідний файл, щоб відкрити його в редакторі для редагування.

### ENG
Program for competition in the worst code
### Code Documentation

This program performs password manipulation, random failure simulation, and character encoding using various functions, delays, and random number generation. It processes user input and transforms it based on a set of random values and conditions, outputting a modified password-like string.

#### Key Components:

1. **Recursion and String Manipulation**:
   - The code includes a recursive function that adjusts an integer value based on the length of a character array. This is used to manage password-related logic, modifying the input string as part of the overall encoding process.

2. **Random Number Generation**:
   - Random numbers are heavily used throughout the program, both for simulating potential failures and for creating randomness in the password transformation. This randomness introduces unpredictability into the output.

3. **Delays and Timed Execution**:
   - The program uses `std::this_thread::sleep_for` to introduce delays, simulating processing time and adding a dynamic element to the character encoding process. The delays are used to stagger output and simulate complex computations.

4. **Error Simulation**:
   - Random failures are simulated by generating a random number and checking whether it matches specific conditions. If certain failure conditions are met, the program outputs an error message and terminates early.

5. **Dynamic Memory Allocation**:
   - The program allocates memory dynamically for processing and modifying the user-inputted string. Once processed, the program outputs the transformed characters and safely deallocates the memory afterward.

6. **User Input**:
   - The program prompts the user to enter a password, which is then transformed and output character-by-character with added delays, making it feel like each character is processed in real time.

#### Libraries Used:
- `iostream` for input/output operations.
- `random` for random number generation.
- `cstring` for string manipulation.
- `ctime` for seeding the random number generator with the current time.
- `thread` and `chrono` for introducing delays into the program’s execution.
### UKR
### Документація до коду

Ця програма виконує маніпуляцію паролем, симуляцію випадкових збоїв та кодування символів за допомогою різних функцій, затримок і генерації випадкових чисел. Вона обробляє введення користувача та перетворює його на основі набору випадкових значень і умов, виводячи модифікований рядок, схожий на пароль.

#### Основні компоненти:

1. **Рекурсія та маніпуляція рядками**:
   - Код включає рекурсивну функцію, яка коригує значення цілого числа на основі довжини масиву символів. Це використовується для управління логікою, пов'язаною з паролем, змінюючи вхідний рядок як частину загального процесу кодування.

2. **Генерація випадкових чисел**:
   - Випадкові числа активно використовуються протягом всієї програми як для симуляції можливих збоїв, так і для створення випадковості в процесі перетворення пароля. Це додає непередбачуваності виведенню.

3. **Затримки та виконання з часом**:
   - Програма використовує `std::this_thread::sleep_for` для введення затримок, симулюючи час обробки та додаючи динамічний елемент до процесу кодування символів. Затримки використовуються для поетапного виведення і симуляції складних обчислень.

4. **Симуляція помилок**:
   - Випадкові збої симулюються шляхом генерації випадкового числа та перевірки, чи відповідає воно певним умовам. Якщо виконуються певні умови збою, програма виводить повідомлення про помилку і завершує роботу.

5. **Динамічне виділення пам'яті**:
   - Програма динамічно виділяє пам'ять для обробки та модифікації введеного користувачем рядка. Після обробки програма виводить змінені символи і безпечно вивільняє пам'ять після завершення.

6. **Введення користувача**:
   - Програма запитує користувача ввести пароль, який потім перетворюється і виводиться символ за символом з додатковими затримками, створюючи враження, що кожен символ обробляється в реальному часі.

#### Використані бібліотеки:
- `iostream` для операцій вводу/виводу.
- `random` для генерації випадкових чисел.
- `cstring` для маніпуляції рядками.
- `ctime` для ініціалізації генератора випадкових чисел поточним часом.
- `thread` та `chrono` для введення затримок у виконання програми.
Tests/тести
![image](https://github.com/user-attachments/assets/6e61ff21-bf7a-4d0e-a4c0-e3c3b7db16ce)



![image](https://github.com/user-attachments/assets/2dbe9604-2d3f-4b77-a74a-185bd3503e9a)

