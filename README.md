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
