# #42 Main Education”

—————————————————————————————————————————

⚡MAKEFILE 👇—————————————————————————————————————————

⚡ Libft.a’yı “NAME”e tanımladım aşağıda’da $(NAME)’i “all”a atadım all dediğim için hepsini kapsar.

Ve sistem “NAME” ile başlar.

⚡ $(wildcard *c)’yi SRCS(sources)’e atadım. Yani “wildcard” fonksiyonuyla bütün .c dosyalarını “SRCS” değişkenine atadık.

     “*c” Sol tarafta ne olursa olsun bütün .c uzantılı dosyaları alır.

⚡ “WILDCARD” = O dizindeki bütün dosyaları listelemek için kullanılır.

⚡ “$” işaretinin iki farklı anlamı vardır birisi parantezin içinde hangi değişken adını yazdığımızda değişkenin değerini çağırırız. Diğer kullanımı da fonksiyon çağırmadır.

⚡ OBJS = “SRCS”da bulunan bütün c uzantılı dosyaları .o uzantılı dosya adlarına değiştirdik ve bunları “OBJS”e atadık.

⚡ Derleme shell komutunu “CC” olarak tanımladım shell komutunu değişkene atadık.

⚡ Shell komutunu tekrardan “”CCFLAGS” olarak tanımladık.

⚡ “PHONY” = Öncelikli çalıştırma işlemini yapar.Dizinde aramak yerine direkt kodu çalıştırır.Yani dosyamızın içinde eğer yazdığımız.(all, clean, fclean, re, bonus)’dan birisi varsa çalışmayacaktır.Öncelikli olarak tanımladığımız için “MakeFile” içinde bulup çalışacaktır.

⚡ $(NAME): $(OBJS) “OBJS” Dosyalarını “NAME”e kural olarak belirle.

ar rcs $(NAME) $(OBJS) = Yukarıda yazdığım kuralı da burada kullandım.Yani “NAME” olarak “LIBFT.A”ya çıktı verir.

⚡ %.o:%.c “%” Hepsini kapsıyor Shell komutu olduğu için “%” işareti kullanırız.

Alttaki de  $(CC) -c “ˆ” tek tek gez komutudur.Yani tek tek gezerek derliyor.

⚡ “:” tanımlama işaretidir.

⚡Clean’e rm-f ile (OBJS) ve (BONUS_OBJS) bu nesneleri silme komutunu tanımladım.

Sonrasında “clean”i de “fclean”e tanımladım “$(NAME)”de kini de sil dedim.Yani Libft.a’yı.

⚡“re”de rebuildden geliyor = yani silip “$(NAME)”i yeniden oluşturuyor.

⚡Subjects’de dediği gibi “OBJS” ve “BONUS_OBJS”i “bonus”a kural olarak belirliyoruz.

Sonrasında da çıktı olarak bize hepsini veriyor.”$(NAME)”e göre bize $(OBJS) ve $(BONUS_OBJS)

⚡“**ar rcs” Bir kitaplığı derlemek için “Makefile” kullanırken kullanacağınız en olası komuttur. r, kitaplık zaten mevcutsa, kitaplık içindeki eski dosyaları yeni dosyalarınızla değiştirin.c, mevcut değilse kütüphaneyi oluşturmak anlamına gelir.**

—————————————————————————————————————————

“LIBFT.H”

—————————————————————————————————————————

Typdef kullanarak struct yapısını önce “s_list” olarak çağırdık.

“Typdef bir tipi başka bir ad ile anmamızı sağlar”

Typdef kullanarak struct yapısını s_split_next olarak çağırdık.

Sonradan tanımlı bir tip olduğunu belirtmek için “_t” kullanıyoruz.

“CATEGORY”

—————————————————————————————————————————

**🚀**FT_IS 👇—————————————————————————————————————————

1-#Isalnum” 

**🚀**Numerik bir karakter olup olmadığını gösterir sayıysa ya da alfabetik bir karakter ise 1 değilse 0 dönderir.

2-#Isalpha”

