# C Systems Foundation

Bu repo, C öğrenme sürecini **başlangıçtan mini-proje seviyesine** kadar sistemli şekilde ilerletmek için tasarlandı.  
This repository is designed to guide C learning **from beginner fundamentals to mini-project level** in a structured way.

## 🎯 Repo Amacı / Repo Goal
- Konuları dağınık değil, tek bir büyüyen yapı içinde toplamak.
- Teori + çalışan örnek + uygulamalı senaryo yaklaşımı ile kalıcı öğrenme sağlamak.
- Kod yazarken sadece "doğru sonuç" değil, "okunabilirlik, güvenlik, sürdürülebilirlik" alışkanlığı kazandırmak.
- Build/run/debug döngüsünü gerçekçi şekilde öğretmek.

## 🌍 Dil Yapısı / Language Structure
- Türkçe içerik: [`tr/README.md`](tr/README.md)
- English content: [`en/README.md`](en/README.md)
- TR öğrenme sırası: [`tr/LEARNING_PATH.md`](tr/LEARNING_PATH.md)
- EN learning sequence: [`en/LEARNING_PATH.md`](en/LEARNING_PATH.md)

## 🧭 Bu repoda neler öğreneceksin? / What you'll learn
- C temelleri: değişkenler, veri tipleri, formatlı çıktı, input
- Kontrol akışı: if-else, switch, döngüler
- Diziler, fonksiyonlar, algoritma mantığı
- Pointer, struct, dinamik bellek yönetimi
- Dosya işlemleri ve kalıcılık (persistence)
- Problem çözme ve mini proje geliştirme

## 🛠 Öğrenme Yöntemi / How to use this repo
1. `LEARNING_PATH.md` sırasını takip et.
2. Her dosyayı derle ve çalıştır.
3. Kodun çıktısını tahmin et, sonra çalıştırıp karşılaştır.
4. Aynı örneğin küçük varyasyonlarını kendin yaz.
5. Hata aldığında debugger ve not dosyalarını kullan.

## ⚠️ Dikkat Edilecek Noktalar / Best Practices
- `scanf` dönüş değerini kontrol et.
- String input için `fgets` tercih et.
- `malloc/calloc` sonrası `NULL` kontrolü yap.
- `free` sonrası pointer'ı `NULL` yapmak iyi pratiktir.
- Kodu küçük fonksiyonlara bölmek okunabilirliği artırır.

## 🚀 Hedef Profil
Bu repo, hem yeni başlayan öğrenciye hem de temelini güçlendirmek isteyen junior mühendise göre hazırlandı.
