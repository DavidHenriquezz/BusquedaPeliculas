# Base de Datos de Películas

## Descripción

Este sistema permite a los usuarios cargar una base de datos de películas, en el cual se podrá filtrar de diversas maneras para encontrar la deseada. Los usuarios pueden cargar la base de datos, buscar por ID, buscar por director, Buscar por género, buscar por década, buscar por rango de calificaciones y buscar por década y género.

## Cómo compilar y ejecutar

Dado que el sistema está diseñado para ser accesible y fácil de probar, recomendamos usar Repl.it para una rápida configuración y ejecución. Sigue estos pasos para comenzar:

1.- Visita Repl.it.

2.- Crea una cuenta o inicia sesión.

3.- Una vez en el inicio selecciona "New Repl" y elige "Import from GitHub".

4.- Pegar este link = https://github.com/DavidHenriquezz/Busqueda_Peliculas


5.- Repl.it clonará el repositorio y te preparará un entorno de ejecución.

6.- Aprete el boton "Run" para que el codigo se ejecute.

## Funcionalidades

### Funcionando correctamente:

- Cargar Películas.
- Buscar por ID.
- Buscar por director.
- Buscar por género.
- Buscar por década
- Buscar por rango de calificaciones.
- Buscar por década y género.

### A mejorar:

- Modificar la interfaz para que sea más amigable.
- Permitir que se añadan más peliculas.
- Mostrar las películas en algún orden (Alfabético, por ranking, entre otros).

### Posibles errores:

- Al ingresar el género o el director en minúsculas, no se encuentra. Se debe ingresar capitalizado (ejemplo: "Drama").
- La interfaz del programa se vuelve "loca" y muestra muchas cosas en menos de 1 segundo en las siguientes situaciones: Al ingresar un carácter que no es un número al buscar por década o rating, al ingresar una cantidad de caracteres mayor al permitido.

## Ejemplo de uso

**Paso 1: Cargar Películas**