**🚀**Alfabetik bir karakter ise yani “A” ile “Z” ya da “a” ile “z” arasında ise 1 değilse 0 dönderir.

3-#Isascii”

**🚀**Ascii’de bir karakter olup olmadığına bakar ascii’de bir karakterse 1 değilse 0 dönderir.

4-#Isdigit”

**🚀**Bir rakamsa 1 değilse 0 dönderir.

5-#Isprint”

**🚀**Ascii’de yazdırılabilir bir karakterse 1 değilse 0 dönderir.

—————————————————————————————————————————

🌌FT_MEM 👇

—————————————————————————————————————————

1-#Calloc”

//**Bellek ayırıp ayrılan belleğe 0 dolduruyor**//

“C'deki calloc() işlevi, belirtilen miktarda bellek ayırmak ve ardından onu sıfıra başlatmak için kullanılır. İşlev, daha sonra istenen türe dönüştürülebilecek olan bu bellek konumuna bir geçersiz işaretçi döndürür. İşlev, tahsis edilecek bellek miktarını toplu olarak belirten iki parametre alır.”

🌌Count benim Tahsis edilecek eleman sayımdır.

🌌Size ise benim elemanlarımın boyutudur.

🌌Eğer ptr “NULL”a eşitse “NULL” döndür.

🌌Bzero kullanarak da elemanların sayısı * elemanların boyutu kadar sansürle dedim ve kendisini döndürdüm.

2-#Memset”

//****Stringin belli bir kısmını sansürlüyor****/

🌌Elimde bir string, karakter ve uzunluk var.

String=abcdef               string=llllef

char=l

length=4

3-#Memmove”

//****s1 ve s2 ile örtüşmeyen n karakterlik geçici bir diziye kopyalıyor sonra o diziden n karakterlik kadar kopyalanıyormuş gibi gösteriliyor****//

Açıklama : İki ayrı bellek adresinde saklanan src ve dest dizinlerini bellekte çakışmalarını önleyerek birbirine aktarım (Kopyalama) yapar çakışmalar src ve dest teki bilgilerin birbiri üzerine binmesine ve bozulmaya neden olur.

4-#Memcpy”

//****n kadar karakteri s2 'den s1'e taşır üst üste aynı karakterler geliyorsa fonksiyon tanımsız.****//

🌌Eğer verdiğim karakter ya da src ile dest

5-#Memchr”

//****C’nin ilk örneği için stringin ilk n baytını tarar****//

🌌Karakter belirliyoruz adrese gidip içinde arıyor sonra bellek adresini dönderiyor.

🌌İ’nin n’den küçük olma durumunda fonksiyon başlıyor çünkü i yani sayacımız arayacağımız karakteri geçmiş ise o karakteri bulamayız.

🌌Eğer aradğımız karakterin adresine geldiyse yani aradığım karaktere eşitse kendisini dönderiyoruz.

🌌Ve i’yi arttırıp return null dönderiyoruz.

6-#Memcmp”

//****bellek alanı str1 ve bellek alanı str2'nin ilk n baytını karşılaştırır.**//**

🌌Size_t:Asla negatif değer alamaz int’i tanımlıyoruz.

🌌i ‘nin n’den küçük olduğu durumda yani bizim verdiğimiz n kadar durumundan küçük olduğu

durumda eğer s1+i = değilse s2+i ye bunların farkını döndürüyoruz asciideki karakterlerin arasındaki farkı dönderiyoruz.

🌌Bu fonksiyon bellekte bakıyor aralarındaki farka.

—————————————————————————————————————————

👨‍🚀FT_STR👇

—————————————————————————————————————————

7-#Strchr” 

//****Bize verilen stringin belli bir karakterden sonrasını alıyoruz****//

👨‍🚀Karakteri stringin içinde arıyoruz varsa onun referansını döndürüyoruz bulduktan sonra ondan sonrasını yazdırıyoruz.

👨‍🚀İçinde yoksa null döndürüyoruz.

*Const char’ı direkt return edemediğimiz için char*’a çeviriyor.

