#数値オブジェクト　 -Numeric Class
x = 10 #整数値
y = 20.5 #実数値
z = 1/3 # 文数値　Retional(1,3)

=begin
アンダーバーを無視する仕様があるので
100_000_000などがあり。
=end

# + - * / % **の計算ができる。
p x % 3 #1
p y ** 3 #1000
p z * 2 #2/3

#自己代入
x = x+5
#は
X += 5
#と表せる
p x #15
#ラウンドメソッド四捨五入
p y .round