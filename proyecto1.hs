--1) AAAAAAAAAAAAAAA
--a)
esCero :: Int -> Bool
esCero x = (x == 0) 

--b)
esPositivo :: Int -> Bool 
esPositivo x = (x > 0) 

--c)
esVocal :: Char -> Bool 
esVocal x = (x == 'a') || (x == 'e') || (x == 'i') || (x == 'o') || (x == 'u')


--2)
--a)
paratodo :: [Bool] -> Bool 
paratodo [] = True
paratodo (x : xs) = x && paratodo xs 

--b)
sumatoria :: [Int] -> Int 
sumatoria [] = 0
sumatoria (x : xs) = x + sumatoria xs 

--c)
productoria :: [Int] -> Int 
productoria [] = 1
productoria (x : xs) = x * productoria xs 

--d)
factorial :: Int -> Int
factorial 0 = 1
factorial x = x * factorial ( x - 1) 

--e)
promedio :: [Int] -> Int 
promedio xs  = div (sumatoria xs) (length xs) 


--3)
--a)
pertenece :: Int -> [Int] -> Bool 
pertenece y [] = False 
pertenece y (x : xs) = (y == x) || pertenece y xs 

--4)
--a)
paratodo' :: [a] -> (a -> Bool) -> Bool 
paratodo' [] f = True 
paratodo' (x : xs) f = f x && paratodo' xs f 

--b)
existe' :: [a] -> (a -> Bool) -> Bool 
existe' [] f = False 
existe' (x : xs) f = f x || existe' xs f 

--c) 
sumatoria' :: [a] -> (a -> Int) -> Int 
sumatoria' [] f = 0
sumatoria' (x : xs) f = (f x) + sumatoria' xs f 

--d)
productoria' :: [a] -> (a -> Int) -> Int 
productoria' [] f = 1
productoria' (x : xs) f = (f x) * productoria' xs f 


--5)
paratodo2 :: [Bool] -> Bool 
paratodo2 xs = paratodo' xs id 


--6)
--a)
todosPares :: [Int] -> Bool 
todosPares (x : xs) = paratodo' xs even 

--b)
esMultiplo :: Int -> Int -> Bool 
esMultiplo y x = (mod y x) == 0

hayMultiplo :: Int -> [Int] -> Bool
hayMultiplo y xs = existe' xs (esMultiplo y) 

--c)
sumaCuadrados :: Int -> Int 
sumaCuadrados n = sumatoria' [0..n] (^2) 

--d)
factorial' :: Int -> Int 
factorial' x = productoria' [1..x] id  

--e)
esPar :: Int -> Int 
esPar x | (mod x 2 == 0) = x
        | otherwise = 1

multiplicaPares :: [Int] -> Int 
multiplicaPares xs = productoria' xs esPar 


--7)
--a) 
-- La función map y filter son parecidas pero no hacen lo mismo.
-- Map: toma 2 argumentos de los cuales 1 es una función. Luego map aplica la función a cada 
-- elemento de la lista y te devuelve la lista modificada.
-- Filter: toma 2 argumentos de los cuales 1 es un predicado. Luego filter aplica el predicado
-- a cada elemento de la lista y te devuelve la lista con los elementos que sí cumplen e predicado.

--b)
-- map succ [1,-4,6,2,-8] donde succ = n+1 esto equivale a sumarle 1 a cada elemento de la lista
-- es equivalente a esta función-- map (+1) [1,-4,6,2,-8]

--c)
-- filter esPositivo [1,-4,6,2,-8] devolverá una lista solo con los elementos que son positivos y
-- esquivale a esta función-- filter (>0) [1,-4,6,2,-8]


--8)
--a) 
duplicar :: [Int] -> [Int]
duplicar [] = [] 
duplicar (x : xs) = (2*x) : duplicar xs 

--b)
duplicar':: [Int] -> [Int]
duplicar' xs = map (*2) xs 


--9)
--a)
sonPares :: [Int] -> [Int] 
sonPares [] = [] 
sonPares (x:xs) | (mod x 2 == 0) = x : sonPares xs 
                | otherwise = sonPares xs 

--b)
sonPares' :: [Int] -> [Int] 
sonPares' xs = filter even xs 

--c)
multiplicaPares' :: [Int] -> Int 
multiplicaPares' xs = productoria' (sonPares' xs) id 


--10)
--a)
primIgualesA :: Eq a => a -> [a] -> [a] 
primIgualesA y [] = []
primIgualesA y (x:xs) | (y == x) = y : primIgualesA y xs
                      | otherwise = []

--b)
primIgualesA' :: Eq a => a -> [a] -> [a]
primIgualesA' y (x:xs) = takeWhile (== y) xs


--11)
--a)