Se comienza cargando la base de datos de las peliculas.
```
========================================
     Base de Datos de Películas
========================================
1) Cargar Películas
2) Buscar por id
3) Buscar por director
4) Buscar por género
5) Buscar por década
6) Buscar por rango de calificaciones
7) Buscar por década y género
8) Salir
Ingrese su opción: 1
ID: tt0068646, Título: The Godfather, Año: 1972
ID: tt0034583, Título: Casablanca, Año: 1942
ID: tt0061722, Título: The Graduate, Año: 1967
ID: tt0033467, Título: Citizen Kane, Año: 1941
ID: tt0050083, Título: 12 Angry Men, Año: 1957
ID: tt0047478, Título: Shichinin no samurai, Año: 1954
ID: tt0064116, Título: C'era una volta il West, Año: 1968
ID: tt0071315, Título: Chinatown, Año: 1974
ID: tt0110912, Título: Pulp Fiction, Año: 1994
ID: tt0032138, Título: The Wizard of Oz, Año: 1939
ID: tt0080684, Título: Star Wars: Episode V - The Empire Strikes Back, Año: 1980
ID: tt0036775, Título: Double Indemnity, Año: 1944
ID: tt0056172, Título: Lawrence of Arabia, Año: 1962
ID: tt0108052, Título: Schindler's List, Año: 1993
ID: tt0038650, Título: It's a Wonderful Life, Año: 1946
ID: tt0109830, Título: Forrest Gump, Año: 1994
ID: tt0120737, Título: The Lord of the Rings: The Fellowship of the Ring, Año: 2001
ID: tt0053125, Título: North by Northwest, Año: 1959
ID: tt0056801, Título: 8½, Año: 1963
ID: tt0076759, Título: Star Wars, Año: 1977
ID: tt0075686, Título: Annie Hall, Año: 1977
ID: tt0072890, Título: Dog Day Afternoon, Año: 1975
ID: tt0074958, Título: Network, Año: 1976
ID: tt0066921, Título: A Clockwork Orange, Año: 1971
ID: tt0052357, Título: Vertigo, Año: 1958
ID: tt0062622, Título: 2001: A Space Odyssey, Año: 1968
ID: tt0021749, Título: City Lights, Año: 1931
ID: tt0061184, Título: Who's Afraid of Virginia Woolf?, Año: 1966
ID: tt0071562, Título: The Godfather Part II, Año: 1974
ID: tt0081398, Título: Raging Bull, Año: 1980
ID: tt0054215, Título: Psycho, Año: 1960
ID: tt0044081, Título: A Streetcar Named Desire, Año: 1951
ID: tt0053291, Título: Some Like It Hot, Año: 1959
ID: tt0045152, Título: Singin' in the Rain, Año: 1952
ID: tt0077416, Título: The Deer Hunter, Año: 1978
ID: tt0031679, Título: Mr. Smith Goes to Washington, Año: 1939
ID: tt0029947, Título: Bringing Up Baby, Año: 1938
ID: tt0031381, Título: Gone with the Wind, Año: 1939
ID: tt0032904, Título: The Philadelphia Story, Año: 1940
ID: tt0075148, Título: Rocky, Año: 1976
ID: tt0017925, Título: The General, Año: 1926
ID: tt0110357, Título: The Lion King, Año: 1994
ID: tt0050976, Título: Det sjunde inseglet, Año: 1957
ID: tt0120815, Título: Saving Private Ryan, Año: 1998
ID: tt0047296, Título: On the Waterfront, Año: 1954
ID: tt0060196, Título: Il buono, il brutto, il cattivo, Año: 1966
ID: tt0047396, Título: Rear Window, Año: 1954
ID: tt0073486, Título: One Flew Over the Cuckoo's Nest, Año: 1975
ID: tt0059742, Título: The Sound of Music, Año: 1965
ID: tt0033870, Título: The Maltese Falcon, Año: 1941
ID: tt0053779, Título: La dolce vita, Año: 1960
ID: tt0057012, Título: Dr. Strangelove or: How I Learned to Stop Worrying and Love the Bomb, Año: 1964
ID: tt0169547, Título: American Beauty, Año: 1999
ID: tt0111161, Título: The Shawshank Redemption, Año: 1994
ID: tt0025316, Título: It Happened One Night, Año: 1934
ID: tt0211915, Título: Le fabuleux destin d'Amélie Poulain, Año: 2001
ID: tt0064115, Título: Butch Cassidy and the Sundance Kid, Año: 1969
ID: tt0082971, Título: Raiders of the Lost Ark, Año: 1981
ID: tt0027977, Título: Modern Times, Año: 1936
ID: tt0036868, Título: The Best Years of Our Lives, Año: 1946
ID: tt0075314, Título: Taxi Driver, Año: 1976
ID: tt0015864, Título: The Gold Rush, Año: 1925
ID: tt0052738, Título: The Diary of Anne Frank, Año: 1959
ID: tt0114709, Título: Toy Story, Año: 1995
ID: tt0073195, Título: Jaws, Año: 1975
ID: tt0167260, Título: The Lord of the Rings: The Return of the King, Año: 2003
ID: tt0061418, Título: Bonnie and Clyde, Año: 1967
ID: tt0056592, Título: To Kill a Mockingbird, Año: 1962
ID: tt0074119, Título: All the President's Men, Año: 1976
ID: tt0032455, Título: Fantasia, Año: 1940
ID: tt0083658, Título: Blade Runner, Año: 1982
ID: tt0046911, Título: Les diaboliques, Año: 1955
ID: tt0042876, Título: Rashômon, Año: 1950
ID: tt0059113, Título: Doctor Zhivago, Año: 1965
ID: tt0099685, Título: Goodfellas, Año: 1990
ID: tt0029583, Título: Snow White and the Seven Dwarfs, Año: 1937
ID: tt0407887, Título: The Departed, Año: 2006
ID: tt0046268, Título: Le salaire de la peur, Año: 1953
ID: tt0032551, Título: The Grapes of Wrath, Año: 1940
ID: tt0086250, Título: Scarface, Año: 1983
ID: tt0050371, Título: A Face in the Crowd, Año: 1957
ID: tt0083866, Título: E.T. the Extra-Terrestrial, Año: 1982
ID: tt0266697, Título: Kill Bill: Vol. 1, Año: 2003
ID: tt0045793, Título: From Here to Eternity, Año: 1953
ID: tt0043265, Título: The African Queen, Año: 1951
ID: tt0054460, Título: Warui yatsu hodo yoku nemuru, Año: 1960
ID: tt0043014, Título: Sunset Blvd., Año: 1950
ID: tt0078788, Título: Apocalypse Now, Año: 1979
ID: tt0071853, Título: Monty Python and the Holy Grail, Año: 1975
ID: tt0052618, Título: Ben-Hur, Año: 1959
ID: tt0053221, Título: Rio Bravo, Año: 1959
ID: tt0062136, Título: Playtime, Año: 1967
ID: tt0175880, Título: Magnolia, Año: 1999
ID: tt0056736, Título: L'eclisse, Año: 1962
ID: tt0102926, Título: The Silence of the Lambs, Año: 1991
ID: tt0064665, Título: Midnight Cowboy, Año: 1969
ID: tt0050986, Título: Smultronstället, Año: 1957
ID: tt0053619, Título: L'avventura, Año: 1960
ID: tt0086879, Título: Amadeus, Año: 1984
ID: tt0477348, Título: No Country for Old Men, Año: 2007
ID: tt0048545, Título: Rebel Without a Cause, Año: 1955
ID: tt0137523, Título: Fight Club, Año: 1999
ID: tt0032910, Título: Pinocchio, Año: 1940
ID: tt0116282, Título: Fargo, Año: 1996
ID: tt0070735, Título: The Sting, Año: 1973
ID: tt0209144, Título: Memento, Año: 2000
ID: tt0050212, Título: The Bridge on the River Kwai, Año: 1957
ID: tt0046250, Título: Roman Holiday, Año: 1953
ID: tt0084805, Título: Tootsie, Año: 1982
ID: tt0053604, Título: The Apartment, Año: 1960
ID: tt0032553, Título: The Great Dictator, Año: 1940
ID: tt0097216, Título: Do the Right Thing, Año: 1989
ID: tt0118715, Título: The Big Lebowski, Año: 1998
ID: tt0095953, Título: Rain Man, Año: 1988
ID: tt0033891, Título: Meet John Doe, Año: 1941
ID: tt0107048, Título: Groundhog Day, Año: 1993
ID: tt0055614, Título: West Side Story, Año: 1961
ID: tt0044706, Título: High Noon, Año: 1952
ID: tt0033045, Título: The Shop Around the Corner, Año: 1940
ID: tt0055032, Título: Jules et Jim, Año: 1962
ID: tt0031885, Título: La règle du jeu, Año: 1939
ID: tt0468569, Título: The Dark Knight, Año: 2008
ID: tt0064276, Título: Easy Rider, Año: 1969
ID: tt0039689, Título: Out of the Past, Año: 1947
ID: tt1375666, Título: Inception, Año: 2010
ID: tt0063374, Título: The Odd Couple, Año: 1968
ID: tt0107290, Título: Jurassic Park, Año: 1993
ID: tt0167261, Título: The Lord of the Rings: The Two Towers, Año: 2002
ID: tt0028333, Título: Swing Time, Año: 1936
ID: tt0043278, Título: An American in Paris, Año: 1951
ID: tt0042192, Título: All About Eve, Año: 1950
ID: tt0114814, Título: The Usual Suspects, Año: 1995
ID: tt0055031, Título: Judgment at Nuremberg, Año: 1961
ID: tt0081505, Título: The Shining, Año: 1980
ID: tt0053472, Título: À bout de souffle, Año: 1960
ID: tt0119217, Título: Good Will Hunting, Año: 1997
ID: tt0075860, Título: Close Encounters of the Third Kind, Año: 1977
ID: tt0040897, Título: The Treasure of the Sierra Madre, Año: 1948
ID: tt0091763, Título: Platoon, Año: 1986
ID: tt0101414, Título: Beauty and the Beast, Año: 1991
ID: tt0057193, Título: It's a Mad, Mad, Mad, Mad World, Año: 1963
ID: tt0361748, Título: Inglourious Basterds, Año: 2009
ID: tt0057115, Título: The Great Escape, Año: 1963
ID: tt0053946, Título: Inherit the Wind, Año: 1960
ID: tt0023969, Título: Duck Soup, Año: 1933
ID: tt0110932, Título: Quiz Show, Año: 1994
ID: tt0119488, Título: L.A. Confidential, Año: 1997
ID: tt0052311, Título: Touch of Evil, Año: 1958
ID: tt0051036, Título: Sweet Smell of Success, Año: 1957
ID: tt0036613, Título: Arsenic and Old Lace, Año: 1944
ID: tt0105236, Título: Reservoir Dogs, Año: 1992
ID: tt0118749, Título: Boogie Nights, Año: 1997
ID: tt0054389, Título: Tirez sur le pianiste, Año: 1960
ID: tt0050706, Título: Mon oncle, Año: 1958
ID: tt0378194, Título: Kill Bill: Vol. 2, Año: 2004
ID: tt0783233, Título: Atonement, Año: 2007
ID: tt0026029, Título: The 39 Steps, Año: 1935
ID: tt0038355, Título: The Big Sleep, Año: 1946
ID: tt0046303, Título: Shane, Año: 1953
ID: tt0056197, Título: The Longest Day, Año: 1962
ID: tt0037558, Título: Brief Encounter, Año: 1945
ID: tt0041959, Título: The Third Man, Año: 1949
ID: tt0190332, Título: Wo hu cang long, Año: 2000
ID: tt0088763, Título: Back to the Future, Año: 1985
ID: tt0067992, Título: Willy Wonka & the Chocolate Factory, Año: 1971
ID: tt0338013, Título: Eternal Sunshine of the Spotless Mind, Año: 2004
ID: tt0062229, Título: Le Samouraï, Año: 1967
ID: tt0048605, Título: The Seven Year Itch, Año: 1955
ID: tt0190590, Título: O Brother, Where Art Thou?, Año: 2000
ID: tt0047528, Título: La strada, Año: 1954
ID: tt0041699, Título: Nora inu, Año: 1949
ID: tt0054698, Título: Breakfast at Tiffany's, Año: 1961
ID: tt0067185, Título: Harold and Maude, Año: 1971
ID: tt0058083, Título: Fail Safe, Año: 1964
ID: tt0088258, Título: This Is Spinal Tap, Año: 1984
ID: tt0043924, Título: A Place in the Sun, Año: 1951
ID: tt0061811, Título: In the Heat of the Night, Año: 1967
ID: tt0091042, Título: Ferris Bueller's Day Off, Año: 1986
ID: tt0043338, Título: Ace in the Hole, Año: 1951
ID: tt0061512, Título: Cool Hand Luke, Año: 1967
ID: tt0360717, Título: King Kong, Año: 2005
ID: tt0038991, Título: The Stranger, Año: 1946
ID: tt0120601, Título: Being John Malkovich, Año: 1999
ID: tt0079522, Título: Manhattan, Año: 1979
ID: tt0098635, Título: When Harry Met Sally..., Año: 1989
ID: tt0060827, Título: Persona, Año: 1966
ID: tt0027652, Título: Fury, Año: 1936
ID: tt0172495, Título: Gladiator, Año: 2000
ID: tt0036174, Título: Mr. Lucky, Año: 1943
ID: tt0040522, Título: Ladri di biciclette, Año: 1948
ID: tt0085244, Título: The Big Chill, Año: 1983
ID: tt0067328, Título: The Last Picture Show, Año: 1971
ID: tt0065214, Título: The Wild Bunch, Año: 1969
ID: tt0047522, Título: A Star Is Born, Año: 1954
ID: tt0044079, Título: Strangers on a Train, Año: 1951
ID: tt0042041, Título: White Heat, Año: 1949
ID: tt0058331, Título: Mary Poppins, Año: 1964
ID: tt0084707, Título: Sophie's Choice, Año: 1982
ID: tt0024216, Título: King Kong, Año: 1933
ID: tt0344510, Título: Un long dimanche de fiançailles, Año: 2004
ID: tt0073440, Título: Nashville, Año: 1975
ID: tt0010323, Título: Das Cabinet des Dr. Caligari, Año: 1920
ID: tt0021079, Título: Little Caesar, Año: 1931
ID: tt0081283, Título: Ordinary People, Año: 1980
ID: tt0266543, Título: Finding Nemo, Año: 2003
ID: tt0073802, Título: Three Days of the Condor, Año: 1975
ID: tt0056241, Título: The Miracle Worker, Año: 1962
ID: tt0058385, Título: My Fair Lady, Año: 1964
ID: tt0038787, Título: Notorious, Año: 1946
ID: tt0217505, Título: Gangs of New York, Año: 2002
ID: tt0108399, Título: True Romance, Año: 1993
ID: tt0016332, Título: Seven Chances, Año: 1925
ID: tt0042276, Título: Born Yesterday, Año: 1950
ID: tt0051459, Título: Cat on a Hot Tin Roof, Año: 1958
ID: tt0030993, Título: You Can't Take It with You, Año: 1938
ID: tt0078841, Título: Being There, Año: 1979
ID: tt0102138, Título: JFK, Año: 1991
ID: tt0067411, Título: McCabe & Mrs. Miller, Año: 1971
ID: tt0096332, Título: The Unbearable Lightness of Being, Año: 1988
ID: tt0066319, Título: Ryan's Daughter, Año: 1970
ID: tt0104348, Título: Glengarry Glen Ross, Año: 1992
ID: tt0443680, Título: The Assassination of Jesse James by the Coward Robert Ford, Año: 2007
ID: tt0056923, Título: Charade, Año: 1963
ID: tt0317705, Título: The Incredibles, Año: 2004
ID: tt0029843, Título: The Adventures of Robin Hood, Año: 1938
ID: tt0072431, Título: Young Frankenstein, Año: 1974
ID: tt0033804, Título: The Lady Eve, Año: 1941
ID: tt0101410, Título: Barton Fink, Año: 1991
ID: tt0063442, Título: Planet of the Apes, Año: 1968
ID: tt0026752, Título: Mutiny on the Bounty, Año: 1935
ID: tt0037382, Título: To Have and Have Not, Año: 1944
ID: tt0056218, Título: The Manchurian Candidate, Año: 1962
ID: tt0388795, Título: Brokeback Mountain, Año: 2005
ID: tt0038854, Título: The Postman Always Rings Twice, Año: 1946
ID: tt0069495, Título: What's Up, Doc?, Año: 1972
ID: tt0082089, Título: Body Heat, Año: 1981
ID: tt0947798, Título: Black Swan, Año: 2010
ID: tt0012349, Título: The Kid, Año: 1921
ID: tt0027125, Título: Top Hat, Año: 1935
ID: tt0028597, Título: The Awful Truth, Año: 1937
ID: tt0037008, Título: Laura, Año: 1944
ID: tt0421715, Título: The Curious Case of Benjamin Button, Año: 2008
ID: tt0036172, Título: The More the Merrier, Año: 1943
ID: tt0079417, Título: Kramer vs. Kramer, Año: 1979
ID: tt1853728, Título: Django Unchained, Año: 2012
ID: tt0076095, Título: The Goodbye Girl, Año: 1977
ID: tt0401383, Título: Le scaphandre et le papillon, Año: 2007
ID: tt0022958, Título: Grand Hotel, Año: 1932
ID: tt0099674, Título: The Godfather Part III, Año: 1990
ID: tt0110413, Título: Léon, Año: 1994
ID: tt0101640, Título: Da hong denglong gaogao gua, Año: 1991
ID: tt0043274, Título: Alice in Wonderland, Año: 1951
ID: tt0317248, Título: Cidade de Deus, Año: 2002
ID: tt0048673, Título: Summertime, Año: 1955
ID: tt0086190, Título: Star Wars: Episode VI - Return of the Jedi, Año: 1983
ID: tt0338751, Título: The Aviator, Año: 2004
ID: tt0063227, Título: The Lion in Winter, Año: 1968
ID: tt0032976, Título: Rebecca, Año: 1940
ID: tt0072417, Título: A Woman Under the Influence, Año: 1974
ID: tt0032599, Título: His Girl Friday, Año: 1940
ID: tt0053137, Título: On the Beach, Año: 1959
ID: tt0959337, Título: Revolutionary Road, Año: 2008
ID: tt0073018, Título: French Connection II, Año: 1975
ID: tt0054331, Título: Spartacus, Año: 1960
ID: tt0162222, Título: Cast Away, Año: 2000
ID: tt0034167, Título: Sergeant York, Año: 1941
ID: tt0070666, Título: Serpico, Año: 1973
ID: tt0067116, Título: The French Connection, Año: 1971
ID: tt0087843, Título: Once Upon a Time in America, Año: 1984
ID: tt0028010, Título: My Man Godfrey, Año: 1936
ID: tt0022100, Título: M - Eine Stadt sucht einen Mörder, Año: 1931
ID: tt0049261, Título: Giant, Año: 1956
ID: tt0109686, Título: Dumb and Dumber, Año: 1994
ID: tt0103639, Título: Aladdin, Año: 1992
ID: tt0093748, Título: Planes, Trains & Automobiles, Año: 1987
ID: tt0090830, Título: Children of a Lesser God, Año: 1986
ID: tt0114369, Título: Se7en, Año: 1995
ID: tt0070379, Título: Mean Streets, Año: 1973
ID: tt0053285, Título: Sleeping Beauty, Año: 1959
ID: tt0091983, Título: Something Wild, Año: 1986
ID: tt0048028, Título: East of Eden, Año: 1955
ID: tt0112384, Título: Apollo 13, Año: 1995
ID: tt0166924, Título: Mulholland Dr., Año: 2001
ID: tt0120689, Título: The Green Mile, Año: 1999
ID: tt0056217, Título: The Man Who Shot Liberty Valance, Año: 1962
ID: tt0031971, Título: Stagecoach, Año: 1939
ID: tt0068182, Título: Aguirre, der Zorn Gottes, Año: 1972
ID: tt0240772, Título: Ocean's Eleven, Año: 2001
ID: tt0015163, Título: The Navigator, Año: 1924
ID: tt0264464, Título: Catch Me If You Can, Año: 2002
ID: tt0105695, Título: Unforgiven, Año: 1992
ID: tt0042546, Título: Harvey, Año: 1950
ID: tt0051808, Título: Kakushi-toride no san-akunin, Año: 1958
ID: tt0405094, Título: Das Leben der Anderen, Año: 2006
ID: tt0113277, Título: Heat, Año: 1995
ID: tt0070707, Título: Sleeper, Año: 1973
ID: tt0120669, Título: Fear and Loathing in Las Vegas, Año: 1998
ID: tt0088846, Título: Brazil, Año: 1985
ID: tt0268978, Título: A Beautiful Mind, Año: 2001
ID: tt0032484, Título: Foreign Correspondent, Año: 1940
ID: tt0069293, Título: Solyaris, Año: 1972
ID: tt0092067, Título: Tenkû no shiro Rapyuta, Año: 1986
ID: tt0116695, Título: Jerry Maguire, Año: 1996
ID: tt0033874, Título: The Man Who Came to Dinner, Año: 1941
ID: tt0073766, Título: The Sunshine Boys, Año: 1975
ID: tt0094737, Título: Big, Año: 1988
ID: tt0055471, Título: Splendor in the Grass, Año: 1961
ID: tt0130827, Título: Lola rennt, Año: 1998
ID: tt0070511, Título: Papillon, Año: 1973
ID: tt0433383, Título: Good Night, and Good Luck., Año: 2005
ID: tt0062952, Título: Faces, Año: 1968
ID: tt0093822, Título: Raising Arizona, Año: 1987
ID: tt0048021, Título: Du rififi chez les hommes, Año: 1955
ID: tt0180093, Título: Requiem for a Dream, Año: 2000
ID: tt0015648, Título: Bronenosets Potyomkin, Año: 1925
ID: tt0469494, Título: There Will Be Blood, Año: 2007
ID: tt0036244, Título: The Ox-Bow Incident, Año: 1942
ID: tt0026778, Título: A Night at the Opera, Año: 1935
ID: tt0021884, Título: Frankenstein, Año: 1931
ID: tt0051525, Título: The Defiant Ones, Año: 1958
ID: tt0067140, Título: Giù la testa, Año: 1971
ID: tt0051003, Título: The Spirit of St. Louis, Año: 1957
ID: tt0046912, Título: Dial M for Murder, Año: 1954
ID: tt0910970, Título: WALL·E, Año: 2008
ID: tt0100150, Título: Miller's Crossing, Año: 1990
ID: tt0077928, Título: Midnight Express, Año: 1978
ID: tt0041546, Título: Kind Hearts and Coronets, Año: 1949
ID: tt0047472, Título: Seven Brides for Seven Brothers, Año: 1954
ID: tt0056687, Título: What Ever Happened to Baby Jane?, Año: 1962
ID: tt0078748, Título: Alien, Año: 1979
ID: tt0087544, Título: Kaze no tani no Naushika, Año: 1984
ID: tt0032155, Título: Young Mr. Lincoln, Año: 1939
ID: tt0082846, Título: On Golden Pond, Año: 1981
ID: tt0034240, Título: Sullivan's Travels, Año: 1941
ID: tt0037913, Título: Mildred Pierce, Año: 1945
ID: tt0074860, Título: Marathon Man, Año: 1976
ID: tt0020629, Título: All Quiet on the Western Front, Año: 1930
ID: tt0029284, Título: My Favorite Wife, Año: 1940
ID: tt0181875, Título: Almost Famous, Año: 2000
ID: tt0083946, Título: Fitzcarraldo, Año: 1982
ID: tt0055630, Título: Yôjinbô, Año: 1961
ID: tt0104797, Título: Malcolm X, Año: 1992
ID: tt0036342, Título: Shadow of a Doubt, Año: 1943
ID: tt0061735, Título: Guess Who's Coming to Dinner, Año: 1967
ID: tt0023427, Título: Scarface, Año: 1932
ID: tt0034492, Título: Bambi, Año: 1942
ID: tt0049833, Título: The Ten Commandments, Año: 1956
ID: tt1605783, Título: Midnight in Paris, Año: 2011
ID: tt0382932, Título: Ratatouille, Año: 2007
ID: tt0004972, Título: The Birth of a Nation, Año: 1915
ID: tt0115685, Título: The Birdcage, Año: 1996
ID: tt1311071, Título: Kill Your Darlings, Año: 2013
ID: tt0014341, Título: Our Hospitality, Año: 1923
ID: tt0015064, Título: Der letzte Mann, Año: 1924
ID: tt0031762, Título: Only Angels Have Wings, Año: 1939
ID: tt0098724, Título: Sex, Lies, and Videotape, Año: 1989
ID: tt0038574, Título: Great Expectations, Año: 1946
ID: tt0086197, Título: The Right Stuff, Año: 1983
ID: tt0054997, Título: The Hustler, Año: 1961
ID: tt0084855, Título: The Verdict, Año: 1982
ID: tt0095016, Título: Die Hard, Año: 1988
ID: tt0292963, Título: Before the Devil Knows You're Dead, Año: 2007
ID: tt0024844, Título: L'Atalante, Año: 1934
ID: tt0119822, Título: As Good as It Gets, Año: 1997
ID: tt0327056, Título: Mystic River, Año: 2003
ID: tt1120985, Título: Blue Valentine, Año: 2010
ID: tt0040662, Título: Oliver Twist, Año: 1948
ID: tt0059712, Título: Ship of Fools, Año: 1965
ID: tt0038559, Título: Gilda, Año: 1946
ID: tt0079367, Título: The Jerk, Año: 1979
ID: tt0037059, Título: Meet Me in St. Louis, Año: 1944
ID: tt0362270, Título: The Life Aquatic with Steve Zissou, Año: 2004
ID: tt1033575, Título: The Descendants, Año: 2011
ID: tt0364569, Título: Oldeuboi, Año: 2003
ID: tt0068555, Título: Everything You Always Wanted to Know About Sex * But Were Afraid to Ask, Año: 1972
ID: tt0457430, Título: El laberinto del fauno, Año: 2006
ID: tt0039211, Título: Born to Kill, Año: 1947
ID: tt0066026, Título: MASH, Año: 1970
ID: tt1010048, Título: Slumdog Millionaire, Año: 2008
ID: tt0110632, Título: Natural Born Killers, Año: 1994
ID: tt0114746, Título: Twelve Monkeys, Año: 1995
ID: tt0046487, Título: Les vacances de Monsieur Hulot, Año: 1953
ID: tt0109040, Título: Ace Ventura: Pet Detective, Año: 1994
ID: tt0116477, Título: Hamlet, Año: 1996
ID: tt0443272, Título: Lincoln, Año: 2012
ID: tt0020640, Título: Animal Crackers, Año: 1930
ID: tt0120338, Título: Titanic, Año: 1997
ID: tt0015324, Título: Sherlock Jr., Año: 1924
ID: tt0058404, Título: The Night of the Iguana, Año: 1964
ID: tt0088847, Título: The Breakfast Club, Año: 1985
ID: tt0112573, Título: Braveheart, Año: 1995
ID: tt0058586, Título: A Shot in the Dark, Año: 1964
ID: tt0030341, Título: The Lady Vanishes, Año: 1938
ID: tt0105151, Título: The Player, Año: 1992
ID: tt0079672, Título: Opening Night, Año: 1977
ID: tt0376541, Título: Closer, Año: 2004
ID: tt1371111, Título: Cloud Atlas, Año: 2012
ID: tt0268126, Título: Adaptation., Año: 2002
ID: tt0066808, Título: Bananas, Año: 1971
ID: tt0048973, Título: Baby Doll, Año: 1956
ID: tt1024648, Título: Argo, Año: 2012
ID: tt0068327, Título: Cabaret, Año: 1972
ID: tt0257044, Título: Road to Perdition, Año: 2002
ID: tt0089853, Título: The Purple Rose of Cairo, Año: 1985
ID: tt0061852, Título: The Jungle Book, Año: 1967
ID: tt1130884, Título: Shutter Island, Año: 2010
ID: tt0045810, Título: Gentlemen Prefer Blondes, Año: 1953
ID: tt1655442, Título: The Artist, Año: 2011
ID: tt0049730, Título: The Searchers, Año: 1956
ID: tt0053198, Título: Les quatre cents coups, Año: 1959
ID: tt0449467, Título: Babel, Año: 2006
ID: tt0082979, Título: Reds, Año: 1981
ID: tt1193138, Título: Up in the Air, Año: 2009
ID: tt0258463, Título: The Bourne Identity, Año: 2002
ID: tt0069704, Título: American Graffiti, Año: 1973
ID: tt0071360, Título: The Conversation, Año: 1974
ID: tt0308055, Título: Bobby, Año: 2006
ID: tt0070212, Título: The Iceman Cometh, Año: 1973
ID: tt1345836, Título: The Dark Knight Rises, Año: 2012
ID: tt0048393, Título: Mr. Arkadin, Año: 1955
ID: tt1542344, Título: 127 Hours, Año: 2010
ID: tt0094291, Título: Wall Street, Año: 1987
ID: tt0405159, Título: Million Dollar Baby, Año: 2004
ID: tt0059578, Título: Per qualche dollaro in più, Año: 1965
ID: tt0060086, Título: Alfie, Año: 1966
ID: tt0058265, Título: Kiss Me, Stupid, Año: 1964
ID: tt0086979, Título: Blood Simple, Año: 1984
ID: tt0482571, Título: The Prestige, Año: 2006
ID: tt0091635, Título: Nine 1/2 Weeks, Año: 1986
ID: tt0111507, Título: Trois couleurs: Blanc, Año: 1994
ID: tt0044829, Título: The Lavender Hill Mob, Año: 1951
ID: tt0058461, Título: Per un pugno di dollari, Año: 1964
ID: tt0069400, Título: Trafic, Año: 1971
ID: tt0478304, Título: The Tree of Life, Año: 2011
ID: tt0055824, Título: Cape Fear, Año: 1962
ID: tt0090756, Título: Blue Velvet, Año: 1986
ID: tt0035093, Título: Mrs. Miniver, Año: 1942
ID: tt0038988, Título: The Strange Love of Martha Ivers, Año: 1946
ID: tt0056869, Título: The Birds, Año: 1963
ID: tt0037884, Título: The Lost Weekend, Año: 1945
ID: tt0096438, Título: Who Framed Roger Rabbit, Año: 1988
ID: tt0082783, Título: My Dinner with Andre, Año: 1981
ID: tt1285016, Título: The Social Network, Año: 2010
ID: tt0120863, Título: The Thin Red Line, Año: 1998
ID: tt0435761, Título: Toy Story 3, Año: 2010
ID: tt0031725, Título: Ninotchka, Año: 1939
ID: tt0108122, Título: Short Cuts, Año: 1993
ID: tt0086425, Título: Terms of Endearment, Año: 1983
ID: tt0079336, Título: The In-Laws, Año: 1979
ID: tt0037514, Título: Anchors Aweigh, Año: 1945
ID: tt0039190, Título: The Bishop's Wife, Año: 1947
ID: tt0039286, Título: Crossfire, Año: 1947
ID: tt0055353, Título: A Raisin in the Sun, Año: 1961
ID: tt0025878, Título: The Thin Man, Año: 1934
ID: tt1049413, Título: Up, Año: 2009
ID: tt0055254, Título: One Hundred and One Dalmatians, Año: 1961
ID: tt0903624, Título: The Hobbit: An Unexpected Journey, Año: 2012
ID: tt0040834, Título: State of the Union, Año: 1948
ID: tt0035015, Título: The Magnificent Ambersons, Año: 1942
ID: tt0054953, Título: The Guns of Navarone, Año: 1961
ID: tt0118655, Título: Austin Powers: International Man of Mystery, Año: 1997
ID: tt0057372, Título: The Nutty Professor, Año: 1963
ID: tt0057413, Título: The Pink Panther, Año: 1963
ID: tt0307901, Título: 25th Hour, Año: 2002
ID: tt0416320, Título: Match Point, Año: 2005
ID: tt0063522, Título: Rosemary's Baby, Año: 1968
ID: tt0120382, Título: The Truman Show, Año: 1998
ID: tt0071877, Título: Murder on the Orient Express, Año: 1974
ID: tt0101516, Título: Bugsy, Año: 1991
ID: tt0053131, Título: The Nun's Story, Año: 1959
ID: tt0918927, Título: Doubt, Año: 2008
ID: tt0077289, Título: California Suite, Año: 1978
ID: tt0243133, Título: The Man Who Wasn't There, Año: 2001
ID: tt0218839, Título: Best in Show, Año: 2000
ID: tt0097351, Título: Field of Dreams, Año: 1989
ID: tt0181689, Título: Minority Report, Año: 2002
ID: tt0047437, Título: Sabrina, Año: 1954
ID: tt0056937, Título: Cleopatra, Año: 1963
ID: tt0023027, Título: Horse Feathers, Año: 1932
ID: tt0055895, Título: Days of Wine and Roses, Año: 1962
ID: tt0078721, Título: 10, Año: 1979
ID: tt0116209, Título: The English Patient, Año: 1996
ID: tt0054743, Título: The Children's Hour, Año: 1961
ID: tt0373469, Título: Kiss Kiss Bang Bang, Año: 2005
ID: tt0058182, Título: A Hard Day's Night, Año: 1964
ID: tt0363163, Título: Der Untergang, Año: 2004
ID: tt0016630, Título: Battling Butler, Año: 1926
ID: tt0104257, Título: A Few Good Men, Año: 1992
ID: tt0060424, Título: The Fortune Cookie, Año: 1966
ID: tt0441909, Título: Volver, Año: 2006
ID: tt0044413, Título: Bend of the River, Año: 1952
ID: tt0068473, Título: Deliverance, Año: 1972
ID: tt0085334, Título: A Christmas Story, Año: 1983
ID: tt0065531, Título: Le cercle rouge, Año: 1970
ID: tt1560747, Título: The Master, Año: 2012
ID: tt0203009, Título: Moulin Rouge!, Año: 2001
ID: tt0046183, Título: Peter Pan, Año: 1953
ID: tt0080487, Título: Caddyshack, Año: 1980
ID: tt0092699, Título: Broadcast News, Año: 1987
ID: tt0052561, Título: Anatomy of a Murder, Año: 1959
ID: tt0198781, Título: Monsters, Inc., Año: 2001
ID: tt0027996, Título: Mr. Deeds Goes to Town, Año: 1936
ID: tt0075029, Título: The Outlaw Josey Wales, Año: 1976
ID: tt1568346, Título: The Girl with the Dragon Tattoo, Año: 2011
ID: tt0068152, Título: $, Año: 1971
ID: tt0079588, Título: The Muppet Movie, Año: 1979
ID: tt0118799, Título: La vita è bella, Año: 1997
ID: tt0050839, Título: Peyton Place, Año: 1957
ID: tt0053168, Título: Pickpocket, Año: 1959
ID: tt0065063, Título: Take the Money and Run, Año: 1969
ID: tt0067959, Título: Walkabout, Año: 1971
ID: tt0095159, Título: A Fish Called Wanda, Año: 1988
ID: tt0039169, Título: The Bachelor and the Bobby-Soxer, Año: 1947
ID: tt0064100, Título: Bob & Carol & Ted & Alice, Año: 1969
ID: tt0280707, Título: Gosford Park, Año: 2001
ID: tt0049408, Título: The King and I, Año: 1956
ID: tt0404203, Título: Little Children, Año: 2006
ID: tt0051745, Título: Houseboat, Año: 1958
ID: tt0038873, Título: The Razor's Edge, Año: 1946
ID: tt0033373, Título: Ball of Fire, Año: 1941
ID: tt0780504, Título: Drive, Año: 2011
ID: tt0107818, Título: Philadelphia, Año: 1993
ID: tt0039631, Título: Monsieur Verdoux, Año: 1947
ID: tt0039416, Título: Gentleman's Agreement, Año: 1947
ID: tt0038762, Título: My Darling Clementine, Año: 1946
ID: tt0111495, Título: Trois couleurs: Rouge, Año: 1994
ID: tt0120363, Título: Toy Story 2, Año: 1999
ID: tt0056193, Título: Lolita, Año: 1962
ID: tt0022158, Título: Monkey Business, Año: 1931
ID: tt0065088, Título: They Shoot Horses, Don't They?, Año: 1969
ID: tt0063462, Título: The Producers, Año: 1967
ID: tt0031455, Título: The Hunchback of Notre Dame, Año: 1939
ID: tt0112641, Título: Casino, Año: 1995
ID: tt0046874, Título: The Country Girl, Año: 1954
ID: tt0087332, Título: Ghostbusters, Año: 1984
ID: tt0061395, Título: Belle de jour, Año: 1967
ID: tt0405422, Título: The 40 Year Old Virgin, Año: 2005
ID: tt0050419, Título: Funny Face, Año: 1957
ID: tt0076666, Título: Saturday Night Fever, Año: 1977
ID: tt0093779, Título: The Princess Bride, Año: 1987
ID: tt0048347, Título: The Man with the Golden Arm, Año: 1955
ID: tt0066892, Título: Carnal Knowledge, Año: 1971
ID: tt0151804, Título: Office Space, Año: 1999
ID: tt0074812, Título: Logan's Run, Año: 1976
ID: tt0042832, Título: Panic in the Streets, Año: 1950
ID: tt0052832, Título: The Fugitive Kind, Año: 1960
ID: tt0093058, Título: Full Metal Jacket, Año: 1987
ID: tt0047878, Título: The Big Combo, Año: 1955
ID: tt0381061, Título: Casino Royale, Año: 2006
ID: tt0039302, Título: Dark Passage, Año: 1947
ID: tt0043828, Título: My Forbidden Past, Año: 1951
ID: tt0048424, Título: The Night of the Hunter, Año: 1955
ID: tt0042208, Título: The Asphalt Jungle, Año: 1950
ID: tt0077405, Título: Days of Heaven, Año: 1978
ID: tt0829482, Título: Superbad, Año: 2007
ID: tt0082085, Título: Blow Out, Año: 1981
ID: tt0019421, Título: Steamboat Bill, Jr., Año: 1928
ID: tt0119396, Título: Jackie Brown, Año: 1997
ID: tt0069467, Título: Viskningar och rop, Año: 1972
ID: tt0061578, Título: The Dirty Dozen, Año: 1967
ID: tt0106977, Título: The Fugitive, Año: 1993
ID: tt0036644, Título: The Big Noise, Año: 1944
ID: tt0050468, Título: Gunfight at the O.K. Corral, Año: 1957
ID: tt0096874, Título: Back to the Future Part II, Año: 1989
ID: tt0045192, Título: The Stooge, Año: 1951
ID: tt0032273, Título: Boom Town, Año: 1940
ID: tt0045274, Título: Umberto D., Año: 1952
ID: tt0029870, Título: Angels with Dirty Faces, Año: 1938
ID: tt0094721, Título: Beetlejuice, Año: 1988
ID: tt0086637, Título: Zelig, Año: 1983
ID: tt0035896, Título: For Whom the Bell Tolls, Año: 1943
ID: tt0064505, Título: The Italian Job, Año: 1969
ID: tt0467406, Título: Juno, Año: 2007
ID: tt0018773, Título: The Circus, Año: 1928
ID: tt0093389, Título: The Last Emperor, Año: 1987
ID: tt0107614, Título: Mrs. Doubtfire, Año: 1993
ID: tt0059183, Título: The Flight of the Phoenix, Año: 1965
ID: tt0097757, Título: The Little Mermaid, Año: 1989
ID: tt0041327, Título: East Side, West Side, Año: 1949
ID: tt0035799, Título: Destination Tokyo, Año: 1943
ID: tt0031235, Título: Dodge City, Año: 1939
ID: tt0035575, Título: Yankee Doodle Dandy, Año: 1942
ID: tt0078346, Título: Superman, Año: 1978
ID: tt0129387, Título: There's Something About Mary, Año: 1998
ID: tt0046478, Título: Ugetsu monogatari, Año: 1953
ID: tt0053793, Título: Elmer Gantry, Año: 1960
ID: tt0068835, Título: Last of the Red Hot Lovers, Año: 1972
ID: tt0022286, Título: The Public Enemy, Año: 1931
ID: tt0018033, Título: It, Año: 1927
ID: tt0048960, Título: Around the World in Eighty Days, Año: 1956
ID: tt0383028, Título: Synecdoche, New York, Año: 2008
ID: tt0032145, Título: Wuthering Heights, Año: 1939
ID: tt0071746, Título: Lenny, Año: 1974
ID: tt0076245, Título: Julia, Año: 1977
ID: tt0021814, Título: Dracula, Año: 1931
ID: tt0119349, Título: The Ice Storm, Año: 1997
ID: tt0082945, Título: Prince of the City, Año: 1981
ID: tt0117561, Título: Schizopolis, Año: 1996
ID: tt0417741, Título: Harry Potter and the Half-Blood Prince, Año: 2009
ID: tt0120780, Título: Out of Sight, Año: 1998
ID: tt0081974, Título: Absence of Malice, Año: 1981
ID: tt0109445, Título: Clerks, Año: 1994
ID: tt0167404, Título: The Sixth Sense, Año: 1999
ID: tt0062765, Título: Bullitt, Año: 1968
ID: tt0117631, Título: Shine, Año: 1996
ID: tt0072308, Título: The Towering Inferno, Año: 1974
ID: tt0073341, Título: The Man Who Would Be King, Año: 1975
ID: tt0109707, Título: Ed Wood, Año: 1994
ID: tt0059314, Título: Inside Daisy Clover, Año: 1965
ID: tt0325980, Título: Pirates of the Caribbean: The Curse of the Black Pearl, Año: 2003
ID: tt0127536, Título: Elizabeth, Año: 1998
ID: tt0304141, Título: Harry Potter and the Prisoner of Azkaban, Año: 2004
ID: tt0035446, Título: To Be or Not to Be, Año: 1942
ID: tt0095497, Título: The Last Temptation of Christ, Año: 1988
ID: tt0080678, Título: The Elephant Man, Año: 1980
ID: tt0091064, Título: The Fly, Año: 1986
ID: tt0094142, Título: Throw Momma from the Train, Año: 1987
ID: tt0044916, Título: Monkey Business, Año: 1952
ID: tt1340800, Título: Tinker Tailor Soldier Spy, Año: 2011
ID: tt0071994, Título: Phantom of the Paradise, Año: 1974
ID: tt0052216, Título: I soliti ignoti, Año: 1958
ID: tt0082406, Título: The Fox and the Hound, Año: 1981
ID: tt0070460, Título: La nuit américaine, Año: 1973
ID: tt0044391, Título: The Bad and the Beautiful, Año: 1952
ID: tt0272338, Título: Punch-Drunk Love, Año: 2002
ID: tt0096463, Título: Working Girl, Año: 1988
ID: tt0440963, Título: The Bourne Ultimatum, Año: 2007
ID: tt0057427, Título: Le procès, Año: 1962
ID: tt0206634, Título: Children of Men, Año: 2006
ID: tt0120663, Título: Eyes Wide Shut, Año: 1999
ID: tt0045537, Título: The Band Wagon, Año: 1953
ID: tt0079470, Título: Life of Brian, Año: 1979
ID: tt0046187, Título: Pickup on South Street, Año: 1953
ID: tt0040558, Título: Macbeth, Año: 1948
ID: tt0097123, Título: Crimes and Misdemeanors, Año: 1989
ID: tt0241527, Título: Harry Potter and the Sorcerer's Stone, Año: 2001
ID: tt0066206, Título: Patton, Año: 1970
ID: tt0181865, Título: Traffic, Año: 2000
ID: tt0134119, Título: The Talented Mr. Ripley, Año: 1999
ID: tt0061385, Título: Barefoot in the Park, Año: 1967
ID: tt0302886, Título: Old School, Año: 2003
ID: tt0116308, Título: Fire, Año: 1996
ID: tt0094947, Título: Dangerous Liaisons, Año: 1988
ID: tt0080388, Título: Atlantic City, Año: 1980
ID: tt0144084, Título: American Psycho, Año: 2000
ID: tt0253474, Título: The Pianist, Año: 2002
ID: tt0048356, Título: Marty, Año: 1955
ID: tt0083929, Título: Fast Times at Ridgemont High, Año: 1982
ID: tt0059037, Título: The Cincinnati Kid, Año: 1965
ID: tt0091167, Título: Hannah and Her Sisters, Año: 1986
ID: tt0067800, Título: Straw Dogs, Año: 1971
ID: tt0052005, Título: No Time for Sergeants, Año: 1958
ID: tt0146882, Título: High Fidelity, Año: 2000
ID: tt0117666, Título: Sling Blade, Año: 1996
ID: tt0040416, Título: Hamlet, Año: 1948
ID: tt0099077, Título: Awakenings, Año: 1990
ID: tt0115798, Título: The Cable Guy, Año: 1996
ID: tt0103074, Título: Thelma & Louise, Año: 1991
ID: tt0147612, Título: Happiness, Año: 1998
ID: tt0093010, Título: Fatal Attraction, Año: 1987
ID: tt0041452, Título: The Heiress, Año: 1949
ID: tt0091149, Título: The Great Mouse Detective, Año: 1986
ID: tt0091419, Título: Little Shop of Horrors, Año: 1986
ID: tt0057187, Título: Irma la Douce, Año: 1963
ID: tt0094812, Título: Bull Durham, Año: 1988
ID: tt0103064, Título: Terminator 2: Judgment Day, Año: 1991
ID: tt0035417, Título: The Talk of the Town, Año: 1942
ID: tt0154420, Título: Festen, Año: 1998
ID: tt0053270, Título: Shadows, Año: 1958
ID: tt0088850, Título: Brewster's Millions, Año: 1985
ID: tt0401792, Título: Sin City, Año: 2005
ID: tt0133093, Título: The Matrix, Año: 1999
ID: tt0039502, Título: It Happened on Fifth Avenue, Año: 1947
ID: tt0097322, Título: The Fabulous Baker Boys, Año: 1989
ID: tt0315733, Título: 21 Grams, Año: 2003
ID: tt0042994, Título: Stage Fright, Año: 1950
ID: tt0063688, Título: The Thomas Crown Affair, Año: 1968
ID: tt0040506, Título: Key Largo, Año: 1948
ID: tt0245429, Título: Sen to Chihiro no kamikakushi, Año: 2001
ID: tt0465538, Título: Michael Clayton, Año: 2007
ID: tt0033253, Título: The Westerner, Año: 1940
ID: tt0097165, Título: Dead Poets Society, Año: 1989
ID: tt0057171, Título: Ieri, oggi, domani, Año: 1963
ID: tt0018742, Título: The Cameraman, Año: 1928
ID: tt0080339, Título: Airplane!, Año: 1980
ID: tt0038669, Título: The Killers, Año: 1946
ID: tt0057091, Título: Il gattopardo, Año: 1963
ID: tt0058150, Título: Goldfinger, Año: 1964
ID: tt0099487, Título: Edward Scissorhands, Año: 1990
ID: tt1532503, Título: Beginners, Año: 2010
ID: tt0104466, Título: Husbands and Wives, Año: 1992
ID: tt0070334, Título: The Long Goodbye, Año: 1973
ID: tt0058335, Título: Matrimonio all'italiana, Año: 1964
ID: tt0046126, Título: Niagara, Año: 1953
ID: tt0052218, Título: Some Came Running, Año: 1958
ID: tt0097239, Título: Driving Miss Daisy, Año: 1989
ID: tt0800039, Título: Forgetting Sarah Marshall, Año: 2008
ID: tt0035140, Título: Now, Voyager, Año: 1942
ID: tt0065724, Título: Five Easy Pieces, Año: 1970
ID: tt0246578, Título: Donnie Darko, Año: 2001
ID: tt0375063, Título: Sideways, Año: 2004
ID: tt0025452, Título: The Man Who Knew Too Much, Año: 1934
ID: tt0077362, Título: Coming Home, Año: 1978
ID: tt0035567, Título: Woman of the Year, Año: 1942
ID: tt0031507, Título: Jesse James, Año: 1939
ID: tt0087932, Título: The Pope of Greenwich Village, Año: 1984
ID: tt0117951, Título: Trainspotting, Año: 1996
ID: tt0055069, Título: The Ladies Man, Año: 1961
ID: tt0075223, Título: Silver Streak, Año: 1976
ID: tt0054387, Título: The Time Machine, Año: 1960
ID: tt0044876, Título: The Man in the White Suit, Año: 1951
ID: tt0085794, Título: The King of Comedy, Año: 1982
ID: tt0042332, Título: Cinderella, Año: 1950
ID: tt0046438, Título: Tôkyô monogatari, Año: 1953
ID: tt0031088, Título: Beau Geste, Año: 1939
ID: tt0057877, Título: Becket, Año: 1964
ID: tt0014538, Título: Three Ages, Año: 1923
ID: tt0352248, Título: Cinderella Man, Año: 2005
ID: tt0057163, Título: Hud, Año: 1963
ID: tt0070518, Título: Pat Garrett & Billy the Kid, Año: 1973
ID: tt0107808, Título: A Perfect World, Año: 1993
ID: tt0096895, Título: Batman, Año: 1989
ID: tt0097576, Título: Indiana Jones and the Last Crusade, Año: 1989
ID: tt0059903, Título: What's New Pussycat, Año: 1965
ID: tt1315981, Título: A Single Man, Año: 2009
ID: tt0062407, Título: Two for the Road, Año: 1967
ID: tt1431181, Título: Another Year, Año: 2010
ID: tt0108160, Título: Sleepless in Seattle, Año: 1993
ID: tt1019452, Título: A Serious Man, Año: 2009
ID: tt0075359, Título: Two-Minute Warning, Año: 1976
ID: tt0099810, Título: The Hunt for Red October, Año: 1990
ID: tt0108394, Título: Trois couleurs: Bleu, Año: 1993
ID: tt0048380, Título: Mister Roberts, Año: 1955
ID: tt0357413, Título: Anchorman: The Legend of Ron Burgundy, Año: 2004
ID: tt1403865, Título: True Grit, Año: 2010
ID: tt0093277, Título: Ironweed, Año: 1987
ID: tt0047677, Título: The Wild One, Año: 1953
ID: tt0084335, Título: Missing, Año: 1982
ID: tt1174732, Título: An Education, Año: 2009
ID: tt0078966, Título: The China Syndrome, Año: 1979
ID: tt0054189, Título: Plein soleil, Año: 1960
ID: tt0055184, Título: The Misfits, Año: 1961
ID: tt0090863, Título: The Color of Money, Año: 1986
ID: tt0065234, Título: Z, Año: 1969
ID: tt0038109, Título: Spellbound, Año: 1945
ID: tt0119229, Título: Grosse Pointe Blank, Año: 1997
ID: tt0077578, Título: Foul Play, Año: 1978
ID: tt0100157, Título: Misery, Año: 1990
ID: tt0120324, Título: A Simple Plan, Año: 1998
ID: tt0055913, Título: Divorzio all'italiana, Año: 1961
ID: tt0049038, Título: Bus Stop, Año: 1956
ID: tt0101329, Título: An American Tail: Fievel Goes West, Año: 1991
ID: tt0034618, Título: The Courtship of Andy Hardy, Año: 1942
ID: tt0119174, Título: The Game, Año: 1997
ID: tt0062480, Título: Week End, Año: 1967
ID: tt0105323, Título: Scent of a Woman, Año: 1992
ID: tt0049513, Título: Moby Dick, Año: 1956
ID: tt0119654, Título: Men in Black, Año: 1997
ID: tt0087781, Título: The Natural, Año: 1984
ID: tt0350258, Título: Ray, Año: 2004
ID: tt0066999, Título: Dirty Harry, Año: 1971
ID: tt0091217, Título: Hoosiers, Año: 1986
ID: tt0082158, Título: Chariots of Fire, Año: 1981
ID: tt0030386, Título: Love Finds Andy Hardy, Año: 1938
ID: tt0027698, Título: The Great Ziegfeld, Año: 1936
ID: tt0059243, Título: The Great Race, Año: 1965
ID: tt0028138, Título: The Princess Comes Across, Año: 1936
ID: tt0055928, Título: Dr. No, Año: 1962
ID: tt0028505, Título: Wife vs. Secretary, Año: 1936
ID: tt0059260, Título: Help!, Año: 1965
ID: tt0126886, Título: Election, Año: 1999
ID: tt0049406, Título: The Killing, Año: 1956
ID: tt0907657, Título: Once, Año: 2007
ID: tt0083944, Título: First Blood, Año: 1982
ID: tt0063803, Título: Who's That Knocking at My Door, Año: 1967
ID: tt0081573, Título: Superman II, Año: 1980
ID: tt0310281, Título: A Mighty Wind, Año: 2003
ID: tt0068611, Título: Frenzy, Año: 1972
ID: tt0113627, Título: Leaving Las Vegas, Año: 1995
ID: tt0145487, Título: Spider-Man, Año: 2002
ID: tt0048055, Título: The Far Country, Año: 1954
ID: tt0101889, Título: The Fisher King, Año: 1991
ID: tt0072684, Título: Barry Lyndon, Año: 1975
ID: tt0072251, Título: The Taking of Pelham One Two Three, Año: 1974
ID: tt0910936, Título: Pineapple Express, Año: 2008
ID: tt0120586, Título: American History X, Año: 1998
ID: tt0059575, Título: The Pawnbroker, Año: 1964
ID: tt0107943, Título: The Remains of the Day, Año: 1993
ID: tt0163651, Título: American Pie, Año: 1999
ID: tt0054853, Título: The Errand Boy, Año: 1961
ID: tt0088011, Título: Romancing the Stone, Año: 1984
ID: tt0870111, Título: Frost/Nixon, Año: 2008
ID: tt0110074, Título: The Hudsucker Proxy, Año: 1994
ID: tt0274558, Título: The Hours, Año: 2002
ID: tt0063415, Título: The Party, Año: 1968
ID: tt0115734, Título: Bottle Rocket, Año: 1996
ID: tt0035279, Título: Saboteur, Año: 1942
ID: tt0450188, Título: La Môme, Año: 2007
ID: tt0033852, Título: Love Crazy, Año: 1941
ID: tt0056308, Título: Only Two Can Play, Año: 1962
ID: tt0029942, Título: Boys Town, Año: 1938
ID: tt0061107, Título: Torn Curtain, Año: 1966
ID: tt0073453, Título: Night Moves, Año: 1975
ID: tt0044953, Título: The Naked Spur, Año: 1953
ID: tt0043733, Título: The Lemon Drop Kid, Año: 1951
ID: tt0765429, Título: American Gangster, Año: 2007
ID: tt0042788, Título: Night and the City, Año: 1950
ID: tt0067128, Título: Get Carter, Año: 1971
ID: tt0190138, Título: The Whole Nine Yards, Año: 2000
ID: tt0089927, Título: Rocky IV, Año: 1985
ID: tt0070468, Título: The Offence, Año: 1973
ID: tt0117060, Título: Mission: Impossible, Año: 1996
ID: tt0033436, Título: Buck Privates, Año: 1941
ID: tt0062467, Título: Wait Until Dark, Año: 1967
ID: tt0085995, Título: National Lampoon's Vacation, Año: 1983
ID: tt0107507, Título: Manhattan Murder Mystery, Año: 1993
ID: tt0172396, Título: The End of the Affair, Año: 1999
ID: tt0277027, Título: I Am Sam, Año: 2001
ID: tt0077269, Título: The Boys from Brazil, Año: 1978
ID: tt1013753, Título: Milk, Año: 2008
ID: tt0247745, Título: Super Troopers, Año: 2001
ID: tt0498380, Título: Letters from Iwo Jima, Año: 2006
ID: tt0113987, Título: Nixon, Año: 1995
ID: tt0119361, Título: In the Company of Men, Año: 1997
ID: tt0089155, Título: Fletch, Año: 1985
ID: tt0029146, Título: The Life of Emile Zola, Año: 1937
ID: tt0030241, Título: Holiday, Año: 1938
ID: tt0449059, Título: Little Miss Sunshine, Año: 2006
ID: tt1022603, Título: (500) Days of Summer, Año: 2009
ID: tt1723811, Título: Shame, Año: 2011
ID: tt0316654, Título: Spider-Man 2, Año: 2004
ID: tt0942385, Título: Tropic Thunder, Año: 2008
ID: tt0330373, Título: Harry Potter and the Goblet of Fire, Año: 2005
ID: tt1790885, Título: Zero Dark Thirty, Año: 2012
ID: tt0048281, Título: The Ladykillers, Año: 1955
ID: tt1504320, Título: The King's Speech, Año: 2010
ID: tt0051878, Título: The Long, Hot Summer, Año: 1958
ID: tt0040746, Título: Rope, Año: 1948
ID: tt0046963, Título: Executive Suite, Año: 1954
ID: tt1570728, Título: Crazy, Stupid, Love., Año: 2011
ID: tt0108550, Título: What's Eating Gilbert Grape, Año: 1993
ID: tt0102175, Título: Jungle Fever, Año: 1991
ID: tt0128445, Título: Rushmore, Año: 1998
ID: tt0426883, Título: Alpha Dog, Año: 2006
ID: tt1440728, Título: The American, Año: 2010
ID: tt0100405, Título: Pretty Woman, Año: 1990
ID: tt0840361, Título: The Town, Año: 2010
ID: tt0381849, Título: 3:10 to Yuma, Año: 2007
ID: tt0077631, Título: Grease, Año: 1978
ID: tt0926084, Título: Harry Potter and the Deathly Hallows - Part 1, Año: 2010
ID: tt0112851, Título: Desperado, Año: 1995
ID: tt0402399, Título: The New World, Año: 2005
ID: tt0072034, Título: The Prisoner of Second Avenue, Año: 1975
ID: tt0071577, Título: The Great Gatsby, Año: 1974
ID: tt0065377, Título: Airport, Año: 1970
ID: tt0072226, Título: The Sugarland Express, Año: 1974
ID: tt0066449, Título: There's a Girl in My Soup, Año: 1970
ID: tt0068638, Título: The Getaway, Año: 1972
ID: tt0117108, Título: Multiplicity, Año: 1996
ID: tt0034274, Título: That Uncertain Feeling, Año: 1941
ID: tt0074235, Título: Bound for Glory, Año: 1976
ID: tt0038499, Título: Duel in the Sun, Año: 1946
ID: tt0212338, Título: Meet the Parents, Año: 2000
ID: tt0047422, Título: River of No Return, Año: 1954
ID: tt0039224, Título: Brute Force, Año: 1947
ID: tt0499549, Título: Avatar, Año: 2009
ID: tt0041113, Título: All the King's Men, Año: 1949
ID: tt0266452, Título: Death to Smoochy, Año: 2002
ID: tt0497465, Título: Vicky Cristina Barcelona, Año: 2008
ID: tt0046359, Título: Stalag 17, Año: 1953
ID: tt0139654, Título: Training Day, Año: 2001
ID: tt0208874, Título: The Contender, Año: 2000
ID: tt0040724, Título: Red River, Año: 1948
ID: tt0986233, Título: Hunger, Año: 2008
ID: tt0040202, Título: Call Northside 777, Año: 1948
ID: tt0140352, Título: The Insider, Año: 1999
ID: tt0014532, Título: The Ten Commandments, Año: 1923
ID: tt0040308, Título: Easter Parade, Año: 1948
ID: tt0109831, Título: Four Weddings and a Funeral, Año: 1994
ID: tt0034780, Título: George Washington Slept Here, Año: 1942
ID: tt0099785, Título: Home Alone, Año: 1990
ID: tt0065988, Título: Little Big Man, Año: 1970
ID: tt0107653, Título: Naked, Año: 1993
ID: tt0993842, Título: Hanna, Año: 2011
ID: tt0068762, Título: Jeremiah Johnson, Año: 1972
ID: tt0099348, Título: Dances with Wolves, Año: 1990
ID: tt0103772, Título: Basic Instinct, Año: 1992
ID: tt0036515, Título: Watch on the Rhine, Año: 1943
ID: tt0056196, Título: Long Day's Journey Into Night, Año: 1962
ID: tt0086960, Título: Beverly Hills Cop, Año: 1984
ID: tt0024481, Título: Queen Christina, Año: 1933
ID: tt0061391, Título: Bedazzled, Año: 1967
ID: tt0046816, Título: The Caine Mutiny, Año: 1954
ID: tt0029995, Título: The Citadel, Año: 1938
ID: tt0058997, Título: Bunny Lake Is Missing, Año: 1965
ID: tt0758758, Título: Into the Wild, Año: 2007
ID: tt0076301, Título: The Late Show, Año: 1977
ID: tt0023940, Título: Design for Living, Año: 1933
ID: tt0050301, Título: The Delicate Delinquent, A9�o: 1957
ID: tt0278504, Título: Insomnia, Año: 2002
ID: tt0048491, Título: Picnic, Año: 1955
ID: tt0080149, Título: Woyzeck, Año: 1979
ID: tt0026174, Título: Captain Blood, Año: 1935
ID: tt0047136, Título: Johnny Guitar, Año: 1954
ID: tt0048728, Título: To Catch a Thief, Año: 1955
ID: tt0045891, Título: How to Marry a Millionaire, Año: 1953
ID: tt0054357, Título: Swiss Family Robinson, Año: 1960
ID: tt0033723, Título: Hold That Ghost, Año: 1941
ID: tt0042742, Título: Mister 880, Año: 1950
ID: tt0047542, Título: Suddenly, Año: 1954
ID: tt0042451, Título: Father of the Bride, Año: 1950
ID: tt1125849, Título: The Wrestler, Año: 2008
ID: tt0047094, Título: Hobson's Choice, Año: 1954
ID: tt0071230, Título: Blazing Saddles, Año: 1974
ID: tt0040068, Título: Bud Abbott and Lou Costello Meet Frankenstein, Año: 1948
ID: tt2224004, Título: Sweetwater, Año: 2013
ID: tt0095647, Título: Mississippi Burning, Año: 1988
ID: tt0071115, Título: Alice Doesn't Live Here Anymore, Año: 1974
ID: tt0258000, Título: Panic Room, Año: 2002
ID: tt0072274, Título: Thieves Like Us, Año: 1974
ID: tt0443489, Título: Dreamgirls, Año: 2006
ID: tt0180073, Título: Quills, Año: 2000
ID: tt0088939, Título: The Color Purple, Año: 1985
ID: tt0083987, Título: Gandhi, Año: 1982
ID: tt0086200, Título: Risky Business, Año: 1983
ID: tt1201167, Título: Funny People, Año: 2009
ID: tt0297884, Título: Far from Heaven, Año: 2002
ID: tt0119942, Título: Primary Colors, Año: 1998
ID: tt0026071, Título: Anna Karenina, Año: 1935
ID: tt1226753, Título: The Debt, Año: 2010
ID: tt0053318, Título: Suddenly, Last Summer, Año: 1959
ID: tt0404030, Título: Everything Is Illuminated, Año: 2005
ID: tt0082031, Título: Arthur, Año: 1981
ID: tt1706593, Título: Chronicle, Año: 2012
ID: tt1119646, Título: The Hangover, Año: 2009
ID: tt0096061, Título: Scrooged, Año: 1988
ID: tt0372784, Título: Batman Begins, Año: 2005
ID: tt0454848, Título: Inside Man, Año: 2006
ID: tt0088930, Título: Clue, Año: 1985
ID: tt1124035, Título: The Ides of March, Año: 2011
ID: tt0120789, Título: Pleasantville, Año: 1998
ID: tt0106677, Título: Dazed and Confused, Año: 1993
ID: tt0071598, Título: Harry and Tonto, Año: 1974
ID: tt0096969, Título: Born on the Fourth of July, Año: 1989
ID: tt0875034, Título: Nine, Año: 2009
ID: tt0120623, Título: A Bug's Life, Año: 1998
ID: tt0408306, Título: Munich, Año: 2005
ID: tt0307987, Título: Bad Santa, Año: 2003
ID: tt0070640, Título: Save the Tiger, Año: 1973
ID: tt0065867, Título: Husbands, Año: 1970
ID: tt0057590, Título: Tom Jones, Año: 1963
ID: tt0085959, Título: The Meaning of Life, Año: 1983
ID: tt0033342, Título: Andy Hardy's Private Secretary, Año: 1941
ID: tt0112462, Título: Batman Forever, Año: 1995
ID: tt0122690, Título: Ronin, Año: 1998
ID: tt0098554, Título: Uncle Buck, Año: 1989
ID: tt0380510, Título: The Lovely Bones, Año: 2009
ID: tt0138097, Título: Shakespeare in Love, Año: 1998
ID: tt0120684, Título: Gods and Monsters, Año: 1998
ID: tt0107206, Título: In the Line of Fire, Año: 1993
ID: tt0335266, Título: Lost in Translation, Año: 2003
ID: tt0107688, Título: The Nightmare Before Christmas, Año: 1993
ID: tt0088680, Título: After Hours, Año: 1985
ID: tt0107007, Título: Gettysburg, Año: 1993
ID: tt0070849, Título: Ultimo tango a Parigi, Año: 1972
ID: tt0399146, Título: A History of Violence, Año: 2005
ID: tt0073629, Título: The Rocky Horror Picture Show, Año: 1975
ID: tt0088247, Título: The Terminator, Año: 1984
ID: tt0045943, Título: Julius Caesar, Año: 1953
ID: tt0070608, Título: Robin Hood, Año: 1973
ID: tt0019777, Título: The Cocoanuts, Año: 1929
ID: tt0372183, Título: The Bourne Supremacy, Año: 2004
ID: tt0123964, Título: Life, Año: 1999
ID: tt0022698, Título: Blonde Venus, Año: 1932
ID: tt1152836, Título: Public Enemies, Año: 2009
ID: tt0093565, Título: Moonstruck, Año: 1987
ID: tt0029811, Título: Young and Innocent, Año: 1937
ID: tt0379725, Título: Capote, Año: 2005
ID: tt1334260, Título: Never Let Me Go, Año: 2010
ID: tt0120591, Título: Armageddon, Año: 1998
ID: tt0104036, Título: The Crying Game, Año: 1992
ID: tt0093818, Título: Radio Days, Año: 1987
ID: tt0051406, Título: Bell Book and Candle, Año: 1958
ID: tt0080455, Título: The Blues Brothers, Año: 1980
ID: tt0083833, Título: Diner, Año: 1982
ID: tt0041090, Título: Adam's Rib, Año: 1949
ID: tt0183505, Título: Me, Myself & Irene, Año: 2000
ID: tt0099088, Título: Back to the Future Part III, Año: 1990
ID: tt0046085, Título: Mogambo, Año: 1953
ID: tt0419294, Título: The Three Burials of Melquiades Estrada, Año: 2005
ID: tt0097937, Título: My Left Foot: The Story of Christy Brown, Año: 1989
ID: tt0026205, Título: China Seas, Año: 1935
ID: tt0362227, Título: The Terminal, Año: 2004
ID: tt0025464, Título: Manhattan Melodrama, Año: 1934
ID: tt0029217, Título: Marked Woman, Año: 1937
ID: tt0074512, Título: Family Plot, Año: 1976
ID: tt0120655, Título: Dogma, Año: 1999
ID: tt0104431, Título: Home Alone 2: Lost in New York, Año: 1992
ID: tt0887883, Título: Burn After Reading, Año: 2008
ID: tt0103939, Título: Chaplin, Año: 1992
ID: tt0068334, Título: The Candidate, Año: 1972
ID: tt0035211, Título: The Pride of the Yankees, Año: 1942
ID: tt0054047, Título: The Magnificent Seven, Año: 1960
ID: tt0017765, Título: College, Año: 1927
ID: tt0066011, Título: Love Story, Año: 1970
ID: tt0114694, Título: Tommy Boy, Año: 1995
ID: tt0356721, Título: I Heart Huckabees, Año: 2004
ID: tt0056541, Título: Sweet Bird of Youth, Año: 1962
ID: tt0084787, Título: The Thing, Año: 1982
ID: tt0496806, Título: Ocean's Thirteen, Año: 2007
ID: tt0052182, Título: Separate Tables, Año: 1958
ID: tt0097027, Título: Casualties of War, Año: 1989
ID: tt0138524, Título: Intolerable Cruelty, Año: 2003
ID: tt0106918, Título: The Firm, Año: 1993
ID: tt0103776, Título: Batman Returns, Año: 1992
ID: tt0086873, Título: All of Me, Año: 1984
ID: tt0062975, Título: Firecreek, Año: 1968
ID: tt0838221, Título: The Darjeeling Limited, Año: 2007
ID: tt0043983, Título: Royal Wedding, Año: 1951
ID: tt0096283, Título: Tonari no Totoro, Año: 1988
ID: tt0049875, Título: Trapeze, Año: 1956
ID: tt0050861, Título: The Prince and the Showgirl, Año: 1957
ID: tt0115736, Título: Bound, Año: 1996
ID: tt0044557, Título: Don't Bother to Knock, Año: 1952
ID: tt1045658, Título: Silver Linings Playbook, Año: 2012
ID: tt0077742, Título: Interiors, Año: 1978
ID: tt0062376, Título: To Sir, with Love, Año: 1967
ID: tt0051077, Título: The Three Faces of Eve, Año: 1957
ID: tt0118842, Título: Chasing Amy, Año: 1997
ID: tt0034248, Título: Suspicion, Año: 1941
ID: tt0019702, Título: Blackmail, Año: 1929
ID: tt0124298, Título: Blast from the Past, Año: 1999
ID: tt0048705, Título: The Tender Trap, Año: 1955
ID: tt0427944, Título: Thank You for Smoking, Año: 2005
ID: tt0028216, Título: San Francisco, Año: 1936
ID: tt0050658, Título: Love in the Afternoon, Año: 1957
ID: tt0050825, Título: Paths of Glory, Año: 1957
ID: tt0265666, Título: The Royal Tenenbaums, Año: 2001
ID: tt0215129, Título: Road Trip, Año: 2000
ID: tt0030287, Título: Jezebel, Año: 1938
ID: tt0059166, Título: The Family Jewels, Año: 1965
ID: tt0092099, Título: Top Gun, Año: 1986
ID: tt0053810, Título: The Facts of Life, Año: 1960
ID: tt0106856, Título: Falling Down, Año: 1993
ID: tt0060934, Título: The Sand Pebbles, Año: 1966
ID: tt0101507, Título: Boyz n the Hood, Año: 1991
ID: tt0061747, Título: Hang 'Em High, Año: 1968
ID: tt0325805, Título: Matchstick Men, Año: 2003
ID: tt0107050, Título: Grumpy Old Men, Año: 1993
ID: tt0061452, Título: Casino Royale, Año: 1967
ID: tt0082340, Título: Escape from New York, Año: 1981
ID: tt0097523, Título: Honey, I Shrunk the Kids, Año: 1989
ID: tt0170016, Título: How the Grinch Stole Christmas, Año: 2000
ID: tt1084950, Título: Rachel Getting Married, Año: 2008
ID: tt0048140, Título: Guys and Dolls, Año: 1955
ID: tt0090886, Título: Crimes of the Heart, Año: 1986
ID: tt0094608, Título: The Accused, Año: 1988
ID: tt0247425, Título: In the Bedroom, Año: 2001
ID: tt0086837, Título: 2010: The Year We Make Contact, Año: 1984
ID: tt0325710, Título: The Last Samurai, Año: 2003
ID: tt0078902, Título: Breaking Away, Año: 1979
ID: tt0349903, Título: Ocean's Twelve, Año: 2004
ID: tt0073692, Título: Shampoo, Año: 1975
ID: tt0030295, Título: Judge Hardy's Children, Año: 1938
ID: tt0054412, Título: Tunes of Glory, Año: 1960
ID: tt0079638, Título: Norma Rae, Año: 1979
ID: tt0051207, Título: The Wrong Man, Año: 1956
ID: tt0038057, Título: Scarlet Street, Año: 1945
ID: tt0050105, Título: An Affair to Remember, Año: 1957
ID: tt0064757, Título: On Her Majesty's Secret Service, Año: 1969
ID: tt0040613, Título: Mr. Blandings Builds His Dream House, Año: 1948
ID: tt1270798, Título: X: First Class, Año: 2011
ID: tt0048261, Título: Kiss Me Deadly, Año: 1955
ID: tt0033712, Título: Here Comes Mr. Jordan, Año: 1941
ID: tt0219965, Título: Bandits, Año: 2001
ID: tt0025748, Título: The Scarlet Pimpernel, Año: 1934
ID: tt0049314, Título: High Society, Año: 1956
ID: tt0244244, Título: Swordfish, Año: 2001
ID: tt0102057, Título: Hook, Año: 1991
ID: tt0038965, Título: Somewhere in the Night, Año: 1946
ID: tt0101272, Título: The Addams Family, Año: 1991
ID: tt0039192, Título: Black Narcissus, Año: 1947
ID: tt0016884, Título: Flesh and the Devil, Año: 1926
ID: tt1602620, Título: Amour, Año: 2012
ID: tt0343737, Título: The Good Shepherd, Año: 2006
ID: tt0052735, Título: The Devil's Disciple, Año: 1959
ID: tt0368891, Título: National Treasure, Año: 2004
ID: tt0042700, Título: Madeleine, Año: 1950
ID: tt0373889, Título: Harry Potter and the Order of the Phoenix, Año: 2007
ID: tt0070355, Título: Magnum Force, Año: 1973
ID: tt0044672, Título: The Greatest Show on Earth, Año: 1952
ID: tt0078718, Título: ...And Justice for All, Año: 1979
ID: tt0112818, Título: Dead Man Walking, Año: 1995
ID: tt0080140, Título: Wise Blood, Año: 1979
ID: tt0101540, Título: Cape Fear, Año: 1991
ID: tt0060862, Título: The Professionals, Año: 1966
ID: tt0068768, Título: Joe Kidd, Año: 1972
ID: tt0067309, Título: Klute, Año: 1971
ID: tt0097441, Título: Glory, Año: 1989
ID: tt0060445, Título: Gambit, Año: 1966
ID: tt0114388, Título: Sense and Sensibility, Año: 1995
ID: tt0023285, Título: Number Seventeen, Año: 1932
ID: tt0305224, Título: Anger Management, Año: 2003
ID: tt0113161, Título: Get Shorty, Año: 1995
ID: tt0154506, Título: Following, Año: 1998
ID: tt0084412, Título: Night Shift, Año: 1982
ID: tt0060522, Título: How to Steal a Million, Año: 1966
ID: tt1659337, Título: The Perks of Being a Wallflower, Año: 2012
ID: tt0033922, Título: Mr. & Mrs. Smith, Año: 1941
ID: tt0070643, Título: Scarecrow, Año: 1973
ID: tt0450259, Título: Blood Diamond, Año: 2006
ID: tt0076752, Título: The Spy Who Loved Me, Año: 1977
ID: tt0040427, Título: He Walked by Night, Año: 1948
ID: tt0313542, Título: Runaway Jury, Año: 2003
ID: tt0079116, Título: Escape from Alcatraz, Año: 1979
ID: tt0056406, Título: Requiem for a Heavyweight, Año: 1962
ID: tt0068156, Título: 1776, Año: 1972
ID: tt1210166, Título: Moneyball, Año: 2011
ID: tt0060921, Título: The Russians Are Coming the Russians Are Coming, Año: 1966
ID: tt0427969, Título: Hollywoodland, Año: 2006
ID: tt0028691, Título: Captains Courageous, Año: 1937
ID: tt0290334, Título: X2, Año: 2003
ID: tt0089424, Título: Kiss of the Spider Woman, Año: 1985
ID: tt0116483, Título: Happy Gilmore, Año: 1996
ID: tt0470765, Título: For Your Consideration, Año: 2006
ID: tt1748122, Título: Moonrise Kingdom, Año: 2012
ID: tt0102511, Título: Naked Lunch, Año: 1991
ID: tt0146838, Título: Any Given Sunday, Año: 1999
ID: tt1201607, Título: Harry Potter and the Deathly Hallows - Part 2, Año: 2011
ID: tt0015863, Título: Go West, Año: 1925
ID: tt0059012, Título: Campanadas a medianoche, Año: 1965
ID: tt0109348, Título: Bullets Over Broadway, Año: 1994
ID: tt0076451, Título: New York, New York, Año: 1977
ID: tt1616195, Título: J. Edgar, Año: 2011
ID: tt0119008, Título: Donnie Brasco, Año: 1997
ID: tt0026643, Título: The Lives of a Bengal Lancer, Año: 1935
ID: tt0104694, Título: A League of Their Own, Año: 1992
ID: tt0096244, Título: Tequila Sunrise, Año: 1988
ID: tt0070034, Título: Enter the Dragon, Año: 1973
ID: tt0099653, Título: Ghost, Año: 1990
ID: tt0125664, Título: Man on the Moon, Año: 1999
ID: tt0070903, Título: The Way We Were, Año: 1973
ID: tt1074638, Título: Skyfall, Año: 2012
ID: tt0070290, Título: The Last Detail, Año: 1973
ID: tt0408236, Título: Sweeney Todd: The Demon Barber of Fleet Street, Año: 2007
ID: tt0031252, Título: Drums Along the Mohawk, Año: 1939
ID: tt0120484, Título: The Waterboy, Año: 1998
ID: tt0057076, Título: From Russia with Love, Año: 1963
ID: tt0120903, Título: X-Men, Año: 2000
ID: tt1229822, Título: Jane Eyre, Año: 2011
ID: tt0057546, Título: The Sword in the Stone, Año: 1963
ID: tt0100802, Título: Total Recall, Año: 1990
ID: tt0038776, Título: Night and Day, Año: 1946
ID: tt0116629, Título: Independence Day, Año: 1996
ID: tt0177971, Título: The Perfect Storm, Año: 2000
ID: tt0455590, Título: The Last King of Scotland, Año: 2006
ID: tt0093105, Título: Good Morning, Vietnam, Año: 1987
ID: tt0033563, Título: Dumbo, Año: 1941
ID: tt0210945, Título: Remember the Titans, Año: 2000
ID: tt0086465, Título: Trading Places, Año: 1983
ID: tt0118607, Título: Amistad, Año: 1997
ID: tt0036872, Título: Going My Way, Año: 1944
ID: tt0112508, Título: Billy Madison, Año: 1995
ID: tt0061736, Título: A Guide for the Married Man, Año: 1967
ID: tt0054086, Título: The Millionairess, Año: 1960
ID: tt0245686, Título: Joe Dirt, Año: 2001
ID: tt0119528, Título: Liar Liar, Año: 1997
ID: tt0064117, Título: Cactus Flower, Año: 1969
ID: tt0056085, Título: How the West Was Won, Año: 1962
ID: tt0111257, Título: Speed, Año: 1994
ID: tt0332452, Título: Troy, Año: 2004
ID: tt0371746, Título: Iron Man, Año: 2008
ID: tt0108037, Título: The Sandlot, Año: 1993
ID: tt0248667, Título: Ali, Año: 2001
ID: tt0037193, Título: The Princess and the Pirate, Año: 1944
ID: tt0027532, Título: Dodsworth, Año: 1936
ID: tt0375679, Título: Crash, Año: 2004
ID: tt0315327, Título: Bruce Almighty, Año: 2003
ID: tt0079240, Título: The First Great Train Robbery, Año: 1978
ID: tt0117381, Título: Primal Fear, Año: 1996
ID: tt0108358, Título: Tombstone, Año: 1993
ID: tt0098258, Título: Say Anything..., Año: 1989
ID: tt0095489, Título: The Land Before Time, Año: 1988
ID: tt0054135, Título: Ocean's Eleven, Año: 1960
ID: tt0035555, Título: Who Done It?, Año: 1942
ID: tt0028212, Título: Sabotage, Año: 1936
ID: tt0032206, Título: Andy Hardy Meets Debutante, Año: 1940
ID: tt0045607, Título: The Captain's Paradise, Año: 1953
ID: tt1212419, Título: Hereafter, Año: 2010
ID: tt0031517, Título: Judge Hardy and Son, Año: 1939
ID: tt0052918, Título: Imitation of Life, Año: 1959
ID: tt0056964, Título: Critic's Choice, Año: 1963
ID: tt0084370, Título: My Favorite Year, Año: 1982
ID: tt0042367, Título: Cyrano de Bergerac, Año: 1950
ID: tt0090329, Título: Witness, Año: 1985
ID: tt0056891, Título: Bye Bye Birdie, Año: 1963
ID: tt0093409, Título: Lethal Weapon, Año: 1987
ID: tt0094226, Título: The Untouchables, Año: 1987
ID: tt0045471, Título: The Actress, Año: 1953
ID: tt0265086, Título: Black Hawk Down, Año: 2001
ID: tt0207201, Título: What Women Want, Año: 2000
ID: tt0780536, Título: In Bruges, Año: 2008
ID: tt0083131, Título: Stripes, Año: 1981
ID: tt0018328, Título: The Ring, Año: 1927
ID: tt0443706, Título: Zodiac, Año: 2007
ID: tt0033729, Título: How Green Was My Valley, Año: 1941
ID: tt0095705, Título: The Naked Gun: From the Files of Police Squad!, Año: 1988
ID: tt0358273, Título: Walk the Line, Año: 2005
ID: tt0105793, Título: Wayne's World, Año: 1992
ID: tt0082817, Título: Nighthawks, Año: 1981
ID: tt0374900, Título: Napoleon Dynamite, Año: 2004
ID: tt0084329, Título: A Midsummer Night's Sex Comedy, Año: 1982
ID: tt0409459, Título: Watchmen, Año: 2009
ID: tt0086383, Título: Sudden Impact, Año: 1983
ID: tt0134618, Título: Mystery, Alaska, Año: 1999
ID: tt0049470, Título: The Man Who Knew Too Much, Año: 1956
ID: tt0805564, Título: Lars and the Real Girl, Año: 2007
ID: tt0041928, Título: The Stratton Story, Año: 1949
ID: tt0032396, Título: A Dispatch from Reuters, Año: 1940
ID: tt0041944, Título: Take Me Out to the Ball Game, Año: 1949
ID: tt0038461, Título: Deception, Año: 1946
ID: tt0060490, Título: Harper, Año: 1966
ID: tt0041498, Título: I Was a Male War Bride, Año: 1949
ID: tt1675192, Título: Take Shelter, Año: 2011
ID: tt1175491, Título: W., Año: 2008
ID: tt0765443, Título: Eastern Promises, Año: 2007
ID: tt0124315, Título: The Cider House Rules, Año: 1999
ID: tt0097815, Título: Major League, Año: 1989
ID: tt0080319, Título: Nine to Five, Año: 1980
ID: tt0758752, Título: Love & Other Drugs, Año: 2010
ID: tt0368794, Título: I'm Not There, Año: 2007
ID: tt0067589, Título: Plaza Suite, Año: 1971
ID: tt0041716, Título: On the Town, Año: 1949
ID: tt0031647, Título: Midnight, Año: 1939
ID: tt1318514, Título: Rise of the Planet of the Apes, Año: 2011
ID: tt0420223, Título: Stranger Than Fiction, Año: 2006
ID: tt1655420, Título: My Week with Marilyn, Año: 2011
ID: tt0393109, Título: Brick, Año: 2005
ID: tt0465551, Título: Notes on a Scandal, Año: 2006
ID: tt0365737, Título: Syriana, Año: 2005
ID: tt0414993, Título: The Fountain, Año: 2006
ID: tt0017075, Título: The Lodger: A Story of the London Fog, Año: 1927
ID: tt0100449, Título: Quick Change, Año: 1990
ID: tt0027664, Título: The General Died at Dawn, Año: 1936
ID: tt0099422, Título: Dick Tracy, Año: 1990
ID: tt0364961, Título: The Assassination of Richard Nixon, Año: 2004
ID: tt0087231, Título: The Falcon and the Snowman, Año: 1985
ID: tt0060665, Título: A Man for All Seasons, Año: 1966
ID: tt0058453, Título: Paris - When It Sizzles, Año: 1964
ID: tt0083169, Título: Taps, Año: 1981
ID: tt0041503, Título: Impact, Año: 1949
ID: tt0088074, Título: Secret Honor, Año: 1984
ID: tt0338466, Título: Stuck on You, Año: 2003
ID: tt0037166, Título: Passage to Marseille, Año: 1944
ID: tt0964517, Título: The Fighter, Año: 2010
ID: tt0113972, Título: Nick of Time, Año: 1995
ID: tt0187393, Título: The Patriot, Año: 2000
ID: tt0172493, Título: Girl, Interrupted, Año: 1999
ID: tt0112281, Título: Ace Ventura: When Nature Calls, Año: 1995
ID: tt0100758, Título: Teenage Mutant Ninja Turtles, Año: 1990
ID: tt0150216, Título: Cradle Will Rock, Año: 1999
ID: tt0250687, Título: Rat Race, Año: 2001
ID: tt0056048, Título: Gypsy, Año: 1962
ID: tt0210075, Título: Girlfight, Año: 2000
ID: tt0383574, Título: Pirates of the Caribbean: Dead Man's Chest, Año: 2006
ID: tt0092086, Título: Three Amigos!, Año: 1986
ID: tt0096316, Título: Tucker: The Man and His Dream, Año: 1988
ID: tt0053580, Título: The Alamo, Año: 1960
ID: tt0088933, Título: Cocoon, Año: 1985
ID: tt0066193, Título: The Out of Towners, Año: 1970
ID: tt0105265, Título: A River Runs Through It, Año: 1992
ID: tt0087635, Título: The Lonely Guy, Año: 1984
ID: tt0040369, Título: Fort Apache, Año: 1948
ID: tt0069113, Título: The Poseidon Adventure, Año: 1972
ID: tt1441326, Título: Martha Marcy May Marlene, Año: 2011
ID: tt0396269, Título: Wedding Crashers, Año: 2005
ID: tt0038969, Título: Song of the South, Año: 1946
ID: tt1478338, Título: Bridesmaids, Año: 2011
ID: tt0090060, Título: St. Elmo's Fire, Año: 1985
ID: tt0056671, Título: Walk on the Wild Side, Año: 1962
ID: tt0970179, Título: Hugo, Año: 2011
ID: tt0824747, Título: Changeling, Año: 2008
ID: tt0117802, Título: Swingers, Año: 1996
ID: tt0094155, Título: Tin Men, Año: 1987
ID: tt0097428, Título: Ghostbusters II, Año: 1989
ID: tt0093407, Título: Less Than Zero, Año: 1987
ID: tt0208092, Título: Snatch, Año: 2000
ID: tt0086541, Título: Videodrome, Año: 1983
ID: tt0096487, Título: Young Guns, Año: 1988
ID: tt1234548, Título: The Men Who Stare at Goats, Año: 2009
ID: tt0063385, Título: Oliver!, Año: 1968
ID: tt0335245, Título: The Ladykillers, Año: 2004
ID: tt0445922, Título: Across the Universe, Año: 2007
ID: tt0120888, Título: The Wedding Singer, Año: 1998
ID: tt0338348, Título: The Polar Express, Año: 2004
ID: tt0042869, Título: Quicksand, Año: 1950
ID: tt0053716, Título: Cinderfella, Año: 1960
ID: tt0087747, Título: Moscow on the Hudson, Año: 1984
ID: tt0103241, Título: What About Bob?, Año: 1991
ID: tt1130080, Título: The Informant!, Año: 2009
ID: tt0107207, Título: In the Name of the Father, Año: 1993
ID: tt0117038, Título: Michael, Año: 1996
ID: tt0308644, Título: Finding Neverland, Año: 2004
ID: tt0116999, Título: Marvin's Room, Año: 1996
ID: tt0098439, Título: Tango & Cash, Año: 1989
ID: tt0452623, Título: Gone Baby Gone, Año: 2007
ID: tt0048750, Título: The Trouble with Harry, Año: 1955
ID: tt0808417, Título: Persepolis, Año: 2007
ID: tt0098067, Título: Parenthood, Año: 1989
ID: tt0340855, Título: Monster, Año: 2003
ID: tt0317919, Título: Mission: Impossible III, Año: 2006
ID: tt0072081, Título: The Return of the Pink Panther, Año: 1975
ID: tt0070328, Título: Live and Let Die, Año: 1973
ID: tt0079817, Título: Rocky II, Año: 1979
ID: tt0118880, Título: Con Air, Año: 1997
ID: tt0117887, Título: That Thing You Do!, Año: 1996
ID: tt0329575, Título: Seabiscuit, Año: 2003
ID: tt0105378, Título: Shadows and Fog, Año: 1991
ID: tt0032194, Título: All This, and Heaven Too, Año: 1940
ID: tt0027908, Título: Love Before Breakfast, Año: 1936
ID: tt0106519, Título: Carlito's Way, Año: 1993
ID: tt0074749, Título: The Killing of a Chinese Bookie, Año: 1976
ID: tt0333766, Título: Garden State, Año: 2004
ID: tt0427470, Título: The Lookout, Año: 2007
ID: tt1231583, Título: Due Date, Año: 2010
ID: tt0087921, Título: Places in the Heart, Año: 1984
ID: tt0315983, Título: House of Sand and Fog, Año: 2003
ID: tt0031750, Título: The Old Maid, Año: 1939
ID: tt1907668, Título: Flight, Año: 2012
ID: tt0112442, Título: Bad Boys, Año: 1995
ID: tt1226229, Título: Get Him to the Greek, Año: 2010
ID: tt0285823, Título: Once Upon a Time in Mexico, Año: 2003
ID: tt0082517, Título: History of the World: Part I, Año: 1981
ID: tt0378947, Título: Melinda and Melinda, Año: 2004
ID: tt0052792, Título: The FBI Story, Año: 1959
ID: tt1028528, Título: Death Proof, Año: 2007
ID: tt0857191, Título: The Visitor, Año: 2007
ID: tt0478311, Título: Knocked Up, Año: 2007
ID: tt0266987, Título: Spy Game, Año: 2001
ID: tt0101761, Título: The Doors, Año: 1991
ID: tt0475276, Título: United 93, Año: 2006
ID: tt0174856, Título: The Hurricane, Año: 1999
ID: tt0094663, Título: Another Woman, Año: 1988
ID: tt0090670, Título: At Close Range, Año: 1986
ID: tt0195685, Título: Erin Brockovich, Año: 2000
ID: tt1197628, Título: Observe and Report, Año: 2009
ID: tt0472062, Título: Charlie Wilson's War, Año: 2007
ID: tt0457513, Título: Scoop, Año: 2006
ID: tt0395169, Título: Hotel Rwanda, Año: 2004
ID: tt0120915, Título: Star Wars: Episode I - The Phantom Menace, Año: 1999
ID: tt0132347, Título: Mystery Men, Año: 1999
ID: tt0252501, Título: Hearts in Atlantis, Año: 2001
ID: tt0311113, Título: Master and Commander: The Far Side of the World, Año: 2003
ID: tt0259711, Título: Vanilla Sky, Año: 2001
ID: tt0337741, Título: Something's Gotta Give, Año: 2003
ID: tt0096928, Título: Bill & Ted's Excellent Adventure, Año: 1989
ID: tt0436697, Título: The Queen, Año: 2006
ID: tt0458352, Título: The Devil Wears Prada, Año: 2006
ID: tt0120434, Título: Vegas Vacation, Año: 1997
ID: tt0062994, Título: Funny Girl, Año: 1968
ID: tt0024210, Título: The Kennel Murder Case, Año: 1933
ID: tt0041509, Título: The Inspector General, Año: 1949
ID: tt0434409, Título: V for Vendetta, Año: 2005
ID: tt0055916, Título: The Dock Brief, Año: 1962
ID: tt0054594, Título: The Absent Minded Professor, Año: 1961
ID: tt0364725, Título: Dodgeball: A True Underdog Story, Año: 2004
ID: tt0405296, Título: A Scanner Darkly, Año: 2006
ID: tt0041735, Título: The Passionate Friends, Año: 1949
ID: tt0041859, Título: The Set-Up, Año: 1949
ID: tt0059518, Título: None But the Brave, Año: 1965
ID: tt0405676, Título: All the King's Men, Año: 2006
ID: tt0063050, Título: The Heart Is a Lonely Hunter, Año: 1968
ID: tt0111503, Título: True Lies, Año: 1994
ID: tt0053644, Título: The Bellboy, Año: 1960
ID: tt0242423, Título: Dude, Where's My Car?, Año: 2000
ID: tt0196229, Título: Zoolander, Año: 2001
ID: tt0071807, Título: The Man with the Golden Gun, Año: 1974
ID: tt0332379, Título: School of Rock, Año: 2003
ID: tt0080569, Título: Cruising, Año: 1980
ID: tt0028850, Título: A Family Affair, Año: 1937
ID: tt0039806, Título: The Sea of Grass, Año: 1947
ID: tt0369339, Título: Collateral, Año: 2004
ID: tt0039677, Título: Odd Man Out, Año: 1947
ID: tt1024715, Título: Choke, Año: 2008
ID: tt0147800, Título: 10 Things I Hate About You, Año: 1999
ID: tt0037367, Título: This Happy Breed, Año: 1944
ID: tt0490204, Título: Reign Over Me, Año: 2007
ID: tt0332280, Título: The Notebook, Año: 2004
ID: tt0183649, Título: Phone Booth, Año: 2002
ID: tt0040636, Título: The Naked City, Año: 1948
ID: tt1172203, Título: Sita Sings the Blues, Año: 2008
ID: tt0172156, Título: Bad Boys II, Año: 2003
ID: tt0059017, Título: Cat Ballou, Año: 1965
ID: tt0109520, Título: D2: The Mighty Ducks, Año: 1994
ID: tt0111094, Título: The Scout, Año: 1994
ID: tt0052680, Título: Cash McCall, Año: 1960
ID: tt0119978, Título: The Rainmaker, Año: 1997
ID: tt0076070, Título: The Gauntlet, Año: 1977
ID: tt0099409, Título: Desperate Hours, Año: 1990
ID: tt0049653, Título: The Rainmaker, Año: 1956
ID: tt0097722, Título: Lean on Me, Año: 1989
ID: tt0067535, Título: The Organization, Año: 1971
ID: tt0237572, Título: The Pledge, Año: 2001
ID: tt0058580, Título: Sex and the Single Girl, Año: 1964
ID: tt0097493, Título: Heathers, Año: 1988
ID: tt0120184, Título: Sphere, Año: 1998
ID: tt0356910, Título: Mr. & Mrs. Smith, Año: 2005
ID: tt0142342, Título: Big Daddy, Año: 1999
ID: tt0081150, Título: Melvin and Howard, Año: 1980
ID: tt0116731, Título: The Juror, Año: 1996
ID: tt0100395, Título: Postcards from the Edge, Año: 1990
ID: tt0117913, Título: A Time to Kill, Año: 1996
ID: tt0060884, Título: The Rare Breed, Año: 1966
ID: tt0045012, Título: Pat and Mike, Año: 1952
ID: tt0299658, Título: Chicago, Año: 2002
ID: tt0060182, Título: Born Free, Año: 1966
ID: tt1764234, Título: Killing Them Softly, Año: 2012
ID: tt0113862, Título: Mr. Holland's Opus, Año: 1995
ID: tt0144117, Título: The Boondock Saints, Año: 1999
ID: tt0050798, Título: Old Yeller, Año: 1957
ID: tt0079641, Título: Nosferatu - Phantom der Nacht, Año: 1979
ID: tt0113189, Título: GoldenEye, Año: 1995
ID: tt0052545, Título: Alias Jesse James, Año: 1959
ID: tt0025965, Título: We're Not Dressing, Año: 1934
ID: tt0367089, Título: The Squid and the Whale, Año: 2005
ID: tt0060153, Título: Batman: The Movie, Año: 1966
ID: tt0319262, Título: The Day After Tomorrow, Año: 2004
ID: tt0100486, Título: Reversal of Fortune, Año: 1990
ID: tt0058018, Título: The Disorderly Orderly, Año: 1964
ID: tt0283111, Título: National Lampoon's Van Wilder, Año: 2002
ID: tt0183790, Título: A Knight's Tale, Año: 2001
ID: tt0119668, Título: Midnight in the Garden of Good and Evil, Año: 1997
ID: tt0097958, Título: National Lampoon's Christmas Vacation, Año: 1989
ID: tt0443453, Título: Borat: Cultural Learnings of America for Make Benefit Glorious Nation of Kazakhstan, Año: 2006
ID: tt0120885, Título: Wag the Dog, Año: 1997
ID: tt0034890, Título: In This Our Life, Año: 1942
ID: tt0051658, Título: Gigi, Año: 1958
ID: tt0081375, Título: Private Benjamin, Año: 1980
ID: tt0068699, Título: High Plains Drifter, Año: 1973
ID: tt0104868, Título: The Mighty Ducks, Año: 1992
ID: tt0044357, Título: Angel Face, Año: 1952
ID: tt0105046, Título: Of Mice and Men, Año: 1992
ID: tt0124718, Título: He Got Game, Año: 1998
ID: tt0086216, Título: Rumble Fish, Año: 1983
ID: tt0074937, Título: Murder by Death, Año: 1976
ID: tt0061581, Título: Divorce American Style, Año: 1967
ID: tt0295297, Título: Harry Potter and the Chamber of Secrets, Año: 2002
ID: tt0120188, Título: Three Kings, Año: 1999
ID: tt0058456, Título: The Patsy, Año: 1964
ID: tt0044446, Título: The Sound Barrier, Año: 1952
ID: tt0086066, Título: The Outsiders, Año: 1983
ID: tt0042209, Título: At War with the Army, Año: 1950
ID: tt0113117, Título: French Kiss, Año: 1995
ID: tt0146316, Título: Lara Croft: Tomb Raider, Año: 2001
ID: tt0046828, Título: Carmen Jones, Año: 1954
ID: tt0107822, Título: The Piano, Año: 1993
ID: tt0110475, Título: The Mask, Año: 1994
ID: tt0065528, Título: Catch-22, Año: 1970
ID: tt0076723, Título: Slap Shot, Año: 1977
ID: tt1412386, Título: The Best Exotic Marigold Hotel, Año: 2011
ID: tt0046414, Título: Beat the Devil, Año: 1953
ID: tt0113749, Título: Mallrats, Año: 1995
ID: tt0089755, Título: Out of Africa, Año: 1985
ID: tt0105812, Título: White Men Can't Jump, Año: 1992
ID: tt0090305, Título: Weird Science, Año: 1985
ID: tt1336617, Título: Cyrus, Año: 2010
ID: tt0060186, Título: Boy, Did I Get a Wrong Number!, Año: 1966
ID: tt0298408, Título: Laurel Canyon, Año: 2002
ID: tt0109303, Título: Blown Away, Año: 1994
ID: tt0145660, Título: Austin Powers: The Spy Who Shagged Me, Año: 1999
ID: tt0109127, Título: Angels in the Outfield, Año: 1994
ID: tt0112642, Título: Casper, Año: 1995
ID: tt0309377, Título: Blood Work, Año: 2002
ID: tt0094012, Título: Spaceballs, Año: 1987
ID: tt0122933, Título: Analyze This, Año: 1999
ID: tt0090555, Título: Crocodile Dundee, Año: 1986
ID: tt0083598, Título: Author! Author!, Año: 1982
ID: tt0077663, Título: Heaven Can Wait, Año: 1978
ID: tt1403177, Título: Hesher, Año: 2010
ID: tt0094606, Título: The Accidental Tourist, Año: 1988
ID: tt0328107, Título: Man on Fire, Año: 2004
ID: tt0075784, Título: A Bridge Too Far, Año: 1977
ID: tt0795493, Título: Cassandra's Dream, Año: 2007
ID: tt0098621, Título: The War of the Roses, Año: 1989
ID: tt0053796, Título: The Entertainer, Año: 1960
ID: tt0070016, Título: Charlotte's Web, Año: 1973
ID: tt1758692, Título: Like Crazy, Año: 2011
ID: tt0031020, Título: The Adventures of Huckleberry Finn, Año: 1939
ID: tt0036427, Título: They Got Me Covered, Año: 1943
ID: tt0118548, Título: Absolute Power, Año: 1997
ID: tt0028096, Título: The Petrified Forest, Año: 1936
ID: tt0119256, Título: Sydney, Año: 1996
ID: tt0084602, Título: Rocky III, Año: 1982
ID: tt2027064, Título: Blue Caprice, Año: 2013
ID: tt0119567, Título: The Lost World: Jurassic Park, Año: 1997
ID: tt0093773, Título: Predator, Año: 1987
ID: tt0356150, Título: EuroTrip, Año: 2004
ID: tt0018756, Título: Champagne, Año: 1928
ID: tt0143145, Título: The World Is Not Enough, Año: 1999
ID: tt0040982, Título: You Gotta Stay Happy, Año: 1948
Presione una tecla para continuar...

```

