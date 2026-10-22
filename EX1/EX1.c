 EX1

 Question (1)

  a = 6, b = 9, c = 14, flag = 1

    1) c = a + b || !flag
       
       14 == 6 + 9 || !1
       14 == 15 || 0
       14 == 15

       false

    2) a != 7 && flag || c >= 6

       6 != 7 && 1 || 14 >= 6
       6 != 7 && true || 14 >= 6
       true && true || 14 >= 6
       true || 14 >= 6

       true

    3) !(b <= 12) && a % 2 == 0

       !(9 <= 12) && 6 % 2 == 0
       !(true) && 6 % 2 == 0
       false && 6 % 2 == 0

       false

    4) !(a > 5 || c < a + b)

       !(6 > 5 || 14 < 6 + 9)
       !(true || 14 < 15)
       !(true || true)
       !(true)

       false
