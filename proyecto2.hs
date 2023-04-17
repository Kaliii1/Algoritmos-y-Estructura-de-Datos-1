--1) a) 
data Carrera = Matematica | Fisica | Computacion | Astronomia deriving (Eq, Show) 

--b)
titulo :: Carrera -> String
titulo Matematica = "Licenciatura en Matematica"
titulo Fisica = "Licenciatura en Fisica"
titulo Computacion = "Licenciatura en Computacion"
titulo Astronomia = "Licenciatura en Astronomia"

--c) y 2 a)
data NotaBasica = Do | Re | Mi | Fa | Sol | La | Si deriving (Ord, Eq, Show)

--d)
cifradoAmericano :: NotaBasica -> Char 
cifradoAmericano Do = 'C'
cifradoAmericano Re = 'D'
cifradoAmericano Mi = 'E'
cifradoAmericano Fa = 'F'
cifradoAmericano Sol = 'G'
cifradoAmericano La = 'A'
cifradoAmericano Si = 'B' 

--3)a)
minimoElemento :: (Ord a) => [a] -> a 
minimoElemento [a] = a  
minimoElemento (x:xs) = min x (minimoElemento xs) 


--b)
minimoElemento':: (Ord a, Bounded a) => [a] -> a 
minimoElemento' [] = maxBound 
minimoElemento' (x:xs) = min x (minimoElemento' xs)
--en ghci se prueba especificando el tipo, ej: minimoElemento' ([1,4,10]:: [Int])


--c)
--ghci> minimoElemento [Fa, La, Sol, Re, Fa]
-- Re

--4)a)
type Ingreso = Int 
data Cargo = Titular | Asociado | Adjunto | Asistente | Auxiliar deriving (Eq,Show)
data Area = Administrativa | Ensenanza | Economica | Postgrado deriving (Eq, Show)
data Persona = Decan   
            | Docente Cargo 
            | NoDocente Area 
            | Estudiante Carrera Ingreso deriving (Eq, Show) 


--b) El tipo constructor de Docente toma un Cargo y todo eso me devuelve una Persona.

--c)
cuantos_doc::[Persona] -> Cargo -> Int 
cuantos_doc [] c = 0
cuantos_doc (x:xs) c | (x == Docente c) = 1 + cuantos_doc xs c 
                     | otherwise = cuantos_doc xs c 

--d)
cuantos_doc'::[Persona] -> Cargo -> Int
cuantos_doc' xs c = length (filter (==Docente c) xs) 


--5)a)
data Alteracion = Bemol | Sostenido | Natural 
data NotaMusical = Nota  NotaBasica  Alteracion
sonido :: NotaBasica -> Int 
sonido Do = 1
sonido Re = 3
sonido Mi = 5
sonido Fa = 6 
sonido Sol = 8
sonido La = 10
sonido Si = 12


--b)
sonidoCromatico :: NotaMusical -> Int 
sonidoCromatico (Nota n Bemol) = (sonido n) - 1
sonidoCromatico (Nota n Sostenido) = (sonido n) + 1
sonidoCromatico (Nota n Natural) = sonido n 

--c)
instance Eq NotaMusical
    where nota1==nota2 = sonidoCromatico nota1 == sonidoCromatico nota2

--d)
instance Ord NotaMusical
    where nota1 <= nota2 = sonidoCromatico nota1 <= sonidoCromatico nota2



--6) a)
primerElemento :: [a] -> Maybe a 
primerElemento [] = Nothing 
primerElemento (x:xs) = Just x 


--7) a)
data Cola = VaciaC | Encolada Persona Cola 

atender :: Cola -> Maybe Cola 
atender VaciaC = Nothing 
atender (Encolada p c) = Just c


--b)
encolar :: Persona -> Cola -> Cola 
encolar up (Encolada p c) = Encolada up (Encolada p c) 


--c)
busca :: Cola -> Cargo -> Maybe Persona
busca VaciaC g = Nothing
busca (Encolada p c) g | (p == Docente g) = Just p 
                       | otherwise = busca c g


--d) Cola se parece el tipo Listas, es recursivo y también es polimórfico.


--8) a)
data ListaAsoc a b = Vacia | Nodo a b ( ListaAsoc a b ) deriving Show

type GuiaTelefonica = ListaAsoc (String, String) (Int, Int) 



--b) 1)
la_long :: ListaAsoc a b -> Int 
la_long Vacia = 0
la_long (Nodo a b c) = 1 + la_long c 


--2)
la_concat :: ListaAsoc a b -> ListaAsoc a b -> ListaAsoc a b 
la_concat Vacia lista = lista
la_concat (Nodo a1 b1 d) lista2 = Nodo a1 b1 (la_concat d lista2)


--3)
la_agregar :: Eq a => ListaAsoc a b -> a -> b -> ListaAsoc a b
la_agregar Vacia clave valor = Nodo clave valor Vacia
la_agregar (Nodo c v restante) clave valor | (c == clave) = Nodo c valor restante 
                                           | otherwise = la_agregar restante clave valor


--4) 
la_pares :: ListaAsoc a b -> [(a, b)]