El sistema muestra todas las peliculas mostrando su ID, nombre y año.

**Paso 2: Busqueda**

Se busca la pelicula según el criterio elegido.

**2.1 : Buscar por ID**

Se inicia la búsqueda según la ID de la película deseada, una vez encontrada el sistema mostrará sus datos.

```
========================================
     Base de Datos de Películas
========================================
1) Cargar Películas
2) Buscar por id
3) Buscar por director
4) Buscar por género
5) Buscar por década
6) Buscar por rango de calificaciones
7) Buscar por década y género
8) Salir
Ingrese su opción: 2
Ingrese el id de la película: tt0045152
Título: Singin' in the Rain
Año: 1952
Directores:Gene Kelly, Stanley Donen
Rating: 8.3
Presione una tecla para continuar...
````

**2.2 : Buscar por director**

Se inicia la búsqueda según el director elegido por el usuario. Una vez encontrado, se muestran los datos de cada una de sus películas.

````
========================================
     Base de Datos de Películas
========================================
1) Cargar Películas
2) Buscar por id
3) Buscar por director
4) Buscar por género
5) Buscar por década
6) Buscar por rango de calificaciones
7) Buscar por década y género
8) Salir
Ingrese su opción: 3
Ingrese el nombre del director: Christopher Nolan
-------------------------------
Título: Memento
Año: 2000
Director(es):Christopher Nolan
Género(s):Mystery, Thriller
Rating: 8.4
-------------------------------
Título: The Dark Knight
Año: 2008
Director(es):Christopher Nolan
Género(s):Action, Crime, Drama, Thriller
Rating: 9.0
-------------------------------
Título: Inception
Año: 2010
Director(es):Christopher Nolan
Género(s):Action, Adventure, Sci-Fi, Thriller
Rating: 8.8
-------------------------------
Título: The Dark Knight Rises
Año: 2012
Director(es):Christopher Nolan
Género(s):Action, Drama, Thriller
Rating: 8.4
-------------------------------
Título: The Prestige
Año: 2006
Director(es):Christopher Nolan
Género(s):Drama, Mystery, Sci-Fi, Thriller
Rating: 8.5
-------------------------------
Título: Insomnia
Año: 2002
Director(es):Christopher Nolan
Género(s):Drama, Mystery, Thriller
Rating: 7.2
-------------------------------
Título: Batman Begins
Año: 2005
Director(es):Christopher Nolan
Género(s):Action, Crime, Drama
Rating: 8.2
-------------------------------
Título: Following
Año: 1998
Director(es):Christopher Nolan
Género(s):Crime, Mystery, Thriller
Rating: 7.4
-------------------------------
Presione una tecla para continuar...
````
**2.3 : Buscar por género**

Se inicia una búsqueda según el género elegido por el usuario, una vez encontrado se mostrará sus datos.

````
========================================
     Base de Datos de Películas
========================================
1) Cargar Películas
2) Buscar por id
3) Buscar por director
4) Buscar por género
5) Buscar por década
6) Buscar por rango de calificaciones
7) Buscar por década y género
8) Salir
Ingrese su opción: 
4
Ingrese el género de la película: Film-Noir
-------------------------------
Título: Double Indemnity
Año: 1944
Director(es):Billy Wilder
Género(s):Crime, Drama, Film-Noir, Mystery, Thriller
Rating: 8.3
-------------------------------
Título: The Maltese Falcon
Año: 1941
Director(es):John Huston
Género(s):Crime, Film-Noir, Mystery, Romance
Rating: 8.0
-------------------------------
Título: Sunset Blvd.
Año: 1950
Director(es):Billy Wilder
Género(s):Drama, Film-Noir
Rating: 8.4
-------------------------------
Título: Out of the Past
Año: 1947
Director(es):Jacques Tourneur
Género(s):Crime, Drama, Film-Noir, Romance, Thriller
Rating: 8.0
-------------------------------
Título: Touch of Evil
Año: 1958
Director(es):Orson Welles
Género(s):Crime, Drama, Film-Noir, Thriller
Rating: 8.0
-------------------------------
Título: Sweet Smell of Success
Año: 1957
Director(es):Alexander Mackendrick
Género(s):Drama, Film-Noir
Rating: 8.0
-------------------------------
Título: The Big Sleep
Año: 1946
Director(es):Howard Hawks
Género(s):Crime, Film-Noir, Mystery, Thriller
Rating: 7.9
-------------------------------
Título: The Third Man
Año: 1949
Director(es):Carol Reed
Género(s):Film-Noir, Mystery, Thriller
Rating: 8.1
-------------------------------
Título: Nora inu
Año: 1949
Director(es):Akira Kurosawa
Género(s):Crime, Drama, Film-Noir, Mystery, Thriller
Rating: 7.8
-------------------------------
Título: Ace in the Hole
Año: 1951
Director(es):Billy Wilder
Género(s):Drama, Film-Noir
Rating: 8.1
-------------------------------
Título: The Stranger
Año: 1946
Director(es):Orson Welles
Género(s):Crime, Drama, Film-Noir, Mystery, Thriller
Rating: 7.3
-------------------------------
Título: Fury
Año: 1936
Director(es):Fritz Lang
Género(s):Crime, Drama, Film-Noir, Thriller
Rating: 7.8
-------------------------------
Título: Strangers on a Train
Año: 1951
Director(es):Alfred Hitchcock
Género(s):Crime, Drama, Film-Noir, Thriller
Rating: 7.9
-------------------------------
Título: White Heat
Año: 1949
Director(es):Raoul Walsh
Género(s):Action, Crime, Drama, Film-Noir
Rating: 8.1
-------------------------------
Título: Notorious
Año: 1946
Director(es):Alfred Hitchcock
Género(s):Drama, Film-Noir, Romance, Thriller
Rating: 7.9
-------------------------------
Título: To Have and Have Not
Año: 1944
Director(es):Howard Hawks
Género(s):Adventure, Comedy, Film-Noir, Romance, Thriller, War
Rating: 7.8
-------------------------------
Título: The Postman Always Rings Twice
Año: 1946
Director(es):Tay Garnett
Género(s):Crime, Drama, Film-Noir, Mystery, Romance, Thriller
Rating: 7.4
-------------------------------
Título: Laura
Año: 1944
Director(es):Rouben Mamoulian, Otto Preminger
Género(s):Drama, Film-Noir, Mystery
Rating: 7.9
-------------------------------
Título: Mildred Pierce
Año: 1945
Director(es):Michael Curtiz
Género(s):Crime, Drama, Film-Noir, Mystery, Romance
Rating: 7.9
-------------------------------
Título: Shadow of a Doubt
Año: 1943
Director(es):Alfred Hitchcock
Género(s):Film-Noir, Thriller
Rating: 7.8
-------------------------------
Título: Scarface
Año: 1932
Director(es):Howard Hawks, Richard Rosson
Género(s):Action, Crime, Drama, Film-Noir, Thriller
Rating: 7.7
-------------------------------
Título: Gilda
Año: 1946
Director(es):Charles Vidor
Género(s):Drama, Film-Noir, Romance, Thriller
Rating: 7.6
-------------------------------
Título: Born to Kill
Año: 1947
Director(es):Robert Wise
Género(s):Crime, Drama, Film-Noir, Thriller
Rating: 7.2
-------------------------------
Título: Mr. Arkadin
Año: 1955
Director(es):Orson Welles
Género(s):Crime, Drama, Film-Noir, Mystery, Thriller
Rating: 7.1
-------------------------------
Título: The Strange Love of Martha Ivers
Año: 1946
Director(es):Lewis Milestone
Género(s):Drama, Film-Noir, Romance
Rating: 7.4
-------------------------------
Título: The Lost Weekend
Año: 1945
Director(es):Billy Wilder
Género(s):Drama, Film-Noir
Rating: 7.9
-------------------------------
Título: Crossfire
Año: 1947
Director(es):Edward Dmytryk
Género(s):Crime, Drama, Film-Noir, Mystery
Rating: 7.3
-------------------------------
Título: Panic in the Streets
Año: 1950
Director(es):Elia Kazan
Género(s):Crime, Drama, Film-Noir, Thriller
Rating: 7.2
-------------------------------
Título: The Big Combo
Año: 1955
Director(es):Joseph H. Lewis
Género(s):Crime, Drama, Film-Noir, Thriller
Rating: 7.3
-------------------------------
Título: Dark Passage
Año: 1947
Director(es):Delmer Daves
Género(s):Film-Noir, Thriller
Rating: 7.5
-------------------------------
Título: The Night of the Hunter
Año: 1955
Director(es):Charles Laughton
Género(s):Crime, Drama, Film-Noir, Thriller
Rating: 8.0
-------------------------------
Título: The Asphalt Jungle
Año: 1950
Director(es):John Huston
Género(s):Crime, Drama, Film-Noir, Thriller
Rating: 7.8
-------------------------------
Título: Angels with Dirty Faces
Año: 1938
Director(es):Michael Curtiz
Género(s):Crime, Drama, Film-Noir, Thriller
Rating: 7.9
-------------------------------
Título: Pickup on South Street
Año: 1953
Director(es):Samuel Fuller
Género(s):Crime, Film-Noir, Mystery, Thriller
Rating: 7.6
-------------------------------
Título: Stage Fright
Año: 1950
Director(es):Alfred Hitchcock
Género(s):Film-Noir, Mystery, Thriller
Rating: 7.0
-------------------------------
Título: Key Largo
Año: 1948
Director(es):John Huston
Género(s):Action, Crime, Drama, Film-Noir, Thriller
Rating: 7.7
-------------------------------
Título: The Killers
Año: 1946
Director(es):Robert Siodmak
Género(s):Crime, Drama, Film-Noir, Mystery
Rating: 7.7
-------------------------------
Título: Niagara
Año: 1953
Director(es):Henry Hathaway
Género(s):Film-Noir, Thriller
Rating: 7.0
-------------------------------
Título: Spellbound
Año: 1945
Director(es):Alfred Hitchcock
Género(s):Film-Noir, Mystery, Romance, Thriller
Rating: 7.5
-------------------------------
Título: The Killing
Año: 1956
Director(es):Stanley Kubrick
Género(s):Crime, Drama, Film-Noir, Thriller
Rating: 7.9
-------------------------------
Título: Night and the City
Año: 1950
Director(es):Jules Dassin
Género(s):Crime, Film-Noir, Mystery, Sport, Thriller
Rating: 7.9
-------------------------------
Título: Brute Force
Año: 1947
Director(es):Jules Dassin
Género(s):Crime, Drama, Film-Noir, Thriller
Rating: 7.6
-------------------------------
Título: All the King's Men
Año: 1949
Director(es):Robert Rossen
Género(s):Drama, Film-Noir
Rating: 7.4
-------------------------------
Título: Call Northside 777
Año: 1948
Director(es):Henry Hathaway
Género(s):Drama, Film-Noir
Rating: 7.4
-------------------------------
Título: Suddenly
Año: 1954
Director(es):Lewis Allen
Género(s):Crime, Drama, Film-Noir, Thriller
Rating: 6.8
-------------------------------
Título: Marked Woman
Año: 1937
Director(es):Michael Curtiz, Lloyd Bacon
Género(s):Crime, Film-Noir, Thriller
Rating: 7.1
-------------------------------
Título: Don't Bother to Knock
Año: 1952
Director(es):Roy Ward Baker
Género(s):Drama, Film-Noir, Mystery, Thriller
Rating: 6.9
-------------------------------
Título: Suspicion
Año: 1941
Director(es):Alfred Hitchcock
Género(s):Film-Noir, Mystery, Thriller
Rating: 7.3
-------------------------------
Título: The Wrong Man
Año: 1956
Director(es):Alfred Hitchcock
Género(s):Drama, Film-Noir
Rating: 7.4
-------------------------------
Título: Scarlet Street
Año: 1945
Director(es):Fritz Lang
Género(s):Crime, Drama, Film-Noir, Thriller
Rating: 7.7
-------------------------------
Título: Kiss Me Deadly
Año: 1955
Director(es):Robert Aldrich
Género(s):Crime, Film-Noir, Mystery, Sci-Fi, Thriller
Rating: 7.5
-------------------------------
Título: Somewhere in the Night
Año: 1946
Director(es):Joseph L. Mankiewicz
Género(s):Crime, Drama, Film-Noir, Mystery, Romance
Rating: 7.0
-------------------------------
Título: He Walked by Night
Año: 1948
Director(es):Anthony Mann, Alfred L. Werker
Género(s):Crime, Film-Noir, Thriller
Rating: 7.0
-------------------------------
Título: Deception
Año: 1946
Director(es):Irving Rapper
Género(s):Drama, Film-Noir, Music, Romance
Rating: 7.0
-------------------------------
Título: Impact
Año: 1949
Director(es):Arthur Lubin
Género(s):Crime, Drama, Film-Noir, Thriller
Rating: 7.0
-------------------------------
Título: Quicksand
Año: 1950
Director(es):Irving Pichel
Género(s):Crime, Drama, Film-Noir, Romance
Rating: 6.6
-------------------------------
Título: The Set-Up
Año: 1949
Director(es):Robert Wise
Género(s):Crime, Film-Noir, Sport
Rating: 7.8
-------------------------------
Título: Odd Man Out
Año: 1947
Director(es):Carol Reed
Género(s):Crime, Drama, Film-Noir, Thriller
Rating: 7.6
-------------------------------
Título: The Naked City
Año: 1948
Director(es):Jules Dassin
Género(s):Crime, Drama, Film-Noir, Mystery, Thriller
Rating: 7.5
-------------------------------
Título: Angel Face
Año: 1952
Director(es):Otto Preminger
Género(s):Crime, Drama, Film-Noir, Romance, Thriller
Rating: 7.2
-------------------------------
Presione una tecla para continuar...
````

**2.4 : Buscar por década**

Se inicia una busqueda según la década elegida por el usuario, una vez encontrado se mostrará sus datos.
````
========================================
     Base de Datos de Películas
========================================
1) Cargar Películas
2) Buscar por id
3) Buscar por director
4) Buscar por género
5) Buscar por década
6) Buscar por rango de calificaciones
7) Buscar por década y género
8) Salir
Ingrese su opción: 5
Ingrese la decada de la película: 20
-------------------------------
Título: The General
Año: 1926
Director(es):Clyde Bruckman, Buster Keaton
Género(s):Action, Adventure, Comedy, Drama, War
Rating: 8.1
-------------------------------
Título: The Gold Rush
Año: 1925
Director(es):Charles Chaplin
Género(s):Adventure, Comedy, Drama, Romance, Western
Rating: 8.1
-------------------------------
Título: Das Cabinet des Dr. Caligari
Año: 1920
Director(es):Robert Wiene
Género(s):Horror, Mystery, Thriller
Rating: 8.0
-------------------------------
Título: Seven Chances
Año: 1925
Director(es):Buster Keaton
Género(s):Comedy, Romance
Rating: 7.8
-------------------------------
Título: The Kid
Año: 1921
Director(es):Charles Chaplin
Género(s):Comedy, Drama, Family
Rating: 8.2
-------------------------------
Título: The Navigator
Año: 1924
Director(es):Buster Keaton, Donald Crisp
Género(s):Action, Comedy, Romance
Rating: 7.6
-------------------------------
Título: Bronenosets Potyomkin
Año: 1925
Director(es):Sergei Eisenstein
Género(s):Drama, History, Thriller, War
Rating: 7.9
-------------------------------
Título: Our Hospitality
Año: 1923
Director(es):Buster Keaton, John G. Blystone
Género(s):Comedy, Romance, Thriller
Rating: 7.8
-------------------------------
Título: Der letzte Mann
Año: 1924
Director(es):F.W. Murnau
Género(s):Drama
Rating: 8.0
-------------------------------
Título: Sherlock Jr.
Año: 1924
Director(es):Buster Keaton
Género(s):Action, Comedy, Romance
Rating: 8.2
-------------------------------
Título: Battling Butler
Año: 1926
Director(es):Buster Keaton
Género(s):Comedy, Sport
Rating: 7.0
-------------------------------
Título: Steamboat Bill, Jr.
Año: 1928
Director(es):Buster Keaton, Charles Reisner
Género(s):Action, Comedy, Drama, Family, Romance
Rating: 7.8
-------------------------------
Título: The Circus
Año: 1928
Director(es):Charles Chaplin
Género(s):Comedy, Family, Romance
Rating: 8.1
-------------------------------
Título: It
Año: 1927
Director(es):Josef von Sternberg, Clarence G. Badger
Género(s):Comedy, Romance
Rating: 7.2
-------------------------------
Título: The Cameraman
Año: 1928
Director(es):Buster Keaton, Edward Sedgwick
Género(s):Comedy, Drama, Family, Romance
Rating: 8.0
-------------------------------
Título: Three Ages
Año: 1923
Director(es):Buster Keaton, Edward F. Cline
Género(s):Comedy
Rating: 7.0
-------------------------------
Título: The Ten Commandments
Año: 1923
Director(es):Cecil B. DeMille
Género(s):Biography, Drama, History
Rating: 6.8
-------------------------------
Título: The Cocoanuts
Año: 1929
Director(es):Joseph Santley, Robert Florey
Género(s):Comedy, Musical, Romance
Rating: 6.8
-------------------------------
Título: College
Año: 1927
Director(es):James W. Horne, Buster Keaton
Género(s):Comedy, Drama, Sport
Rating: 6.9
-------------------------------
Título: Blackmail
Año: 1929
Director(es):Alfred Hitchcock
Género(s):Crime, Drama, Thriller
Rating: 6.9
-------------------------------
Título: Flesh and the Devil
Año: 1926
Director(es):Clarence Brown
Género(s):Drama
Rating: 7.6
-------------------------------
Título: Go West
Año: 1925
Director(es):Buster Keaton
Género(s):Comedy, Western
Rating: 7.1
-------------------------------
Título: The Ring
Año: 1927
Director(es):Alfred Hitchcock
Género(s):Drama, Romance, Sport
Rating: 6.1
-------------------------------
Título: The Lodger: A Story of the London Fog
Año: 1927
Director(es):Alfred Hitchcock
Género(s):Crime, Drama, Mystery, Thriller
Rating: 7.3
-------------------------------
Título: Champagne
Año: 1928
Director(es):Alfred Hitchcock
Género(s):Comedy
Rating: 5.4
-------------------------------
Presione una tecla para continuar...
````

**2.5 : Buscar por rango de calificaciones**

Se le pregunta al usuario un rango de calificaciones en la cual desea buscar y usa vez filtrado se mostraran las peliculas junto a sus datos.
````
========================================
     Base de Datos de Películas
========================================
1) Cargar Películas
2) Buscar por id
3) Buscar por director
4) Buscar por género
5) Buscar por década
6) Buscar por rango de calificaciones
7) Buscar por década y género
8) Salir
Ingrese su opción: 6
Ingrese el rating minimo de la película: 9
Ingrese el rating maximo de la película: 9.3
-------------------------------
Título: The Godfather
Año: 1972
Director(es):Francis Ford Coppola
Género(s):Crime, Drama
Rating: 9.2
-------------------------------
Título: 12 Angry Men
Año: 1957
Director(es):Sidney Lumet
Género(s):Crime, Drama
Rating: 9.0
-------------------------------
Título: Schindler's List
Año: 1993
Director(es):Steven Spielberg
Género(s):Biography, Drama, History
Rating: 9.0
-------------------------------
Título: The Godfather Part II
Año: 1974
Director(es):Francis Ford Coppola
Género(s):Crime, Drama
Rating: 9.0
-------------------------------
Título: The Lord of the Rings: The Return of the King
Año: 2003
Director(es):Peter Jackson
Género(s):Action, Adventure, Drama, Fantasy
Rating: 9.0
-------------------------------
Título: The Dark Knight
Año: 2008
Director(es):Christopher Nolan
Género(s):Action, Crime, Drama, Thriller
Rating: 9.0
-------------------------------
Título: The Shawshank Redemption
Año: 1994
Director(es):Frank Darabont
Género(s):Drama
Rating: 9.3
-------------------------------
Presione una tecla para continuar...
````
**2.6 : Buscar por década y género**

El usuario ingresa una década y un género por el cual se quiera filtrar y el sistema buscará las peliculas que encajen con este. Se mostrara por pantalla el título, año, rating y el género que se buscó.
````
========================================
     Base de Datos de Películas
========================================
1) Cargar Películas
2) Buscar por id
3) Buscar por director
4) Buscar por género
5) Buscar por década
6) Buscar por rango de calificaciones
7) Buscar por década y género
8) Salir
Ingrese su opción: 7
Ingrese la decada de la película: 20
Ingrese el género de la película: Drama
-------------------------------
Título: The General
Año: 1926
Director(es):Clyde Bruckman, Buster Keaton
Género(s):Action, Adventure, Comedy, Drama, War
Rating: 8.1
-------------------------------
Título: The Gold Rush
Año: 1925
Director(es):Charles Chaplin
Género(s):Adventure, Comedy, Drama, Romance, Western
Rating: 8.1
-------------------------------
Título: The Kid
Año: 1921
Director(es):Charles Chaplin
Género(s):Comedy, Drama, Family
Rating: 8.2
-------------------------------
Título: Bronenosets Potyomkin
Año: 1925
Director(es):Sergei Eisenstein
Género(s):Drama, History, Thriller, War
Rating: 7.9
-------------------------------
Título: Der letzte Mann
Año: 1924
Director(es):F.W. Murnau
Género(s):Drama
Rating: 8.0
-------------------------------
Título: Steamboat Bill, Jr.
Año: 1928
Director(es):Buster Keaton, Charles Reisner
Género(s):Action, Comedy, Drama, Family, Romance
Rating: 7.8
-------------------------------
Título: The Cameraman
Año: 1928
Director(es):Buster Keaton, Edward Sedgwick
Género(s):Comedy, Drama, Family, Romance
Rating: 8.0
-------------------------------
Título: The Ten Commandments
Año: 1923
Director(es):Cecil B. DeMille
Género(s):Biography, Drama, History
Rating: 6.8
-------------------------------
Título: College
Año: 1927
Director(es):James W. Horne, Buster Keaton
Género(s):Comedy, Drama, Sport
Rating: 6.9
-------------------------------
Título: Blackmail
Año: 1929
Director(es):Alfred Hitchcock
Género(s):Crime, Drama, Thriller
Rating: 6.9
-------------------------------
Título: Flesh and the Devil
Año: 1926
Director(es):Clarence Brown
Género(s):Drama
Rating: 7.6
-------------------------------
Título: The Ring
Año: 1927
Director(es):Alfred Hitchcock
Género(s):Drama, Romance, Sport
Rating: 6.1
-------------------------------
Título: The Lodger: A Story of the London Fog
Año: 1927
Director(es):Alfred Hitchcock
Género(s):Crime, Drama, Mystery, Thriller
Rating: 7.3
-------------------------------
Presione una tecla para continuar...
````

## Contribuciones 

### Benjamín Sepúlveda:

- Desarrolló las funciones de buscar por década y género, buscar por década.
- Solucionó errores visibles en el codigo.
- Perfeccionó funciones para evitar errores.
- Redacción del README.
- **Auto-evaluación**: 3 (Aporte exelente).

### David Henriquez:

- Implementó la función buscar por género, buscar por rating, buscar por director.
- Documentación y comentarios en el código.
- Diseño y redacción del README.
- **Auto-evaluación**: 3 (Aporte excelente).