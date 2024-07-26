# Libft

Libft, C programlama dilinde sıklıkla ihtiyaç duyulan çeşitli standart kütüphane fonksiyonlarının yeniden yazılmasını ve ek yardımcı fonksiyonların geliştirilmesini amaçlayan bir projedir. Bu kütüphane, özellikle C dilinde temel veri yapıları ve algoritmaları anlamak isteyen öğrenciler ve geliştiriciler için iyi bir başlangıç noktasıdır.

## Proje Hakkında

C dilinde standart kütüphane (stdlib, string vb.) fonksiyonlarına alternatifler geliştirerek, dilin temel yapı taşlarını ve işlevselliğini daha iyi anlamak hedeflenmektedir. Libft, temel C fonksiyonlarını yeniden yazmayı ve bu fonksiyonları kullanarak yeni işlevler geliştirmeyi içerir.

### Temel Amaçlar

- **Standart Fonksiyonlar:** C dilinin standart kütüphane fonksiyonlarının nasıl çalıştığını anlamak ve bunları sıfırdan yazmak.
- **Bellek Yönetimi:** Dinamik bellek tahsisi ve yönetimi konusunda deneyim kazanmak.
- **Veri Yapıları:** Bağlı liste gibi veri yapılarının uygulanmasını öğrenmek.
- **Modüler Kodlama:** Büyük projeleri modüler yapıda kodlama pratiği yapmak.
## İçerik

- [Kurulum](#kurulum)
- [Fonksiyonlar](#fonksiyonlar)
- [Kullanım](#kullanım)

# Kurulum

Libft'i bilgisayarınıza klonlamak ve derlemek için aşağıdaki adımları izleyebilirsiniz:


## Projeyi klonlayın
git clone https://github.com/Hsametk/Libft.git

## Proje dizinine gidin
cd Libft

## Kütüphaneyi derleyin
make all 

# Fonksiyonlar
Libft kütüphanesi, aşağıdaki gibi pek çok fonksiyonun kendi implementasyonunu içerir:

## String Fonksiyonları:

- ft_strlen: Bir stringin uzunluğunu döndürür.
- ft_strdup: Bir stringin bir kopyasını oluşturur.
- ft_strjoin: İki stringi birleştirir.
 
## Bellek Fonksiyonları:

- ft_memset: Bir bellek alanını belirli bir bayt ile doldurur.
- ft_memcpy: Bir bellek alanını başka bir alana kopyalar.
  
## Karakter Kontrol Fonksiyonları:

- ft_isalpha: Bir karakterin alfabetik olup olmadığını kontrol eder.
- ft_isdigit: Bir karakterin rakam olup olmadığını kontrol eder.

## Liste Fonksiyonları:

- ft_lstnew: Yeni bir liste elemanı oluşturur.
- ft_lstadd: Bir elemanı listenin başına ekler.

# Kullanım

Libft, kendi projelerinizde ihtiyaç duyduğunuz çeşitli yardımcı fonksiyonları içerir. Kütüphaneyi kullanmak için, derledikten sonra oluşturulan libft.a dosyasını projenize dahil edin ve aşağıdaki gibi kullanın:

```c
#include "libft.h"

int main() {
    char *str = ft_strdup("Merhaba, Dünya!");
    printf("%s\n", str);
    free(str);
    return 0;
}
```
# Libft
Libft is a project aimed at reimplementing various standard library functions commonly needed in the C programming language, along with developing additional helper functions. This library serves as a great starting point for students and developers who want to understand basic data structures and algorithms in C.

## About the Project
The goal of Libft is to develop alternatives to standard library functions (like those in stdlib, string, etc.) in C, to better understand the fundamental building blocks and functionality of the language. The project involves rewriting basic C functions and using them to develop new functionalities.

### Main Objectives
- **Standard Functions:** Understand how standard library functions in C work and rewrite them from scratch.
- **Memory Management:** Gain experience in dynamic memory allocation and management.
- **Data Structures:** Learn to implement data structures such as linked lists.
- **Modular Coding:** Practice coding large projects in a modular structure.

# Contents

- [Installation](#installation)
- [Functions](#functions)
- [Usage](#usage)

# Installation
To clone and compile Libft on your computer, follow these steps:

## Clone the Project
git clone https://github.com/Hsametk/Libft.git

## Navigate to the Project Directory
cd Libft

## Compile the Library
make all

# Functions
The Libft library contains implementations of various functions, including:

## String Functions
- ft_strlen: Returns the length of a string.
- ft_strdup: Creates a copy of a string.
- ft_strjoin: Joins two strings.
## Memory Functions
- ft_memset: Fills a memory area with a specified byte.
- ft_memcpy: Copies a memory area to another area.
# Character Check Functions
- ft_isalpha: Checks if a character is alphabetic.
- ft_isdigit: Checks if a character is a digit.
# List Functions
- ft_lstnew: Creates a new list element.
- ft_lstadd: Adds an element to the beginning of a list.

# Usage
Libft includes various helper functions you might need in your projects. To use the library, include the generated libft.a file in your project after compiling, and use it as shown below:

```c
#include "libft.h"

int main() {
    char *str = ft_strdup("Hello, World!");
    printf("%s\n", str);
    free(str);
    return 0;
}
