# Preprocessor

C preprocessor, derleme öncesi çalışan aşamadır. `#include`, `#define`, `#if`
ve include guard gibi directive'leri işler.

## Neden Önemlidir?

Preprocessor şunlar için kullanılır:

- header dosyalarını dahil etmek
- sabitler tanımlamak
- küçük macro'lar yazmak
- platforma özel kodu açıp kapatmak
- header'ın iki kez include edilmesini önlemek
- debug veya feature bazlı kod bloklarını derlemek

## Include Directive

Standart veya sistem header'ları için angle bracket kullan:

```c
#include <stdio.h>
```

Proje header'ları için tırnak kullan:

```c
#include "math_utils.h"
```

## Include Guard

Header dosyaları kendini birden fazla include edilmeye karşı korumalıdır:

```c
#ifndef CONFIG_H
#define CONFIG_H

/* declarations */

#endif
```

`#pragma once` yaygın desteklenir, ama include guard taşınabilir C çözümüdür.

## Object-Like Macro

Object-like macro'ları dikkatli kullan:

```c
#define MAX_USERS 100
```

Tipli sabit gerektiğinde mümkünse `const` nesne tercih et. Macro'nun tipi yoktur;
derleme öncesi metin olarak değiştirilir.

## Function-Like Macro

Function-like macro tehlikeli olabilir çünkü argüman birden fazla kez
çalıştırılabilir:

```c
#define SQUARE(x) ((x) * (x))
```

`SQUARE(i++)`, `i` değerini iki kez artırır. Gerçekten macro gerekmiyorsa
fonksiyon tercih et.

## Conditional Compilation

```c
#ifdef DEBUG
printf("debug: value=%d\n", value);
#endif
```

Debug logging, platform ayrımı ve opsiyonel feature blokları için kullanışlıdır.

## Sık Hatalar

- Macro içinde parantez unutmak.
- Argümanı birden fazla değerlendiren macro yazmak.
- Header'da sadece declaration gerekirken definition koymak.
- Include guard unutmak.
- `enum`, `const` veya fonksiyon daha netken macro kullanmak.
- Fazla logic'i preprocessor arkasına saklamak.

## Bu Klasördeki Dosyalar

- `macro_constants_and_guards.c`: sabitler ve compile-time flag'ler.
- `macro_pitfalls.c`: riskli macro örnekleri ve daha güvenli alternatifler.
- `conditional_compilation.c`: debug ve platform benzeri dallar.

## Gerçek Hayatta Kullanım

Preprocessor portable library, embedded firmware, debug instrumentation, feature
flag, build configuration ve header organizasyonunda sık görülür.

## Alıştırmalar

1. Yeni bir header dosyasına include guard ekle.
2. Riskli bir macro'yu gerçek fonksiyonla değiştir.
3. Bir örneği `-DDEBUG` ile ve onsuz derle.
4. Macro sabiti yaz ve neden tipi olmadığını açıkla.
5. Declaration içeren header ve definition içeren `.c` dosyası oluştur.

## Tekrar Soruları

1. Compiler `#define` macro'sunu görmeden önce ne olur?
2. Header dosyalarında include guard neden gerekir?
3. `SQUARE(i++)` macro ile neden tehlikelidir?
4. Conditional compilation ne zaman kullanılır?
5. Macro'lar debug etmeyi neden zorlaştırabilir?

---

| Geri | Sıradaki |
| --- | --- |
| [Öğrenme Yoluna Dön](../LEARNING_PATH.md) | [Sıradaki: macro_constants_and_guards.c](macro_constants_and_guards.c) |