*Size_t’ de bir int’dir.Size_t’de sadece pozitif değer alabilir.Asla negatif bir sayı alamıyor.

8-#Strdup”

//****Stringin yerini pointer’a vermek****//

👨‍🚀2 tane değişken tanımlıyoruz *twin pointer olarak tanımlıyoruz sonrasında twinde yer açıyoruz.Malloc ile null’a denk gelmemesi için uzunluğunun bir fazlası kadar.

👨‍🚀i = 0 yapıyoruz.Stringim son karakter olan “NULL”a eşit değilse stringimi twin’e [atıyorum.](http://atıyorum.ve)

👨‍🚀Ve “i”yi arttırıyorum attıktan sonra twindeki karakterim son karaktere eşit olduğunda twindeki stringimi dönüyorum.

9-#Strrchr”

👨‍🚀Bize *string veriyor önce int’le i tanımlıyoruz ve 0’a eşitleyip arttırıyoruz.Dizenin uzunluğunu ölçmüş oluyoruz.Bu fonksiyon sondan geriye doğru arama yapıyor.Mesela c’miz a olsun kelimemiz de araba olsun “araba” kelimesinde gözüken en son a’yı dönderir.C’nin en son gözüktüğü yerin adresini istiyor bizden o yüzden en son gördüğü yerdeki adrese eşitliyor ve uzunluğunu return ediyor.sonra geriye doğru gelip diğer karakterlere null koyuyor.

10-#Strdup”

//****S dizesinin bir kopyası olan yeni bir dizeye bir işaretçi döndürür.Yeni dizge için bellek malloc ile elde edilir****//

*Size_t’ de bir int’dir.Size_t’de sadece pozitif değer alabilir.Asla negatif bir sayı alamıyor.

👨‍🚀2 tane değişken tanımlıyoruz malloc ile yer açıyoruz uzunluğunun bir fazlası kadar eğer twine eşit değilse yani o kadar yer ayrılmadıysa null döndürüyor.

👨‍🚀Sonrasında i’mizi 0’a eşitleyip son karaktere eşit değilse dizemizi twin’in içine kopyalayıp i’mizi arttırıyoruz onun içinde de sayıyor.Kopyaladığımız dize son karaktere eşit değilse elde ettiğimiz dizeyi dönderiyoruz.

11-#Strjoin”

//****2 tane stringi aralarında bir boşluk olacak şekilde bağlayarak tek bir dize olarak gözükmesini sağlar****//

👨‍🚀Eğer s1 dizesi yoksa null dönderiyor.

👨‍🚀Sonra malloc ile *str’nin içinde s1 ile s2 nin uzunluğunun bir fazlası kadar yer açıyor.Eğer yer açılmadıysa null dönderiyor.

👨‍🚀Sonra i’yi 0’a eşitleyip s1’i str’nin içine atıp i’yi arttırıyoruz.

👨‍🚀Sonra i’yi tekrar 0’a eşitleyip s2’yi de str’nin içine atıyoruz üst üste gelmemesi için j’yi de arttırmış oluyoruz.

👨‍🚀Son dize uzunluğumuz null’a eşit değilse dizenin kendisini dönderiyoruz.

12-#Strlen”

//****Stringimizin uzunluğunu veren fonksiyondur****//

*Size_t’ de bir int’dir. Size_t’de sadece pozitif değer alabilir.Asla negatif bir sayı alamıyor.

👨‍🚀İ değerimizi 0’a eşitliyoruz. i’yi arttırarak stringin uzunluğunu buluyoruz.

13-#Substr”

//****Bir stringin belli bir kısmından alt metin almamızı sağlar****//

👨‍🚀2 tane değişken tanımladığımızda Bilgisayar kelimesi mesela 2,5 değerler verdik 

“lgisa” alır bize.

👨‍🚀Eğer içi boşsa “0” döndürür.

14-#Strncmp”

//**Ascii’ye göre 2’dizedeki n karakterin karşılaştırması yapılır.**//

//****Stringin aynı mı olduğuna bakıyor ve farkını geri dönderiyor 2 tane stringin içndeki şeyler aynı ise 0 dönderir****//

“**strncmp işlevi, s1 ile gösterilen nesnenin ilk n karakterinin, gösterilen nesnenin ilk n karakterinden küçük, ona eşit veya daha büyük olmasına bağlı olarak negatif, sıfır veya pozitif bir tamsayı döndürür. s2'ye kadar”.**

👨‍🚀Eğer n 0’a eşitse 0 dönderiyoruz.

👨‍🚀n ‘i den büyük durumunda s1 0’a eşitse veya s2 0’a eşit değilse yani s1 daha küçükse -1 döndürüyoruz.

👨‍🚀Eğer n eşit değilse 0’a i yani sayacımız dize uzunluğunun 1 eksiğinden küçükse veya s1 son karaktere eşit değilse veya s2 son karaktere eşit değilse s1 ile s2 eşit olma durumunda i++;

👨‍🚀Yani i’yi arttırıp aramaya devam ediyoruz.

👨‍🚀Sonrasında İki dizenin farkını dönüyoruz.Sonra i’yi arttırıp devam ediyoruz.

👨‍🚀Sonra 0 döndürüyoruz.

15-#Strlcat”

//****İki dizeyi belli karakter kadar birleştiriyor****//

👨‍🚀Int main’de n = 2 dersek mesela Elimizde 2 string var s1 = emre, s2 = çolak n kadar 2.dizeden alıp birleştirdiği için elde ettiğimiz yeni string “emreço” olur.

👨‍🚀4 tane değişken tanımlıyoruz 2 tanesi string olarak. 1.stringin uzunluğunu saydırıyoruz

👨‍🚀2.stringin uzunluğunu saydırıyoruz.

👨‍🚀i = 0 diyoruz.

👨‍🚀j ‘yi dest_len’e eşitliyoruz.

👨‍🚀Eğer dest_len size - 1’den küçükse veya size ‘dan büyükse;

👨‍🚀src[i] ≠ değilse null’a veya destlen + i boyut - 1’den küçükse src’u dest’in içine at diyoruz.

sonrasında i ve j’yi arttırıyoruz.

👨‍🚀dest[j]’yi 0’a eşitliyoruz yani ilk karaktere geri dönüyor.

👨‍🚀Eğer destlen sizedan büyükse bunu size = liyoruz yani son durumdaki stringi elde edebilmek için 

sonrasında 2’stringin toplamını return ediyoruz.

16-#Calloc”

//****Bellek ayırıp ayrılan belleğe 0 dolduruyor****//

“**C'deki calloc() işlevi, belirtilen miktarda bellek ayırmak ve ardından onu sıfıra başlatmak için kullanılır. İşlev, daha sonra istenen türe dönüştürülebilecek olan bu bellek konumuna bir geçersiz işaretçi döndürür. İşlev, tahsis edilecek bellek miktarını toplu olarak belirten iki parametre alır.”**

👨‍🚀Count benim Tahsis edilecek eleman sayımdır.

👨‍🚀Size ise benim elemanlarımın boyutudur.

👨‍🚀Eğer ptr “NULL”a eşitse “NULL” döndür.

👨‍🚀Bzero kullanarak da elemanların sayısı * elemanların boyutu kadar sansürle dedim ve kendisini döndürdüm.

—————————————————————————————————————————

🌓FT_TO 👇

—————————————————————————————————————————

1-#Toupper”

//****Küçük Harfleri büyük yapar****//

🌓Aldığımız küçük harf ascii’de -32 değer yukarı giderek büyür.

2-#Tolower”

//****Büyük Harfleri küçük yapar****//

🌓Aldığımız büyük harf ascii’de +32 karakter aşağı giderek küçülür.

—————————————————————————————————————————

**🛸**FT_PUT 👇 

—————————————————————————————————————————

1-#Putnbr” 

**🛸**Eğer minimum değer’e eşitse direkt yazdırıyor.

**🛸**Değilse ve eğer 0’dan küçükse başına “-” yazar ardından sayıyı “-1” ile çarpıp onu da yazar.

**🛸**Eğer “9” dan büyükse;iki basamaklıysa 10’a böler ama recursive olarak tekrar başa atar aynı fonksiyona girerek yazdırır.

**🛸**Eğer değilse direkt modunu alıp 0’la toplayıp yazdırır.

2-#Putchar”

//****Eğer içi boşsa fonksiyondan çıkar değilse yazdırır.****//

—————————————————————————————————————————

**🪐**BONUS FUNCTION 👇

—————————————————————————————————————————

1-#Lstsize”

typedef struct s_list
{
void *content;
struct s_list *next;
} t_list;

**🪐**Biz t_list’i kısaltm olarak kullanıyoruz yani t_list yapısını kullandığımız da *content ve *next’de elimizde oluyor.

**🪐**content :Elementin içerdiği veri. void * tipinde olması istediğiniz türde veriyi
tutmanızı sağlar.
§next :Bir sonraki elementin adresini tutar eğer son elemensa NULL değerindedir.

//**Son listeye geldiğini “NULL”a eşit olduğunda anlarız geldiğinde ondan öncesini size olarak alırız**//

**🪐**Bir tane sayaç alıp 0’a eşitliyoruz eğer lst yani baş değilse ana kaynak başlangıç değilse direkt olarak “return(0)” dönderiyoruz.

**🪐**Olduğumuz lst eşit değilse “NULL” yani son elemana eşit değilse lst = lst→next diyip son elemanı arıyoruz “NULL”a yani son elemana eşit olana kadar aramaya devam ediyoruz.Son elemanı bulduğumuzda “(i)” size dönüyoruz.

2-#Lstnew”

“Malloc kullanarak memoryden yer ayırılır ve yeni”
element çıktı olarak verilir. Content değişkeni
‘content’ parametresinin değeri ile başlatılır.
Next değişkeni ise NULL değeri ile başlatılmalıdır.

**🪐**content = veriyi tutmamızı sağlar.

*content *first ilk adresi tanımlıyoruz.

**🪐**ilk adresin içinde yer açıyoruz.Bizim vericeğimiz veri kadar yer yoksa “NULL” döndürüyoruz

first’teki content’in [içi](http://içi.ne)ne yazıcağımız veriyi atıyoruz first’ün next’ide “NULL”ı göstersin diyoruz.Yani bir sonraki adres’i göstermesin gibi birşey diyoruz.

3-#Lstaddfront” 

//**Listenin başına yeni bir eleman ekler(new)**//

**🪐**Eğer new yoksa return etmiyoruz.

**🪐**Benim ilk elemanım bir sonraki eleman olarak *lst’i göstersin diyoruz ki bu bizim 1.elemanımız olabilsin.

**🪐**Artık listenin başı new olur.

4-#Lstaddback”

//**“new” elemanını listenin en sonuna ekler**//

**🪐**Lst içinde alan yoksa return; birşey yapma ekleyemeyiz
**🪐**Eleman yoksa new ekle ki tek eleman olduğu için baş ve son olsun dedik.
*lst’ime a dedim en baş elemana yani a’nın next’i “NULL”ı göstermediği durumda next’i **🪐**“NULL” gösterene kadar (işaret edene kadar) ara dedim bulduğu anda a’nın nexti’ne de new’i yerleştirdim.

5-#Lstdelone”

**🪐**Eğer lst yoksa döndürme lst’in işaret ettiği veri tutmamızı sağlayan content’i siliyoruz ve serbest bırakıyoruz.

6-#Lstlast”

**🪐**Eğer başta liste yoksa “NULL” döndürüyoruz.

Lst’in işaret ettiği sonraki data “NULL”ı işaret etmiyorsa

7-#Lstiter”

**🪐**t_list ile *tmp tanımlıyoruz eğer f yoksa ya da lst yoksa lst durumunda 

tmp yi lst’in işaret ettiği.

8-#Lstmap”

9-#Lstclear”
